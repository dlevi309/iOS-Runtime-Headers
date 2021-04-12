/*
* Generated on Thursday, January 14, 2021 at 2:28:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProVideo.framework/ProVideo
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface PVThermalMonitor : NSObject {

	BOOL _enabled;
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
@property (assign,nonatomic) BOOL enabled;                                    //@synthesize enabled=_enabled - In the implementation block
+(id)sharedInstance;
-(BOOL)enabled;
-(id)init;
-(void)setEnabled:(BOOL)arg1 ;
-(int)thermalLevel;
-(void)setCurrentThermalLevel:(int)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(int)currentThermalLevel;
-(void)setHighestThermalLevel:(int)arg1 ;
-(BOOL)_updateThermalLevelsWithToken:(int)arg1 ;
-(int)highestThermalLevel;
-(BOOL)_disabledThermalTracking;
-(BOOL)thermalLevelExceededNominal;
-(int)highestThermalLevelReached;
-(id)thermalLevelLabel;
-(BOOL)hasGoneAboveNominal;
-(void)setHasGoneAboveNominal:(BOOL)arg1 ;
-(void)_postNotificationPrevious:(int)arg1 new:(int)arg2 ;
-(void)_setCurrentThermalLevel:(int)arg1 ;
@end

