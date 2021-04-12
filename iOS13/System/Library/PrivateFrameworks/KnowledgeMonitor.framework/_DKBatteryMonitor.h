/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(void)setCurrentBatteryPercentage:(double)arg1 ;
+(id)_eventWithBatteryPercentage:(double)arg1 isFullyCharged:(BOOL)arg2 ;
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)synchronouslyReflectCurrentValue;
-(void)deactivate;
-(id)getBatteryProperties;
-(double)batteryPercentageFromPowerSourceDictionary:(id)arg1 ;
-(BOOL)fullyChargedFromPowerSourceDictionary:(id)arg1 ;
-(BOOL)newBatteryState:(id)arg1 differsSignificantlyFromState:(id)arg2 ;
-(void)updateBatteryStateDictionary:(id)arg1 ;
-(void)postImminentShutdownNotification:(double)arg1 ;
-(BOOL)percentage:(id)arg1 differsFrom:(id)arg2 ;
-(BOOL)temperature:(id)arg1 differsFrom:(id)arg2 ;
-(BOOL)voltage:(id)arg1 differsFrom:(id)arg2 ;
-(BOOL)fullyCharged:(id)arg1 differsFrom:(id)arg2 ;
-(BOOL)isCharging:(id)arg1 differsFrom:(id)arg2 ;
-(BOOL)externalConnected:(id)arg1 differsFrom:(id)arg2 ;
-(BOOL)adapterType:(id)arg1 differsFrom:(id)arg2 ;
-(void)_handleBatteryNotification;
-(double)currentBatteryPercentage;
-(int)immediateShutdownThreshold;
-(void)setImmediateShutdownThreshold:(int)arg1 ;
-(BOOL)hasInternalBattery;
-(void)setHasInternalBattery:(BOOL)arg1 ;
-(NSDictionary *)previousBatteryState;
-(void)setPreviousBatteryState:(NSDictionary *)arg1 ;
-(double)previousPercentage;
-(void)setPreviousPercentage:(double)arg1 ;
-(BOOL)previouslyFullyCharged;
-(void)setPreviouslyFullyCharged:(BOOL)arg1 ;
@end

