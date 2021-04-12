/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <PassKitCore/PKIssuerProvisioningExtensionPassEntry.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKAddPaymentPassRequestConfiguration;

@interface PKIssuerProvisioningExtensionPaymentPassEntry : PKIssuerProvisioningExtensionPassEntry <NSSecureCoding> {

	PKAddPaymentPassRequestConfiguration* _addRequestConfiguration;

}

@property (nonatomic,readonly) PKAddPaymentPassRequestConfiguration * addRequestConfiguration;              //@synthesize addRequestConfiguration=_addRequestConfiguration - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_initWithType:(long long)arg1 identifier:(id)arg2 title:(id)arg3 art:(CGImageRef)arg4 ;
-(id)initWithIdentifier:(id)arg1 title:(id)arg2 art:(CGImageRef)arg3 addRequestConfiguration:(id)arg4 ;
-(PKAddPaymentPassRequestConfiguration *)addRequestConfiguration;
@end

