/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


#import <PassKitCore/PassKitCore-Structs.h>
@class NSData, NSString;

@interface PKAccountVirtualCardEncryptionFields : NSObject {

	NSData* _publicCertificate;
	NSString* _encryptionVersion;
	os_unfair_lock_s _lock;

}
-(id)init;
-(id)dictionaryRepresentation;
-(void)prepareCertificateWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)prepareOneTimeCertificateWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

