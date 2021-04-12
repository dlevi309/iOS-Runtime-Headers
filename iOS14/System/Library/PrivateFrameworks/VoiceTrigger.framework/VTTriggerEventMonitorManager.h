/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)notifyVoiceTrigger;
-(void)removeConnection:(id)arg1 ;
-(void)addConnection:(id)arg1 ;
-(void)notifyEarlyDetect;
@end

