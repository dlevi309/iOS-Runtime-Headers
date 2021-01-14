/*
* Generated on Thursday, January 14, 2021 at 2:28:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setUsername:(NSString *)arg1 ;
-(id)init;
-(NSString *)appBundleIdentifier;
-(NSString *)username;
-(id)description;
-(void)setAuthenticationToken:(VSOptional *)arg1 ;
-(VSOptional *)authenticationToken;
-(void)setAppBundleIdentifier:(NSString *)arg1 ;
@end

