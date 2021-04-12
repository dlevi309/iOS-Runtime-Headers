/*
* Generated on Monday, March 1, 2021 at 2:31:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentAvailableProductsRequest.h>

@class NSString;

@interface PKPaymentAvailableProductsPreferredLanguageRequest : PKPaymentAvailableProductsRequest {

	NSString* _preferredLanguage;

}

@property (nonatomic,copy) NSString * preferredLanguage;              //@synthesize preferredLanguage=_preferredLanguage - In the implementation block
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(id)initWithType:(id)arg1 preferredLanguage:(id)arg2 ;
-(NSString *)preferredLanguage;
-(void)setPreferredLanguage:(NSString *)arg1 ;
@end

