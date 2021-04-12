/*
* Generated on Thursday, January 14, 2021 at 2:25:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol OS_dispatch_queue, HMDLightProfileDataSource;
@class NSString, HMDHome, NSObject, NSNotificationCenter, HMDNaturalLightingCurve;

@interface HMDHomeNaturalLightingContextUpdater : HMFObject <HMFLogging> {

	BOOL _demoModeEnabled;
	NSString* _logIdentifier;
	HMDHome* _home;
	NSObject*<OS_dispatch_queue> _workQueue;
	id<HMDLightProfileDataSource> _dataSource;
	long long _curveMinimumBrightness;
	long long _curveMaximumBrightness;
	NSNotificationCenter* _notificationCenter;
	HMDNaturalLightingCurve* _curve;

}

@property (__weak,readonly) HMDHome * home;                                      //@synthesize home=_home - In the implementation block
@property (readonly) NSObject*<OS_dispatch_queue> workQueue;                     //@synthesize workQueue=_workQueue - In the implementation block
@property (readonly) id<HMDLightProfileDataSource> dataSource;                   //@synthesize dataSource=_dataSource - In the implementation block
@property (assign) long long curveMinimumBrightness;                             //@synthesize curveMinimumBrightness=_curveMinimumBrightness - In the implementation block
@property (assign) long long curveMaximumBrightness;                             //@synthesize curveMaximumBrightness=_curveMaximumBrightness - In the implementation block
@property (copy,readonly) NSString * logIdentifier;                              //@synthesize logIdentifier=_logIdentifier - In the implementation block
@property (readonly) NSNotificationCenter * notificationCenter;                  //@synthesize notificationCenter=_notificationCenter - In the implementation block
@property (copy) HMDNaturalLightingCurve * curve;                                //@synthesize curve=_curve - In the implementation block
@property (getter=isDemoModeEnabled,readonly) BOOL demoModeEnabled;              //@synthesize demoModeEnabled=_demoModeEnabled - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
-(HMDNaturalLightingCurve *)curve;
-(NSObject*<OS_dispatch_queue>)workQueue;
-(void)configure;
-(BOOL)isDemoModeEnabled;
-(NSNotificationCenter *)notificationCenter;
-(id<HMDLightProfileDataSource>)dataSource;
-(NSString *)logIdentifier;
-(void)setCurve:(HMDNaturalLightingCurve *)arg1 ;
-(HMDHome *)home;
-(id)initWithHome:(id)arg1 demoModeEnabled:(BOOL)arg2 ;
-(void)handleResidentDeviceUpdated:(id)arg1 ;
-(id)initWithHome:(id)arg1 workQueue:(id)arg2 demoModeEnabled:(BOOL)arg3 logIdentifier:(id)arg4 notificationCenter:(id)arg5 dataSource:(id)arg6 ;
-(void)initalizeCurve;
-(void)updateNaturalLightingContext;
-(id)colorTemperatureTransitionPointsForMaximumBrightnessWithEncodeNaturalLightingCurve:(id)arg1 ;
-(id)colorTemperatureTransitionPointsForMinimumBrightnessWithEncodeNaturalLightingCurve:(id)arg1 ;
-(long long)timeOfDayForMinimumBrightnessTransitionPoint:(id)arg1 maximumBrighnessTransitionPoint:(id)arg2 ;
-(long long)colorTemperatureForTransitionPoint:(id)arg1 ;
-(long long)curveMinimumBrightness;
-(long long)curveMaximumBrightness;
-(void)setCurveMaximumBrightness:(long long)arg1 ;
-(BOOL)areEncodedBrightnessLevelTransitionPointsValid:(id)arg1 ;
-(void)setCurveMinimumBrightness:(long long)arg1 ;
@end

