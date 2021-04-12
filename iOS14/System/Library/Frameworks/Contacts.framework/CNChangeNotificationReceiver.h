/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


@protocol CNChangeNotificationReceiver <NSObject>
@property (assign,nonatomic) BOOL forwardsSelfGeneratedDistributedSaveNotifications; 
@property (assign,nonatomic) double externalNotificationCoalescingDelay; 
@required
-(void)receiveNotificationName:(id)arg1 fromSender:(id)arg2 saveIdentifier:(id)arg3 userInfo:(id)arg4 isFromExternalProcess:(BOOL)arg5;
-(void)receiveExternalNotificationName:(id)arg1;
-(double)externalNotificationCoalescingDelay;
-(BOOL)forwardsSelfGeneratedDistributedSaveNotifications;
-(void)setForwardsSelfGeneratedDistributedSaveNotifications:(BOOL)arg1;
-(void)setExternalNotificationCoalescingDelay:(double)arg1;

@end

