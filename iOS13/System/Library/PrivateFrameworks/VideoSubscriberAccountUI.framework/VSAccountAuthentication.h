/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideoSubscriberAccountUI.framework/VideoSubscriberAccountUI
*/


@class NSString, VSOptional;

@interface VSAccountAuthentication : NSObject {

	NSString* _username;
	VSOptional* _authenticationToken;
	NSString* _appBundleIdentifier;

}

@property (nonatomic,copy) NSString * username;                             //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) VSOptional * authenticationToken;              //@synthesize authenticationToken=_authenticationToken - In the implementation block
@property (nonatomic,copy) NSString * appBundleIdentifier;                  //@synthesize appBundleIdentifier=_appBundleIdentifier - In the implementation block
-(id)init;
-(id)description;
-(NSString *)username;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)appBundleIdentifier;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
-(void)setAuthenticationToken:(VSOptional *)arg1 ;
-(VSOptional *)authenticationToken;
@end

