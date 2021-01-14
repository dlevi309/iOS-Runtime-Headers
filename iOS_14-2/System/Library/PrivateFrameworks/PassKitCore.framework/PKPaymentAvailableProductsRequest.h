/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentWebServiceRequest.h>

@class NSString;

@interface PKPaymentAvailableProductsRequest : PKPaymentWebServiceRequest {

	BOOL _ignoreCache;
	NSString* _preferredLanguage;

}

@property (nonatomic,copy,readonly) NSString * preferredLanguage;              //@synthesize preferredLanguage=_preferredLanguage - In the implementation block
@property (assign,nonatomic) BOOL ignoreCache;                                 //@synthesize ignoreCache=_ignoreCache - In the implementation block
-(NSString *)preferredLanguage;
-(BOOL)ignoreCache;
-(id)_urlRequestWithServiceURL:(id)arg1 deviceIdentifier:(id)arg2 appleAccountInformation:(id)arg3 ;
-(id)initWithPreferredLanguage:(id)arg1 ;
-(void)setIgnoreCache:(BOOL)arg1 ;
@end

