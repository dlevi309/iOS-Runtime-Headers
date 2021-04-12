/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentProductsActionRequest : PKPaymentWebServiceRequest {

	NSString* _action;
	NSString* _productIdentifier;

}

@property (nonatomic,copy) NSString * action;                           //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) NSString * productIdentifier;              //@synthesize productIdentifier=_productIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setProductIdentifier:(NSString *)arg1 ;
-(NSString *)action;
-(void)setAction:(NSString *)arg1 ;
-(NSString *)productIdentifier;
-(id)initWithCoder:(id)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
@end

