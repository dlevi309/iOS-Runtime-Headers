/*
* Generated on Monday, March 1, 2021 at 2:34:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FamilyCircleUI.framework/FamilyCircleUI
*/

#import <AppleAccount/AAFamilyRequest.h>

@class ACAccount;

@interface FAFamilyRequest : AAFamilyRequest {

	ACAccount* _appleAccount;

}

@property (nonatomic,retain) ACAccount * appleAccount;              //@synthesize appleAccount=_appleAccount - In the implementation block
-(id)_queryString;
-(id)_endpoint;
-(id)urlRequest;
-(id)initWithGrandSlamSigner:(id)arg1 ;
-(ACAccount *)appleAccount;
-(void)URLRequestWithCompletion:(/*^block*/id)arg1 ;
-(void)_baseURLForEndpoint:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_configureRequest:(id)arg1 includePayload:(BOOL)arg2 ;
-(void)_decoratedURLWithCompletion:(/*^block*/id)arg1 ;
-(void)setAppleAccount:(ACAccount *)arg1 ;
@end

