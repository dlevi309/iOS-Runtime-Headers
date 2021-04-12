/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@interface CFXApplicationState : NSObject {

	BOOL _isRegisteredForEvents;
	long long _applicationState;

}

@property (assign,nonatomic) BOOL isRegisteredForEvents;              //@synthesize isRegisteredForEvents=_isRegisteredForEvents - In the implementation block
@property (assign,nonatomic) long long applicationState;              //@synthesize applicationState=_applicationState - In the implementation block
+(id)sharedInstance;
+(void)beginMonitoringApplicationState;
-(long long)applicationState;
-(void)applicationWillResignActive:(id)arg1 ;
-(id)init;
-(void)setApplicationState:(long long)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)unregisterForEvents;
-(BOOL)isRegisteredForEvents;
-(void)setIsRegisteredForEvents:(BOOL)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)registerForEvents;
-(void)dealloc;
@end

