/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


#import <PassKitCore/PassKitCore-Structs.h>
@class NSArray, NSString;

@interface PKAccountVirtualCardEncryptionFields : NSObject {

	NSArray* _certificates;
	NSString* _encryptionVersion;
	os_unfair_lock_s _lock;

}
-(id)dictionaryRepresentation;
-(id)init;
-(void)prepareCertificateWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)prepareOneTimeCertificateWithQueue:(id)arg1 completion:(/*^block*/id)arg2 ;
@end

