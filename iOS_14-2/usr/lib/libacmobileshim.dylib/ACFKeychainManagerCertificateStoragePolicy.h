/*
* Generated on Thursday, January 14, 2021 at 2:29:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libacmobileshim.dylib
*/

#import <libacmobileshim.dylib/libacmobileshim.dylib-Structs.h>
#import <libobjc.A.dylib/ACFCertificateStoragePolicy.h>

@class NSString;

@interface ACFKeychainManagerCertificateStoragePolicy : NSObject <ACFCertificateStoragePolicy>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)keychainManager;
-(BOOL)removeCertificateWithLabel:(id)arg1 realm:(id)arg2 ;
-(BOOL)storeCertificate:(SecCertificateRef)arg1 realm:(id)arg2 ;
-(SecCertificateRef)certificateWithLabel:(id)arg1 realm:(id)arg2 ;
@end

