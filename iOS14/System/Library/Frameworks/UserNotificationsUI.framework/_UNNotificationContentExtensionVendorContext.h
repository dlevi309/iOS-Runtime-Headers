/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/UserNotificationsUI.framework/UserNotificationsUI
*/

#import <UserNotificationsUI/UserNotificationsUI-Structs.h>
#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/_UNNotificationExtensionVendorInterface.h>
#import <libobjc.A.dylib/_UNNotificationExtensionHostInterface.h>

@protocol _UNNotificationContentExtensionContainer, OS_dispatch_queue;
@class NSArray, NSObject;

@interface _UNNotificationContentExtensionVendorContext : NSExtensionContext <_UNNotificationExtensionVendorInterface, _UNNotificationExtensionHostInterface> {

	BOOL _queueInactive;
	BOOL _didCheckActionResponseDelegate;
	NSArray* _notificationActions;
	id<_UNNotificationContentExtensionContainer> _notificationExtensionContainer;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                                              //@synthesize queue=_queue - In the implementation block
@property (assign,getter=isQueueInactive,nonatomic) BOOL queueInactive;                                                       //@synthesize queueInactive=_queueInactive - In the implementation block
@property (assign,nonatomic) BOOL didCheckActionResponseDelegate;                                                             //@synthesize didCheckActionResponseDelegate=_didCheckActionResponseDelegate - In the implementation block
@property (nonatomic,copy) NSArray * notificationActions;                                                                     //@synthesize notificationActions=_notificationActions - In the implementation block
@property (assign,nonatomic,__weak) id<_UNNotificationContentExtensionContainer> notificationExtensionContainer;              //@synthesize notificationExtensionContainer=_notificationExtensionContainer - In the implementation block
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(void)_extensionRequestsDismiss;
-(void)openURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3 ;
-(void)requestDismiss;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)dealloc;
-(void)performNotificationDefaultAction;
-(void)setNotificationActions:(NSArray *)arg1 ;
-(void)_extensionWantsToReceiveActionResponses:(BOOL)arg1 ;
-(void)_extensionWantsToBecomeFirstResponder:(BOOL)arg1 ;
-(void)_extensionDidCompleteNotificationResponse:(id)arg1 withOption:(unsigned long long)arg2 ;
-(void)_extensionSetPlayPauseMediaButtonType:(unsigned long long)arg1 ;
-(void)_extensionSetPlayPauseMediaButtonFrame:(CGRect)arg1 ;
-(void)_extensionSetPlayPauseMediaButtonColor:(id)arg1 ;
-(void)_extensionMediaPlayingStarted;
-(void)_extensionMediaPlayingPaused;
-(void)_extensionDidUpdatePlayPauseMediaButton;
-(void)_extensionRequestsDefaultAction;
-(void)_extensionDidUpdateTitle:(id)arg1 ;
-(void)_extensionDidUpdateNotificationActions:(id)arg1 ;
-(void)_hostDidReceiveNotification:(id)arg1 ;
-(void)_hostDidReceiveNotificationResponse:(id)arg1 ;
-(void)_hostWantsMediaToPlay;
-(void)_hostWantsMediaToPause;
-(void)_hostWantsToUpdateMediaPlayPauseButton;
-(void)_hostWantsToPreserveInputViews;
-(void)_hostWantsToRestoreInputViews;
-(void)_activateQueueIfNecessary;
-(void)_updateMediaPlayPauseButton;
-(id<_UNNotificationContentExtensionContainer>)notificationExtensionContainer;
-(id)_notificationExtension;
-(BOOL)didCheckActionResponseDelegate;
-(void)setDidCheckActionResponseDelegate:(BOOL)arg1 ;
-(void)mediaPlayingStarted;
-(void)mediaPlayingPaused;
-(void)dismissNotificationContentExtension;
-(void)_extensionWantsMessagesFromHostDelivered;
-(void)_extensionWantsToUpdateMediaPlayPauseButton;
-(NSArray *)notificationActions;
-(void)setNotificationExtensionContainer:(id<_UNNotificationContentExtensionContainer>)arg1 ;
-(BOOL)isQueueInactive;
-(void)setQueueInactive:(BOOL)arg1 ;
@end

