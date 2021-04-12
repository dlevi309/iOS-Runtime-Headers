/*
* Generated on Thursday, January 14, 2021 at 2:27:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)resourceName;
-(id)username;
-(void)logOut;
-(unsigned long long)globalLevelStatus;
-(id)associatedAppIdentifier;
-(id)protectedResourceDescription;
-(BOOL)canLogOut;
-(NSString *)OAuthToken;
-(void)setOAuthToken:(NSString *)arg1 ;
-(NSString *)OAuthTokenSecret;
-(void)setOAuthTokenSecret:(NSString *)arg1 ;
@end

