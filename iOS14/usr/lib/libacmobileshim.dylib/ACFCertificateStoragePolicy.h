/*
* Generated on Thursday, January 14, 2021 at 2:29:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libacmobileshim.dylib
*/


@protocol ACFCertificateStoragePolicy <NSObject>
@required
-(BOOL)removeCertificateWithLabel:(id)arg1 realm:(id)arg2;
-(BOOL)storeCertificate:(SecCertificateRef)arg1 realm:(id)arg2;
-(SecCertificateRef)certificateWithLabel:(id)arg1 realm:(id)arg2;

@end

