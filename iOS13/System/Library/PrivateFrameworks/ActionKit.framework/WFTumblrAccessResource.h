/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <WorkflowKit/WFAccessResource.h>

@class NSString;

@interface WFTumblrAccessResource : WFAccessResource {

	NSString* _OAuthToken;
	NSString* _OAuthTokenSecret;

}

@property (nonatomic,copy) NSString * OAuthToken;                    //@synthesize OAuthToken=_OAuthToken - In the implementation block
@property (nonatomic,copy) NSString * OAuthTokenSecret;              //@synthesize OAuthTokenSecret=_OAuthTokenSecret - In the implementation block
+(id)tumblrOAuthToken;
+(void)setTumblrOAuthToken:(id)arg1 ;
+(id)tumblrOAuthTokenSecret;
+(void)setTumblrOAuthTokenSecret:(id)arg1 ;
-(id)username;
-(id)resourceName;
-(id)associatedAppIdentifier;
-(unsigned long long)globalLevelStatus;
-(id)protectedResourceDescription;
-(BOOL)canLogOut;
-(void)logOut;
-(NSString *)OAuthToken;
-(void)setOAuthToken:(NSString *)arg1 ;
-(NSString *)OAuthTokenSecret;
-(void)setOAuthTokenSecret:(NSString *)arg1 ;
@end

