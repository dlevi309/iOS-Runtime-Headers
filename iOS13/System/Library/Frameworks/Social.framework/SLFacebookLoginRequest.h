/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

#import <Social/SLFacebookRequest.h>

@class ACAccount;

@interface SLFacebookLoginRequest : SLFacebookRequest {

	ACAccount* _account;

}
-(id)initWithAccount:(id)arg1 ;
-(void)preflightRequest;
-(id)_tokenSecret;
@end

