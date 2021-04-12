/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
*/


@class NSMutableDictionary;

@interface AFUIDelayedActionCommandCache : NSObject {

	NSMutableDictionary* _delayedActionTimersByIdentifier;
	NSMutableDictionary* _dismissalDelayedActionCommandsByIdentifier;

}
-(id)init;
-(id)_commandHandler;
-(void)dealloc;
-(void)invalidatePendingCommands;
-(void)_performDelayedActionCommandTimerAction:(id)arg1 ;
-(void)_invalidateDelayedActionTimer:(id)arg1 withKey:(id)arg2 ;
-(void)_performCommandsWithDelayedActionCommand:(id)arg1 ;
-(void)enqueueDelayedActionCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cancelDelayedActionWithDelayedActionCancelCommand:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)performDismissalCommands;
@end

