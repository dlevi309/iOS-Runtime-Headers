/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
*/


@protocol OS_dispatch_queue;
@class NSMutableSet, NSObject;

@interface VTTriggerEventMonitorManager : NSObject {

	NSMutableSet* _connections;
	NSObject*<OS_dispatch_queue> _queue;

}
+(id)sharedManager;
-(id)init;
-(void)addConnection:(id)arg1 ;
-(void)removeConnection:(id)arg1 ;
-(void)notifyVoiceTrigger;
-(void)notifyEarlyDetect;
@end

