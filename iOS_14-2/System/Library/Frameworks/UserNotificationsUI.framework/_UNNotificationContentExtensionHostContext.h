/*
* Generated on Thursday, January 14, 2021 at 2:27:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/UserNotificationsUI.framework/UserNotificationsUI
*/

#import <UserNotificationsUI/UserNotificationsUI-Structs.h>
#import <Foundation/NSExtensionContext.h>
#import <libobjc.A.dylib/_UNNotificationExtensionHostInterface.h>
#import <libobjc.A.dylib/_UNNotificationExtensionVendorInterface.h>

@protocol _UNNotificationContentExtensionHostContextDelegate, OS_dispatch_queue;
@class UIColor, NSObject;

@interface _UNNotificationContentExtensionHostContext : NSExtensionContext <_UNNotificationExtensionHostInterface, _UNNotificationExtensionVendorInterface> {

	BOOL _wantsToBecomeFirstResponder;
	BOOL _wantsToReceiveActionResponses;
	BOOL _delegateQueueSuspended;
	unsigned long long _playPauseMediaButtonType;
	UIColor* _playPauseMediaButtonColor;
	id<_UNNotificationContentExtensionHostContextDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	CGRect _playPauseMediaButtonFrame;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> delegateQueue;                                          //@synthesize delegateQueue=_delegateQueue - In the implementation block
@property (assign,getter=isDelegateQueueSuspended,nonatomic) BOOL delegateQueueSuspended;                         //@synthesize delegateQueueSuspended=_delegateQueueSuspended - In the implementation block
@property (assign,nonatomic) BOOL wantsToBecomeFirstResponder;                                                    //@synthesize wantsToBecomeFirstResponder=_wantsToBecomeFirstResponder - In the implementation block
@property (assign,nonatomic) BOOL wantsToReceiveActionResponses;                                                  //@synthesize wantsToReceiveActionResponses=_wantsToReceiveActionResponses - In the implementation block
@property (assign,nonatomic) unsigned long long playPauseMediaButtonType;                                         //@synthesize playPauseMediaButtonType=_playPauseMediaButtonType - In the implementation block
@property (assign,nonatomic) CGRect playPauseMediaButtonFrame;                                                    //@synthesize playPauseMediaButtonFrame=_playPauseMediaButtonFrame - In the implementation block
@property (nonatomic,retain) UIColor * playPauseMediaButtonColor;                                                 //@synthesize playPauseMediaButtonColor=_playPauseMediaButtonColor - In the implementation block
@property (assign,nonatomic,__weak) id<_UNNotificationContentExtensionHostContextDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
+(id)_extensionAuxiliaryVendorProtocol;
+(id)_extensionAuxiliaryHostProtocol;
-(id<_UNNotificationContentExtensionHostContextDelegate>)delegate;
-(void)setDelegateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setDelegate:(id<_UNNotificationContentExtensionHostContextDelegate>)arg1 ;
-(void)_extensionRequestsDismiss;
-(void)didReceiveNotification:(id)arg1 ;
-(id)initWithInputItems:(id)arg1 listenerEndpoint:(id)arg2 contextUUID:(id)arg3 ;
-(NSObject*<OS_dispatch_queue>)delegateQueue;
-(void)dealloc;
-(void)mediaPause;
-(void)mediaPlay;
-(void)preserveInputViews;
-(void)restoreInputViews;
-(BOOL)wantsToBecomeFirstResponder;
-(BOOL)wantsToReceiveActionResponses;
-(void)didReceiveNotificationResponse:(id)arg1 ;
-(void)updateMediaPlayPauseButton;
-(unsigned long long)playPauseMediaButtonType;
-(CGRect)playPauseMediaButtonFrame;
-(UIColor *)playPauseMediaButtonColor;
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
-(void)_resumeDelegateQueueIfNecessary;
-(void)setWantsToReceiveActionResponses:(BOOL)arg1 ;
-(void)setWantsToBecomeFirstResponder:(BOOL)arg1 ;
-(void)setPlayPauseMediaButtonType:(unsigned long long)arg1 ;
-(void)setPlayPauseMediaButtonFrame:(CGRect)arg1 ;
-(void)setPlayPauseMediaButtonColor:(UIColor *)arg1 ;
-(BOOL)isDelegateQueueSuspended;
-(void)setDelegateQueueSuspended:(BOOL)arg1 ;
@end

