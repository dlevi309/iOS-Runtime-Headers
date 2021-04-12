/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

#import <AppleAccount/AAFamilyRequest.h>

@class ACAccount;

@interface FAFamilyRequest : AAFamilyRequest {

	ACAccount* _appleAccount;

}

@property (nonatomic,retain) ACAccount * appleAccount;              //@synthesize appleAccount=_appleAccount - In the implementation block
-(id)urlRequest;
-(ACAccount *)appleAccount;
-(id)_queryString;
-(id)initWithGrandSlamSigner:(id)arg1 ;
-(id)_endpoint;
-(void)URLRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)setAppleAccount:(ACAccount *)arg1 ;
-(void)_baseURLForEndpoint:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_configureRequest:(id)arg1 includePayload:(BOOL)arg2 ;
-(void)_decoratedURLWithCompletion:(/*^block*/id)arg1 ;
@end

