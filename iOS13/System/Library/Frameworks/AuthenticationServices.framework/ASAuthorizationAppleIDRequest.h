/*
* Generated on Monday, March 1, 2021 at 2:34:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
*/

#import <AuthenticationServices/ASAuthorizationOpenIDRequest.h>

@class NSString;

@interface ASAuthorizationAppleIDRequest : ASAuthorizationOpenIDRequest {

	NSString* _user;

}

@property (nonatomic,copy) NSString * user;              //@synthesize user=_user - In the implementation block
-(NSString *)user;
-(void)setUser:(NSString *)arg1 ;
@end

