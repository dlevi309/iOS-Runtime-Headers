/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/UserNotificationsUI.framework/UserNotificationsUI
*/

#import <Foundation/NSExtensionContext.h>

@protocol _UNNotificationExtensionHostInterface;
@class NSArray;

@interface _UNNotificationContentExtensionContext : NSExtensionContext {

	id<_UNNotificationExtensionHostInterface> _hostService;
	NSArray* _notificationActions;

}

@property (assign,nonatomic,__weak) id<_UNNotificationExtensionHostInterface> hostService;              //@synthesize hostService=_hostService - In the implementation block
@property (nonatomic,copy) NSArray * notificationActions;                                               //@synthesize notificationActions=_notificationActions - In the implementation block
-(id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3 ;
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id<_UNNotificationExtensionHostInterface>)hostService;
-(void)setHostService:(id<_UNNotificationExtensionHostInterface>)arg1 ;
-(void)requestDismiss;
-(void)mediaPlayingStarted;
-(void)mediaPlayingPaused;
-(void)performNotificationDefaultAction;
-(void)dismissNotificationContentExtension;
-(void)setNotificationActions:(NSArray *)arg1 ;
-(NSArray *)notificationActions;
@end

