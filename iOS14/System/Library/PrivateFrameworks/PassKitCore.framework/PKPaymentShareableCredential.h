/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentCredential.h>

@class PKEncryptedPushProvisioningTarget, NSString, NSData;

@interface PKPaymentShareableCredential : PKPaymentCredential {

	BOOL _backgroundProvisioning;
	PKEncryptedPushProvisioningTarget* _encryptedProvisioningTarget;
	NSString* _sharingInstanceIdentifier;
	NSData* _passThumbnailImageData;

}

@property (nonatomic,readonly) PKEncryptedPushProvisioningTarget * encryptedProvisioningTarget;              //@synthesize encryptedProvisioningTarget=_encryptedProvisioningTarget - In the implementation block
@property (nonatomic,readonly) NSString * sharingInstanceIdentifier;                                         //@synthesize sharingInstanceIdentifier=_sharingInstanceIdentifier - In the implementation block
@property (nonatomic,readonly) NSData * passThumbnailImageData;                                              //@synthesize passThumbnailImageData=_passThumbnailImageData - In the implementation block
@property (getter=isBackgroundProvisioning,nonatomic,readonly) BOOL backgroundProvisioning;                  //@synthesize backgroundProvisioning=_backgroundProvisioning - In the implementation block
-(id)initWithEncryptedProvisioningTarget:(id)arg1 provisioningSharingIdentifier:(id)arg2 passThumbnailImageData:(id)arg3 ;
-(BOOL)isBackgroundProvisioning;
-(id)initWithProvisioningSharingIdentifer:(id)arg1 isBackgroundProvisioning:(BOOL)arg2 ;
-(PKEncryptedPushProvisioningTarget *)encryptedProvisioningTarget;
-(NSData *)passThumbnailImageData;
-(NSString *)sharingInstanceIdentifier;
@end

