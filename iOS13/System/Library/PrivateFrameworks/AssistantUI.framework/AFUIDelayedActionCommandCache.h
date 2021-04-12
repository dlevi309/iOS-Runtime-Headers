/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/


@class NSMutableDictionary;

@interface AFUIDelayedActionCommandCache : NSObject {

	NSMutableDictionary* _delayedActionTimersByIdentifier;
	NSMutableDictionary* _dismissalDelayedActionCommandsByIdentifier;

}
-(id)init;
-(void)dealloc;
-(id)_commandHandler;
-(void)invalidatePendingCommands;
-(void)_performDelayedActionCommandTimerAction:(id)arg1 ;
-(void)_invalidateDelayedActionTimer:(id)arg1 withKey:(id)arg2 ;
-(void)_performCommandsWithDelayedActionCommand:(id)arg1 ;
-(void)enqueueDelayedActionCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelDelayedActionWithDelayedActionCancelCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performDismissalCommands;
@end

