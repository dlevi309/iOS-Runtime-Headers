/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString, PKServiceProviderPurchase;

@interface PKPaymentServiceProviderPerformActionRequest : PKPaymentWebServiceRequest {

	NSString* _action;
	PKServiceProviderPurchase* _purchase;

}

@property (nonatomic,copy) NSString * action;                                   //@synthesize action=_action - In the implementation block
@property (nonatomic,retain) PKServiceProviderPurchase * purchase;              //@synthesize purchase=_purchase - In the implementation block
-(NSString *)action;
-(void)setAction:(NSString *)arg1 ;
-(PKServiceProviderPurchase *)purchase;
-(void)setPurchase:(PKServiceProviderPurchase *)arg1 ;
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 ;
-(id)initWithAction:(id)arg1 purchase:(id)arg2 ;
@end

