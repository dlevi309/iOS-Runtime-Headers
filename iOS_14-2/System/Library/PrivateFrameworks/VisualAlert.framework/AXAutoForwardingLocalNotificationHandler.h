/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VisualAlert.framework/VisualAlert
*/

#import <VisualAlert/AXLocalNotificationHandler.h>

@interface AXAutoForwardingLocalNotificationHandler : AXLocalNotificationHandler {

	SEL* _possibleHandlers;
	unsigned long long _possibleHandlersCount;

}
-(void)_stopObserving;
-(void)_startObserving;
-(void)dealloc;
-(id)initWithNotificationName:(id)arg1 target:(id)arg2 handler:(SEL)arg3 ;
-(id)initWithNotificationName:(id)arg1 target:(id)arg2 dispatcher:(/*^block*/id)arg3 possibleHandlers:(SEL)arg4 ;
-(void)processHandler:(SEL)arg1 ;
-(id)initWithNotificationName:(id)arg1 target:(id)arg2 dispatcher:(/*^block*/id)arg3 startObserving:(BOOL)arg4 ;
-(id)_notificationTypeDescription;
-(id)_forwardDistributedNotificationNameForHandler:(SEL)arg1 ;
-(id)_prefixForForwardDistributedNotificationName;
-(BOOL)_handleForwardDistributedNotificationWithName:(id)arg1 object:(const void*)arg2 userInfo:(id)arg3 ;
@end

