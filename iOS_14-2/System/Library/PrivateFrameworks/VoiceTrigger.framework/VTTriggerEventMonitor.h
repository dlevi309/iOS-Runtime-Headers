/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)addObserver:(id)arg1 ;
-(id)init;
-(void)removeObserver:(id)arg1 ;
-(void)_invalidateConnection;
-(void)dealloc;
-(void)voiceTriggered;
-(void)earlyDetected;
-(void)_attemptConnection;
-(void)_enableTriggerEventXPCNotification:(BOOL)arg1 ;
-(void)_voiceTriggered;
-(void)_earlyDetected;
-(void)_attemptConnectionInQueue;
@end

