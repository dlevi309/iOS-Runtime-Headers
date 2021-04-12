/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/UserNotificationsUI.framework/UserNotificationsUI
*/

#import <UserNotificationsUI/UserNotificationsUI-Structs.h>
#import <UIKitCore/_UIRemoteViewController.h>
#import <libobjc.A.dylib/_UNNotificationExtensionHostInterface.h>

@protocol _UNNotificationExtensionHostDelegate, NSCopying;
@class NSExtension, NSString, UIColor;

@interface _UNNotificationExtensionHostViewController : _UIRemoteViewController <_UNNotificationExtensionHostInterface> {

	BOOL _wantsToBecomeFirstResponder;
	BOOL _wantsToReceiveActionResponses;
	id<_UNNotificationExtensionHostDelegate> _delegate;
	NSExtension* _extension;
	id<NSCopying> _extensionRequestIdentifier;
	NSString* _notificationRequestIdentifier;
	unsigned long long _playPauseMediaButtonType;
	UIColor* _playPauseMediaButtonColor;
	CGRect _playPauseMediaButtonFrame;

}

@property (assign,nonatomic) BOOL wantsToBecomeFirstResponder;                                      //@synthesize wantsToBecomeFirstResponder=_wantsToBecomeFirstResponder - In the implementation block
@property (assign,nonatomic) BOOL wantsToReceiveActionResponses;                                    //@synthesize wantsToReceiveActionResponses=_wantsToReceiveActionResponses - In the implementation block
@property (assign,nonatomic) unsigned long long playPauseMediaButtonType;                           //@synthesize playPauseMediaButtonType=_playPauseMediaButtonType - In the implementation block
@property (assign,nonatomic) CGRect playPauseMediaButtonFrame;                                      //@synthesize playPauseMediaButtonFrame=_playPauseMediaButtonFrame - In the implementation block
@property (nonatomic,retain) UIColor * playPauseMediaButtonColor;                                   //@synthesize playPauseMediaButtonColor=_playPauseMediaButtonColor - In the implementation block
@property (assign,nonatomic,__weak) id<_UNNotificationExtensionHostDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic,__weak) NSExtension * extension;                                        //@synthesize extension=_extension - In the implementation block
@property (nonatomic,copy) id<NSCopying> extensionRequestIdentifier;                                //@synthesize extensionRequestIdentifier=_extensionRequestIdentifier - In the implementation block
@property (nonatomic,copy) NSString * notificationRequestIdentifier;                                //@synthesize notificationRequestIdentifier=_notificationRequestIdentifier - In the implementation block
+(id)exportedInterface;
+(id)serviceViewControllerInterface;
-(id<_UNNotificationExtensionHostDelegate>)delegate;
-(void)setDelegate:(id<_UNNotificationExtensionHostDelegate>)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)viewServiceDidTerminateWithError:(id)arg1 ;
-(void)setExtension:(NSExtension *)arg1 ;
-(void)setExtensionRequestIdentifier:(id<NSCopying>)arg1 ;
-(NSExtension *)extension;
-(id<NSCopying>)extensionRequestIdentifier;
-(BOOL)__shouldRemoteViewControllerFenceOperations;
-(void)_extensionRequestsDismiss;
-(BOOL)wantsToBecomeFirstResponder;
-(BOOL)wantsToReceiveActionResponses;
-(unsigned long long)playPauseMediaButtonType;
-(CGRect)playPauseMediaButtonFrame;
-(UIColor *)playPauseMediaButtonColor;
-(void)setNotificationRequestIdentifier:(NSString *)arg1 ;
-(void)_extensionMediaPlayingStarted;
-(void)_extensionMediaPlayingPaused;
-(void)_extensionRequestsDefaultAction;
-(void)_extensionSetUserNotificationActions:(id)arg1 ;
-(void)_extensionWantsToReceiveActionResponses:(BOOL)arg1 ;
-(void)_extensionWantsToBecomeFirstResponder:(BOOL)arg1 ;
-(void)_extensionDidCompleteNotificationResponse:(id)arg1 withOption:(unsigned long long)arg2 ;
-(void)_extensionSetPlayPauseMediaButtonType:(unsigned long long)arg1 ;
-(void)_extensionSetPlayPauseMediaButtonFrame:(CGRect)arg1 ;
-(void)_extensionSetPlayPauseMediaButtonColor:(id)arg1 ;
-(void)_extensionDidUpdateControls;
-(void)_extensionSetTitle:(id)arg1 ;
-(void)setWantsToReceiveActionResponses:(BOOL)arg1 ;
-(void)setWantsToBecomeFirstResponder:(BOOL)arg1 ;
-(void)setPlayPauseMediaButtonType:(unsigned long long)arg1 ;
-(void)setPlayPauseMediaButtonFrame:(CGRect)arg1 ;
-(void)setPlayPauseMediaButtonColor:(UIColor *)arg1 ;
-(NSString *)notificationRequestIdentifier;
@end

