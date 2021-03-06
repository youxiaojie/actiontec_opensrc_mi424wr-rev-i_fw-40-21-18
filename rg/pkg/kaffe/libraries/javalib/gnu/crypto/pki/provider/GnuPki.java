/* GnuPki.java -- GNU PKI security provider.
   Copyright (C) 2004  Free Software Foundation, Inc.

This file is part of GNU Crypto;

GNU Crypto is free software; you can redistribute it and/or modify it
under the terms of the GNU General Public License as published by the
Free Software Foundation; either version 2, or (at your option) any
later version.

GNU Crypto is distributed in the hope that it will be useful, but
WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
General Public License for more details.

You should have received a copy of the GNU General Public License
along with GNU Crypto; see the file COPYING.  If not, write to the
Free Software Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
02110-1301 USA.

Linking this library statically or dynamically with other modules is
making a combined work based on this library.  Thus, the terms and
conditions of the GNU General Public License cover the whole
combination.

As a special exception, the copyright holders of this library give you
permission to link this library with independent modules to produce an
executable, regardless of the license terms of these independent
modules, and to copy and distribute the resulting executable under
terms of your choice, provided that you also meet, for each linked
independent module, the terms and conditions of the license of that
module.  An independent module is a module which is not derived from
or based on this library.  If you modify this library, you may extend
this exception to your version of the library, but you are not
obligated to do so.  If you do not wish to do so, delete this
exception statement from your version. */


package gnu.crypto.pki.provider;

import java.security.AccessController;
import java.security.PrivilegedAction;
import java.security.Provider;

public final class GnuPki extends Provider
{

  // Constants.
  // -------------------------------------------------------------------------

  public static final double VERSION = 2.1;

  // Constructors.
  // -------------------------------------------------------------------------

  public GnuPki()
  {
    super("GNU-PKI", VERSION, "Implementing X.509 certificates, " +
          "CRLs, certificate paths, path builders and validators.");

    AccessController.doPrivileged(new PrivilegedAction()
    {
      public Object run()
      {
        put("AlgorithmParameters.DSA", DSAParameters.class.getName());
        put("Alg.Alias.AlgorithmParameters.DSS", "DSA");
        put("Alg.Alias.AlgorithmParameters.SHAwithDSA", "DSA");
        put("Alg.Alias.AlgorithmParameters.OID.1.2.840.10040.4.3", "DSA");
        put("Alg.Alias.AlgorithmParameters.1.2.840.10040.4.3", "DSA");

        put("CertificateFactory.X509", X509CertificateFactory.class.getName());
        put("CertificateFactory.X509 ImplementedIn", "Software");
        put("Alg.Alias.CertificateFactory.X.509", "X509");

        // FIXME CertPathBuilder.PKIX
        // FIXME CertPathValidator.OCSP

        put("CertPathValidator.PKIX", PKIXCertPathValidator.class.getName());
        put("CertPathValidator.PKIX ImplementedIn", "Software");

        put("CertStore.Collection", CollectionCertStoreImpl.class.getName());
        // FIXME CertStore.LDAP

        put("KeyFactory.Encoded", EncodedKeyFactory.class.getName());
        put("KeyFactory.Encoded ImplementedIn", "Software");
        put("Alg.Alias.KeyFactory.X.509", "Encoded");
        put("Alg.Alias.KeyFactory.X509", "Encoded");
        put("Alg.Alias.KeyFactory.PKCS#8", "Encoded");
        put("Alg.Alias.KeyFactory.PKCS8", "Encoded");

        put("KeyFactory.RSA", RSAKeyFactory.class.getName());

        put("Signature.DSA", DSASignature.class.getName());
        put("Alg.Alias.Signature.DSS", "DSA");
        put("Alg.Alias.Signature.SHAwithDSA", "DSA");
        put("Alg.Alias.Signature.OID.1.2.840.10040.4.3", "DSA");
        put("Alg.Alias.Signature.1.2.840.10040.4.3", "DSA");

        // FIXME Signature.ECDSA

        put("Signature.MD2withRSA", MD2withRSA.class.getName());
        put("Signature.MD2withRSA ImplementedIn", "Software");
        put("Alg.Alias.Signature.md2WithRSAEncryption", "MD2withRSA");
        put("Alg.Alias.Signature.OID.1.2.840.113549.1.1.2", "MD2withRSA");
        put("Alg.Alias.Signature.1.2.840.113549.1.1.2", "MD2withRSA");

        put("Signature.MD5withRSA", MD5withRSA.class.getName());
        put("Signature.MD5withRSA ImplementedIn", "Software");
        put("Alg.Alias.Signature.md5WithRSAEncryption", "MD5withRSA");
        put("Alg.Alias.Signature.OID.1.2.840.113549.1.1.4", "MD5withRSA");
        put("Alg.Alias.Signature.1.2.840.113549.1.1.4", "MD5withRSA");

        put("Signature.SHA1withRSA", SHA1withRSA.class.getName());
        put("Signature.SHA1withRSA ImplementedIn", "Software");
        put("Alg.Alias.Signature.sha-1WithRSAEncryption", "SHA1withRSA");
        put("Alg.Alias.Signature.OID.1.2.840.113549.1.1.5", "SHA1withRSA");
        put("Alg.Alias.Signature.1.2.840.113549.1.1.5", "SHA1withRSA");

        return null;
      }
    });
  }

}
