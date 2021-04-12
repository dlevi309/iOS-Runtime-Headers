/*
* Generated on Thursday, January 14, 2021 at 2:27:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface JFXThermalMonitor : NSObject {

	BOOL _hasGoneAboveNominal;
	int _currentThermalLevel;
	int _highestThermalLevel;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic) BOOL hasGoneAboveNominal;                        //@synthesize hasGoneAboveNominal=_hasGoneAboveNominal - In the implementation block
@property (assign,nonatomic) int currentThermalLevel;                         //@synthesize currentThermalLevel=_currentThermalLevel - In the implementation block
@property (assign,nonatomic) int highestThermalLevel;                         //@synthesize highestThermalLevel=_highestThermalLevel - In the implementation block
@property (nonatomic,readonly) BOOL thermalLevelExceededNominal; 
@property (nonatomic,readonly) int thermalLevel; 
@property (nonatomic,readonly) int highestThermalLevelReached; 
+(id)sharedInstance;
+(void)enumerateThermalPressureLevel:(/*^block*/id)arg1 ;
+(id)stringFromThermalPressureLevel:(int)arg1 ;
-(id)init;
-(int)thermalLevel;
-(void)setCurrentThermalLevel:(int)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_postNotification:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(int)currentThermalLevel;
-(void)setHighestThermalLevel:(int)arg1 ;
-(BOOL)_updateThermalLevelsWithToken:(int)arg1 ;
-(id)_analyticValueForThermalLevelBefore:(int)arg1 after:(int)arg2 ;
-(int)highestThermalLevel;
-(BOOL)_disabledThermalTracking;
-(BOOL)thermalLevelExceededNominal;
-(int)highestThermalLevelReached;
-(id)thermalLevelLabel;
-(BOOL)hasGoneAboveNominal;
-(void)setHasGoneAboveNominal:(BOOL)arg1 ;
@end

