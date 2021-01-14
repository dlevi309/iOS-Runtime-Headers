/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)invoke;
-(void)setTarget:(id)arg1 ;
-(id)sender;
-(void)setSender:(id)arg1 ;
-(void)cache;
-(void)setEventNotificationWithSenderBlock:(id)arg1 ;
-(void)setEventNotificationBlock:(id)arg1 ;
-(id)eventNotificationBlock;
-(id)eventNotificationWithSenderBlock;
-(BOOL)wasCancelled;
-(id)target;
-(void)cancel;
@end

