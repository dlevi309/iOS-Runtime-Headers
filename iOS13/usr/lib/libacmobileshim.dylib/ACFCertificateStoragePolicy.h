/*
* Generated on Monday, March 1, 2021 at 2:35:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /usr/lib/libacmobileshim.dylib
*/


@protocol ACFCertificateStoragePolicy <NSObject>
@required
-(BOOL)removeCertificateWithLabel:(id)arg1 realm:(id)arg2;
-(BOOL)storeCertificate:(SecCertificateRef)arg1 realm:(id)arg2;
-(SecCertificateRef)certificateWithLabel:(id)arg1 realm:(id)arg2;

@end

