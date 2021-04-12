/*
* Generated on Thursday, January 14, 2021 at 2:26:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcuts.framework/VoiceShortcuts
*/

#import <libobjc.A.dylib/NSXPCListenerDelegate.h>
#import <libobjc.A.dylib/WFDialogXPCHostProtocol.h>
#import <libobjc.A.dylib/WFScreenOnObserverDelegate.h>
#import <libobjc.A.dylib/WFDialogAlertPresenterDelegate.h>

@protocol WFDialogPresentationManagerDelegate, WFDialogAlertPresenter;
@class NSXPCListener, NSXPCConnection, WFPresentedDialog, WFWorkflowRunningContext, WFDialogAttribution, NSMutableArray, WFDialogNotificationManager, WFScreenOnObserver, NSString, WFUserNotificationManager;

@interface WFDialogPresentationManager : NSObject <NSXPCListenerDelegate, WFDialogXPCHostProtocol, WFScreenOnObserverDelegate, WFDialogAlertPresenterDelegate> {

	id<WFDialogPresentationManagerDelegate> _delegate;
	id<WFDialogAlertPresenter> _remoteAlertPresenter;
	NSXPCListener* _listener;
	NSXPCConnection* _activeConnection;
	WFPresentedDialog* _presentedDialog;
	/*^block*/id _contentDismissalCompletionHandler;
	WFWorkflowRunningContext* _persistentRunningContext;
	WFDialogAttribution* _persistentRunningAttribution;
	NSMutableArray* _persistentPresentationQueue;
	NSMutableArray* _otherPresentationQueue;
	WFDialogNotificationManager* _notificationManager;
	WFScreenOnObserver* _screenOnObserver;
	NSString* _dismissalReason;

}

@property (nonatomic,readonly) id<WFDialogAlertPresenter> remoteAlertPresenter;                    //@synthesize remoteAlertPresenter=_remoteAlertPresenter - In the implementation block
@property (nonatomic,readonly) NSXPCListener * listener;                                           //@synthesize listener=_listener - In the implementation block
@property (nonatomic,retain) NSXPCConnection * activeConnection;                                   //@synthesize activeConnection=_activeConnection - In the implementation block
@property (nonatomic,retain) WFPresentedDialog * presentedDialog;                                  //@synthesize presentedDialog=_presentedDialog - In the implementation block
@property (nonatomic,copy) id contentDismissalCompletionHandler;                                   //@synthesize contentDismissalCompletionHandler=_contentDismissalCompletionHandler - In the implementation block
@property (nonatomic,retain) WFWorkflowRunningContext * persistentRunningContext;                  //@synthesize persistentRunningContext=_persistentRunningContext - In the implementation block
@property (nonatomic,retain) WFDialogAttribution * persistentRunningAttribution;                   //@synthesize persistentRunningAttribution=_persistentRunningAttribution - In the implementation block
@property (nonatomic,readonly) NSMutableArray * persistentPresentationQueue;                       //@synthesize persistentPresentationQueue=_persistentPresentationQueue - In the implementation block
@property (nonatomic,readonly) NSMutableArray * otherPresentationQueue;                            //@synthesize otherPresentationQueue=_otherPresentationQueue - In the implementation block
@property (nonatomic,readonly) WFDialogNotificationManager * notificationManager;                  //@synthesize notificationManager=_notificationManager - In the implementation block
@property (nonatomic,readonly) WFScreenOnObserver * screenOnObserver;                              //@synthesize screenOnObserver=_screenOnObserver - In the implementation block
@property (nonatomic,retain) NSString * dismissalReason;                                           //@synthesize dismissalReason=_dismissalReason - In the implementation block
@property (assign,nonatomic,__weak) id<WFDialogPresentationManagerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) WFUserNotificationManager * userNotificationManager; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)logFinishDialogPresentationWithPresentedDialog:(id)arg1 ;
-(void)completePersistentModeWithSuccess:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)setPersistentRunningAttribution:(WFDialogAttribution *)arg1 ;
-(id)initWithNotificationManager:(id)arg1 dialogAlertPresenter:(id)arg2 screenOnObserver:(id)arg3 ;
-(WFPresentedDialog *)presentedDialog;
-(void)dismissPresentedContentWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)logFinishDialogPresentationWithRequest:(id)arg1 presentationMode:(unsigned long long)arg2 automationType:(id)arg3 ;
-(void)screenOnStateDidChange:(id)arg1 ;
-(NSXPCConnection *)activeConnection;
-(id<WFDialogPresentationManagerDelegate>)delegate;
-(void)clearPersistentModeStateIfNecessary;
-(void)requestDismissalWithReason:(id)arg1 ;
-(void)logStartDialogPresentationWithRequest:(id)arg1 presentationMode:(unsigned long long)arg2 ;
-(void)postNotificationWithRequest:(id)arg1 presentationMode:(unsigned long long)arg2 context:(id)arg3 ;
-(void)setPersistentRunningContext:(WFWorkflowRunningContext *)arg1 ;
-(id<WFDialogAlertPresenter>)remoteAlertPresenter;
-(id)contentDismissalCompletionHandler;
-(void)trackDialogEventWithKey:(id)arg1 request:(id)arg2 presentationMode:(unsigned long long)arg3 automationType:(id)arg4 ;
-(void)deactivateRemoteAlertAndInvalidateConnection;
-(WFDialogNotificationManager *)notificationManager;
-(id)connectedDialog;
-(NSString *)dismissalReason;
-(void)dialogAlertPresenterDidInvalidateAlert:(id)arg1 ;
-(WFWorkflowRunningContext *)persistentRunningContext;
-(void)setDelegate:(id<WFDialogPresentationManagerDelegate>)arg1 ;
-(NSXPCListener *)listener;
-(void)beginConnection;
-(void)removeStaleNotifications;
-(BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2 ;
-(id)initWithUserNotificationManager:(id)arg1 ;
-(void)showDialogRequest:(id)arg1 fromWorkflowWithPresentationMode:(unsigned long long)arg2 runningContext:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(id)xpcListenerEndpointForDialogAlertPresenter:(id)arg1 ;
-(void)presentNextDialog;
-(void)dialogAlertPresenterDidDeactivateAlert:(id)arg1 ;
-(NSMutableArray *)persistentPresentationQueue;
-(void)trackSuspendShortcutWithPresentedDialog:(id)arg1 ;
-(void)setActiveConnection:(NSXPCConnection *)arg1 ;
-(void)connectedDialogDidDisconnect;
-(WFDialogAttribution *)persistentRunningAttribution;
-(WFScreenOnObserver *)screenOnObserver;
-(WFUserNotificationManager *)userNotificationManager;
-(void)beginPersistentModeWithRunningContext:(id)arg1 attribution:(id)arg2 ;
-(void)setContentDismissalCompletionHandler:(id)arg1 ;
-(void)setDismissalReason:(NSString *)arg1 ;
-(void)dealloc;
-(BOOL)hasMoreDialogsToPresent;
-(void)setPresentedDialog:(WFPresentedDialog *)arg1 ;
-(NSMutableArray *)otherPresentationQueue;
@end

