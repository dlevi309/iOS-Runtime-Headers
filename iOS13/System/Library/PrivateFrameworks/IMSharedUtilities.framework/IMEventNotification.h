/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/

#import <IMFoundation/IMDoubleLinkedListNode.h>

@interface IMEventNotification : IMDoubleLinkedListNode {

	id _target;
	id _sender;
	/*^block*/id _eventNotificationWithSenderBlock;
	/*^block*/id _eventNotificationBlock;

}

@property (__weak) id target;                                      //@synthesize target=_target - In the implementation block
@property (__weak) id sender;                                      //@synthesize sender=_sender - In the implementation block
@property (copy) id eventNotificationBlock;                        //@synthesize eventNotificationBlock=_eventNotificationBlock - In the implementation block
@property (copy) id eventNotificationWithSenderBlock;              //@synthesize eventNotificationWithSenderBlock=_eventNotificationWithSenderBlock - In the implementation block
+(id)eventNotification:(id)arg1 eventNotificationBlock:(/*^block*/id)arg2 ;
+(id)eventNotification:(id)arg1 sender:(id)arg2 eventNotificationBlock:(/*^block*/id)arg3 ;
+(id)eventNotification:(id)arg1 ;
-(void)setTarget:(id)arg1 ;
-(BOOL)invoke;
-(id)target;
-(void)cancel;
-(id)sender;
-(void)setSender:(id)arg1 ;
-(void)cache;
-(BOOL)wasCancelled;
-(void)setEventNotificationWithSenderBlock:(id)arg1 ;
-(void)setEventNotificationBlock:(id)arg1 ;
-(id)eventNotificationBlock;
-(id)eventNotificationWithSenderBlock;
@end

