/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <libobjc.A.dylib/MFActivityConditionBuilder.h>
#import <libobjc.A.dylib/MFActivityCondition.h>

@protocol EFScheduler;
@class EFCancelationToken, NSString, EFObservable;

@interface MFActivityCondition : NSObject <MFActivityConditionBuilder, MFActivityCondition> {

	BOOL _requireExternalPower;
	BOOL _requireWiFi;
	BOOL _requireScreenLocked;
	BOOL _requireLowPowerModeDisabled;
	BOOL _satisfied;
	float _minBatteryLevel;
	long long _maxThermalPressureLevel;
	EFCancelationToken* _cancellationToken;
	id<EFScheduler> _scheduler;

}

@property (assign,nonatomic) BOOL requireExternalPower;                           //@synthesize requireExternalPower=_requireExternalPower - In the implementation block
@property (assign,nonatomic) BOOL requireWiFi;                                    //@synthesize requireWiFi=_requireWiFi - In the implementation block
@property (assign,nonatomic) BOOL requireScreenLocked;                            //@synthesize requireScreenLocked=_requireScreenLocked - In the implementation block
@property (assign,nonatomic) BOOL requireLowPowerModeDisabled;                    //@synthesize requireLowPowerModeDisabled=_requireLowPowerModeDisabled - In the implementation block
@property (assign,nonatomic) float minBatteryLevel;                               //@synthesize minBatteryLevel=_minBatteryLevel - In the implementation block
@property (assign,nonatomic) long long maxThermalPressureLevel;                   //@synthesize maxThermalPressureLevel=_maxThermalPressureLevel - In the implementation block
@property (assign,getter=isSatisfied,nonatomic) BOOL satisfied;                   //@synthesize satisfied=_satisfied - In the implementation block
@property (nonatomic,retain) EFCancelationToken * cancellationToken;              //@synthesize cancellationToken=_cancellationToken - In the implementation block
@property (nonatomic,retain) id<EFScheduler> scheduler;                           //@synthesize scheduler=_scheduler - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) EFObservable * conditionsObservable; 
+(id)alwaysSatisfiedCondition;
-(id)init;
-(void)dealloc;
-(id<EFScheduler>)scheduler;
-(void)setScheduler:(id<EFScheduler>)arg1 ;
-(id)initWithBuilder:(/*^block*/id)arg1 ;
-(BOOL)isSatisfied;
-(EFObservable *)conditionsObservable;
-(BOOL)_isValidConfiguration;
-(void)setSatisfied:(BOOL)arg1 ;
-(BOOL)requireExternalPower;
-(float)minBatteryLevel;
-(BOOL)requireLowPowerModeDisabled;
-(BOOL)requireWiFi;
-(BOOL)requireScreenLocked;
-(long long)maxThermalPressureLevel;
-(void)setRequireExternalPower:(BOOL)arg1 ;
-(void)setRequireWiFi:(BOOL)arg1 ;
-(void)setRequireScreenLocked:(BOOL)arg1 ;
-(void)setRequireLowPowerModeDisabled:(BOOL)arg1 ;
-(void)setMinBatteryLevel:(float)arg1 ;
-(void)setMaxThermalPressureLevel:(long long)arg1 ;
-(EFCancelationToken *)cancellationToken;
-(void)setCancellationToken:(EFCancelationToken *)arg1 ;
@end

