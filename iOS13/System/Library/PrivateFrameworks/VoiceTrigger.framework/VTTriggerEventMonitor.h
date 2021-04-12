/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/

#import <libobjc.A.dylib/VTTriggerEventMonitorDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSXPCConnection, NSHashTable, NSString;

@interface VTTriggerEventMonitor : NSObject <VTTriggerEventMonitorDelegate> {

	int _notifyToken;
	int _notifyTokenLegacyTrigger;
	int _notifyTokenLegacyEarlyDetect;
	NSObject*<OS_dispatch_queue> _queue;
	NSXPCConnection* _connection;
	NSHashTable* _observers;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedMonitor;
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)_invalidateConnection;
-(void)voiceTriggered;
-(void)earlyDetected;
-(void)_attemptConnection;
-(void)_enableTriggerEventXPCNotification:(BOOL)arg1 ;
-(void)_voiceTriggered;
-(void)_earlyDetected;
-(void)_attemptConnectionInQueue;
@end

