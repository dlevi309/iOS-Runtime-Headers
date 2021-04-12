/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface JTThermalMonitor : NSObject {

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
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)_postNotification:(id)arg1 ;
-(int)thermalLevel;
-(int)currentThermalLevel;
-(void)setCurrentThermalLevel:(int)arg1 ;
-(void)setHighestThermalLevel:(int)arg1 ;
-(void)_updateThermalLevelsWithToken:(int)arg1 ;
-(id)_analyticValueForThermalLevelBefore:(int)arg1 after:(int)arg2 ;
-(int)highestThermalLevel;
-(int)getStateForNotifyToken:(int)arg1 ;
-(BOOL)_disabledThermalTracking;
-(BOOL)thermalLevelExceededNominal;
-(int)highestThermalLevelReached;
-(id)thermalLevelLabel;
-(BOOL)hasGoneAboveNominal;
-(void)setHasGoneAboveNominal:(BOOL)arg1 ;
@end

