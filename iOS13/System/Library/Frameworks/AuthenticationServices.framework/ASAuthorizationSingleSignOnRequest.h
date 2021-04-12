/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

