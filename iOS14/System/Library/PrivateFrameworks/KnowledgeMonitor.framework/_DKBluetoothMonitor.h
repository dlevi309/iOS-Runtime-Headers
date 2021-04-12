/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
*/

#import <KnowledgeMonitor/_DKMonitor.h>
#import <libobjc.A.dylib/_DKHistoricalDeletingMonitor.h>

@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSMutableDictionary, NSObject, NSDictionary, NSLock, NSString;

@interface _DKBluetoothMonitor : _DKMonitor <_DKHistoricalDeletingMonitor> {

	/*^block*/id historicalDeletingHandler;
	NSMutableDictionary* _activeConnections;
	NSMutableDictionary* _inactiveConnections;
	NSObject*<OS_dispatch_queue> _batteryLevelPollingQueue;
	NSObject*<OS_dispatch_source> _batteryLevelPollingTimer;
	NSDictionary* _batteryLevels;
	NSLock* _connectionUpdateLock;

}

@property (nonatomic,retain) NSMutableDictionary * activeConnections;                             //@synthesize activeConnections=_activeConnections - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * inactiveConnections;                           //@synthesize inactiveConnections=_inactiveConnections - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> batteryLevelPollingQueue;               //@synthesize batteryLevelPollingQueue=_batteryLevelPollingQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> batteryLevelPollingTimer;              //@synthesize batteryLevelPollingTimer=_batteryLevelPollingTimer - In the implementation block
@property (retain) NSDictionary * batteryLevels;                                                  //@synthesize batteryLevels=_batteryLevels - In the implementation block
@property (nonatomic,retain) NSLock * connectionUpdateLock;                                       //@synthesize connectionUpdateLock=_connectionUpdateLock - In the implementation block
@property (nonatomic,copy) id historicalDeletingHandler; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)entitlements;
+(id)eventStream;
+(id)contextValueForBluetoothConnectionStatus:(BOOL)arg1 name:(id)arg2 address:(id)arg3 deviceType:(int)arg4 isAppleAudioDevice:(BOOL)arg5 isUserWearing:(BOOL)arg6 productID:(unsigned)arg7 ;
+(id)audioProductsBatteryLevels;
+(id)_eventWithState:(BOOL)arg1 name:(id)arg2 address:(id)arg3 type:(int)arg4 isAppleAudioDevice:(BOOL)arg5 isUserWearing:(BOOL)arg6 productID:(unsigned)arg7 accessoryBatteryLevels:(id)arg8 ;
-(void)setHistoricalDeletingHandler:(id)arg1 ;
-(id)loadState;
-(void)saveState;
-(id)historicalDeletingHandler;
-(NSMutableDictionary *)activeConnections;
-(id)init;
-(NSLock *)connectionUpdateLock;
-(void)start;
-(void)setActiveConnections:(NSMutableDictionary *)arg1 ;
-(void)stop;
-(void)deactivate;
-(void)setInactiveConnections:(NSMutableDictionary *)arg1 ;
-(void)setBatteryLevelPollingQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSDictionary *)batteryLevels;
-(void)setBatteryLevelPollingTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setBatteryLevels:(NSDictionary *)arg1 ;
-(NSObject*<OS_dispatch_queue>)batteryLevelPollingQueue;
-(NSObject*<OS_dispatch_source>)batteryLevelPollingTimer;
-(BOOL)_inEarStatusForDevice:(id)arg1 ;
-(NSMutableDictionary *)inactiveConnections;
-(void)setConnectionUpdateLock:(NSLock *)arg1 ;
-(void)updateCurrentBatteryLevels;
-(void)dealloc;
@end

