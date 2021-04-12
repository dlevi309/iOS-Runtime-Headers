/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VisualAlert.framework/VisualAlert
*/

#import <VisualAlert/AXLocalNotificationHandler.h>

@interface AXAutoForwardingLocalNotificationHandler : AXLocalNotificationHandler {

	SEL* _possibleHandlers;
	unsigned long long _possibleHandlersCount;

}
-(void)dealloc;
-(void)_stopObserving;
-(void)_startObserving;
-(id)initWithNotificationName:(id)arg1 target:(id)arg2 handler:(SEL)arg3 ;
-(id)initWithNotificationName:(id)arg1 target:(id)arg2 dispatcher:(/*^block*/id)arg3 possibleHandlers:(SEL)arg4 ;
-(void)processHandler:(SEL)arg1 ;
-(id)initWithNotificationName:(id)arg1 target:(id)arg2 dispatcher:(/*^block*/id)arg3 startObserving:(BOOL)arg4 ;
-(id)_notificationTypeDescription;
-(id)_forwardDistributedNotificationNameForHandler:(SEL)arg1 ;
-(id)_prefixForForwardDistributedNotificationName;
-(BOOL)_handleForwardDistributedNotificationWithName:(id)arg1 object:(const void*)arg2 userInfo:(id)arg3 ;
@end

