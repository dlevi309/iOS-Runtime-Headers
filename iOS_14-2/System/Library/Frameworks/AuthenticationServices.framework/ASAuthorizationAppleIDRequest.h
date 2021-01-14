/*
* Generated on Thursday, January 14, 2021 at 2:26:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AuthenticationServices.framework/AuthenticationServices
*/

#import <AuthenticationServices/ASAuthorizationOpenIDRequest.h>

@class NSString;

@interface ASAuthorizationAppleIDRequest : ASAuthorizationOpenIDRequest {

	NSString* _user;

}

@property (nonatomic,copy) NSString * user;              //@synthesize user=_user - In the implementation block
-(void)setUser:(NSString *)arg1 ;
-(NSString *)user;
@end

