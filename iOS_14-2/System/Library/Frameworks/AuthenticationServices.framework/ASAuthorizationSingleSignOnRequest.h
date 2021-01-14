/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
*/

#import <AuthenticationServices/ASAuthorizationOpenIDRequest.h>

@class NSArray;

@interface ASAuthorizationSingleSignOnRequest : ASAuthorizationOpenIDRequest {

	NSArray* _authorizationOptions;

}

@property (nonatomic,copy) NSArray * authorizationOptions;              //@synthesize authorizationOptions=_authorizationOptions - In the implementation block
-(void)setAuthorizationOptions:(NSArray *)arg1 ;
-(NSArray *)authorizationOptions;
@end

