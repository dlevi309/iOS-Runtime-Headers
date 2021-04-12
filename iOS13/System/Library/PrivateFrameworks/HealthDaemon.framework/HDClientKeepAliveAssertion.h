/*
* Generated on Monday, March 1, 2021 at 2:34:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDAssertion.h>

@class NSDate, NSString, NSDictionary;

@interface HDClientKeepAliveAssertion : HDAssertion {

	long long _launchCount;
	NSDate* _lastLaunchAttempt;
	NSString* _clientBundleIdentifier;
	NSDictionary* _payloadOptions;

}

@property (assign,nonatomic) long long launchCount;                                 //@synthesize launchCount=_launchCount - In the implementation block
@property (nonatomic,copy) NSDate * lastLaunchAttempt;                              //@synthesize lastLaunchAttempt=_lastLaunchAttempt - In the implementation block
@property (nonatomic,copy,readonly) NSString * clientBundleIdentifier;              //@synthesize clientBundleIdentifier=_clientBundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * payloadOptions;                  //@synthesize payloadOptions=_payloadOptions - In the implementation block
-(NSString *)clientBundleIdentifier;
-(long long)launchCount;
-(NSDictionary *)payloadOptions;
-(NSDate *)lastLaunchAttempt;
-(id)initWithOwnerIdentifier:(id)arg1 clientBundleIdentifier:(id)arg2 payloadOptions:(id)arg3 ;
-(void)setLaunchCount:(long long)arg1 ;
-(void)setLastLaunchAttempt:(NSDate *)arg1 ;
@end

