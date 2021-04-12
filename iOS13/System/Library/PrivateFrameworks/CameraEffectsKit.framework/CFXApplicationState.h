/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(long long)applicationState;
-(void)applicationWillResignActive:(id)arg1 ;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(void)applicationDidEnterBackground:(id)arg1 ;
-(void)setApplicationState:(long long)arg1 ;
-(void)unregisterForEvents;
-(void)registerForEvents;
-(BOOL)isRegisteredForEvents;
-(void)setIsRegisteredForEvents:(BOOL)arg1 ;
@end

