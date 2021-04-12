/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)merchantIdentifier;
-(PKServiceProviderOrder *)serviceProviderOrder;
-(id)initWithServiceProviderOrder:(id)arg1 ;
@end

