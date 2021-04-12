/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
*/

#import <KnowledgeMonitor/KnowledgeMonitor-Structs.h>
#import <KnowledgeMonitor/_DKMonitor.h>

@class NSDictionary;

@interface _DKBatteryMonitor : _DKMonitor {

	unsigned _powerService;
	unsigned _batteryNotification;
	IONotificationPortRef _notifyPort;
	BOOL _hasInternalBattery;
	BOOL _previouslyFullyCharged;
	int _immediateShutdownThreshold;
	NSDictionary* _previousBatteryState;
	double _previousPercentage;

}

@property (assign,nonatomic) int immediateShutdownThreshold;                   //@synthesize immediateShutdownThreshold=_immediateShutdownThreshold - In the implementation block
@property (assign,nonatomic) BOOL hasInternalBattery;                          //@synthesize hasInternalBattery=_hasInternalBattery - In the implementation block
@property (nonatomic,retain) NSDictionary * previousBatteryState;              //@synthesize previousBatteryState=_previousBatteryState - In the implementation block
@property (assign,nonatomic) double previousPercentage;                        //@synthesize previousPercentage=_previousPercentage - In the implementation block
@property (assign,nonatomic) BOOL previouslyFullyCharged;                      //@synthesize previouslyFullyCharged=_previouslyFullyCharged - In the implementation block
+(id)entitlements;
+(id)eventStream;
+(id)_eventWithBatteryPercentage:(double)arg1 isFullyCharged:(BOOL)arg2 ;
+(void)setCurrentBatteryPercentage:(double)arg1 ;
-(double)batteryPercentageFromPowerSourceDictionary:(id)arg1 ;
-(void)synchronouslyReflectCurrentValue;
-(BOOL)hasInternalBattery;
-(void)setPreviouslyFullyCharged:(BOOL)arg1 ;
-(int)immediateShutdownThreshold;
-(void)postImminentShutdownNotification:(double)arg1 ;
-(BOOL)adapterType:(id)arg1 differsFrom:(id)arg2 ;
-(void)updateBatteryStateDictionary:(id)arg1 currentBatteryPercentage:(double)arg2 ;
-(void)start;
-(void)batteryStateChangeHandler;
-(void)completeStart;
-(BOOL)previouslyFullyCharged;
-(BOOL)newBatteryState:(id)arg1 differsSignificantlyFromState:(id)arg2 currentBatteryPercentage:(double)arg3 previousBatteryPercentage:(double)arg4 ;
-(void)setImmediateShutdownThreshold:(int)arg1 ;
-(void)stop;
-(void)deactivate;
-(BOOL)externalConnected:(id)arg1 differsFrom:(id)arg2 ;
-(double)previousPercentage;
-(BOOL)fullyCharged:(id)arg1 differsFrom:(id)arg2 ;
-(void)_queue_handleNotification;
-(id)getBatteryProperties;
-(BOOL)voltage:(id)arg1 differsFrom:(id)arg2 ;
-(BOOL)temperature:(id)arg1 differsFrom:(id)arg2 ;
-(void)setPreviousPercentage:(double)arg1 ;
-(BOOL)isCharging:(id)arg1 differsFrom:(id)arg2 ;
-(BOOL)percentage:(double)arg1 differsFrom:(double)arg2 ;
-(void)setHasInternalBattery:(BOOL)arg1 ;
-(NSDictionary *)previousBatteryState;
-(double)currentBatteryPercentage;
-(void)setPreviousBatteryState:(NSDictionary *)arg1 ;
-(void)_handleBatteryNotification;
-(void)dealloc;
-(BOOL)fullyChargedFromPowerSourceDictionary:(id)arg1 ;
@end

