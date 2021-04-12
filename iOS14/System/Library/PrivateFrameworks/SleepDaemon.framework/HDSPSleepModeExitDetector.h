/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SleepDaemon.framework/SleepDaemon
*/

#import <libobjc.A.dylib/HDSPSleepModeObserver.h>
#import <libobjc.A.dylib/HDSPWakeDetector.h>
#import <libobjc.A.dylib/HDSPEnvironmentAware.h>

@protocol HDSPWakeDetectorDelegate;
@class HDSPEnvironment, NSString;

@interface HDSPSleepModeExitDetector : NSObject <HDSPSleepModeObserver, HDSPWakeDetector, HDSPEnvironmentAware> {

	BOOL _isDetecting;
	id<HDSPWakeDetectorDelegate> _wakeDetectorDelegate;
	HDSPEnvironment* _environment;

}

@property (assign) BOOL isDetecting;                                                                //@synthesize isDetecting=_isDetecting - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) id<HDSPWakeDetectorDelegate> wakeDetectorDelegate;              //@synthesize wakeDetectorDelegate=_wakeDetectorDelegate - In the implementation block
@property (nonatomic,__weak,readonly) HDSPEnvironment * environment;                                //@synthesize environment=_environment - In the implementation block
-(void)environmentDidBecomeReady:(id)arg1 ;
-(BOOL)isDetecting;
-(void)sleepModeDidChange:(long long)arg1 previousMode:(long long)arg2 reason:(unsigned long long)arg3 ;
-(id)initWithEnvironment:(id)arg1 ;
-(HDSPEnvironment *)environment;
-(void)startDetecting;
-(void)stopDetecting;
-(id<HDSPWakeDetectorDelegate>)wakeDetectorDelegate;
-(void)setWakeDetectorDelegate:(id<HDSPWakeDetectorDelegate>)arg1 ;
-(void)setIsDetecting:(BOOL)arg1 ;
@end

