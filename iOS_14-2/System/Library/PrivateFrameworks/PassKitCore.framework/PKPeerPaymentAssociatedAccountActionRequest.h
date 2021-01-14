/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPeerPaymentWebServiceRequest.h>

@class NSString;

@interface PKPeerPaymentAssociatedAccountActionRequest : PKPeerPaymentWebServiceRequest {

	NSString* _associatedAccountIdentifier;
	NSString* _featureIdentifier;
	NSString* _value;

}

@property (nonatomic,copy) NSString * featureIdentifier;              //@synthesize featureIdentifier=_featureIdentifier - In the implementation block
@property (nonatomic,copy) NSString * value;                          //@synthesize value=_value - In the implementation block
-(void)setValue:(NSString *)arg1 ;
-(NSString *)featureIdentifier;
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 ;
-(void)setFeatureIdentifier:(NSString *)arg1 ;
-(id)initWithAssociatedAccountIdentifier:(id)arg1 ;
-(NSString *)value;
@end

