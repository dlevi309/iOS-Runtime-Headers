/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@protocol CNChangeNotificationReceiver <NSObject>
@property (assign,nonatomic) BOOL forwardsSelfGeneratedDistributedSaveNotifications; 
@property (assign,nonatomic) double externalNotificationCoalescingDelay; 
@required
-(double)externalNotificationCoalescingDelay;
-(void)receiveNotificationName:(id)arg1 fromSender:(id)arg2 saveIdentifier:(id)arg3 userInfo:(id)arg4 isFromExternalProcess:(BOOL)arg5;
-(void)receiveExternalNotificationName:(id)arg1;
-(BOOL)forwardsSelfGeneratedDistributedSaveNotifications;
-(void)setForwardsSelfGeneratedDistributedSaveNotifications:(BOOL)arg1;
-(void)setExternalNotificationCoalescingDelay:(double)arg1;

@end

