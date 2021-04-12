/*
* Generated on Thursday, January 14, 2021 at 2:21:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentRequest.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class PKServiceProviderOrder;

@interface PKServiceProviderPaymentRequest : PKPaymentRequest <NSSecureCoding> {

	PKServiceProviderOrder* _serviceProviderOrder;

}

@property (nonatomic,readonly) PKServiceProviderOrder * serviceProviderOrder;              //@synthesize serviceProviderOrder=_serviceProviderOrder - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)availableNetworks;
-(id)initWithServiceProviderOrder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(PKServiceProviderOrder *)serviceProviderOrder;
-(id)initWithCoder:(id)arg1 ;
-(id)merchantIdentifier;
-(BOOL)isEqual:(id)arg1 ;
@end

