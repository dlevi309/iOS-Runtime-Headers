/*
* Generated on Thursday, January 14, 2021 at 2:22:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/


@protocol MFDASyncActionsConsumer <MFRequestQueueResponseConsumer>
@required
-(void)drainMailbox;
-(void)receiveSyncActions:(id)arg1;
-(void)commitSyncActions;

@end

