/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@protocol CKHandwritingPresentationControllerDelegate, CKHandwritingBrowserViewControllerProtocol, CKHandwritingViewControllerSendDelegate;
@class NSObject, CKDeviceOrientationManager, CKHandwritingWindow, UIViewController, CKScheduledUpdater, CKBrowserItemPayload, NSString;

@interface CKHandwritingPresentationController : NSObject {

	BOOL _requestedVisibility;
	BOOL _actualVisibility;
	BOOL _requestedVisibilityShouldBeAnimated;
	BOOL _suppressAppearanceCallbacksBecauseOfFirstInitialization;
	BOOL _foregrounded;
	NSObject*<CKHandwritingPresentationControllerDelegate> _delegate;
	CKDeviceOrientationManager* _deviceOrientationManager;
	long long _initialInterfaceOrientation;
	CKHandwritingWindow* _handwritingWindow;
	UIViewController*<CKHandwritingBrowserViewControllerProtocol> _browserViewController;
	CKScheduledUpdater* _animationScheduledUpdater;
	NSObject*<CKHandwritingViewControllerSendDelegate> _cachedSendDelegate;
	CKBrowserItemPayload* _cachedPluginPayload;

}

@property (nonatomic,retain) CKHandwritingWindow * handwritingWindow;                                                          //@synthesize handwritingWindow=_handwritingWindow - In the implementation block
@property (nonatomic,retain) UIViewController*<CKHandwritingBrowserViewControllerProtocol> browserViewController;              //@synthesize browserViewController=_browserViewController - In the implementation block
@property (nonatomic,retain) CKScheduledUpdater * animationScheduledUpdater;                                                   //@synthesize animationScheduledUpdater=_animationScheduledUpdater - In the implementation block
@property (assign,nonatomic) BOOL requestedVisibility;                                                                         //@synthesize requestedVisibility=_requestedVisibility - In the implementation block
@property (assign,nonatomic) BOOL actualVisibility;                                                                            //@synthesize actualVisibility=_actualVisibility - In the implementation block
@property (assign,nonatomic) BOOL requestedVisibilityShouldBeAnimated;                                                         //@synthesize requestedVisibilityShouldBeAnimated=_requestedVisibilityShouldBeAnimated - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<CKHandwritingViewControllerSendDelegate> cachedSendDelegate;                     //@synthesize cachedSendDelegate=_cachedSendDelegate - In the implementation block
@property (nonatomic,retain) CKBrowserItemPayload * cachedPluginPayload;                                                       //@synthesize cachedPluginPayload=_cachedPluginPayload - In the implementation block
@property (assign,nonatomic) BOOL suppressAppearanceCallbacksBecauseOfFirstInitialization;                                     //@synthesize suppressAppearanceCallbacksBecauseOfFirstInitialization=_suppressAppearanceCallbacksBecauseOfFirstInitialization - In the implementation block
@property (assign,nonatomic) BOOL foregrounded;                                                                                //@synthesize foregrounded=_foregrounded - In the implementation block
@property (assign,nonatomic,__weak) NSObject*<CKHandwritingViewControllerSendDelegate> sendDelegate; 
@property (assign,nonatomic,__weak) NSObject*<CKHandwritingPresentationControllerDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CKDeviceOrientationManager * deviceOrientationManager;                                            //@synthesize deviceOrientationManager=_deviceOrientationManager - In the implementation block
@property (nonatomic,retain) CKBrowserItemPayload * pluginPayload; 
@property (assign,nonatomic) long long initialInterfaceOrientation;                                                            //@synthesize initialInterfaceOrientation=_initialInterfaceOrientation - In the implementation block
@property (assign,nonatomic) BOOL visible; 
@property (readonly) NSString * pluginBundleID; 
-(id)init;
-(void)dealloc;
-(NSObject*<CKHandwritingPresentationControllerDelegate>)delegate;
-(void)setDelegate:(NSObject*<CKHandwritingPresentationControllerDelegate>)arg1 ;
-(NSString *)pluginBundleID;
-(BOOL)visible;
-(void)setVisible:(BOOL)arg1 ;
-(void)setVisible:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateVisibilityState;
-(long long)initialInterfaceOrientation;
-(void)setInitialInterfaceOrientation:(long long)arg1 ;
-(CKBrowserItemPayload *)pluginPayload;
-(BOOL)isHandwritingLandscape;
-(NSObject*<CKHandwritingViewControllerSendDelegate>)sendDelegate;
-(void)setSendDelegate:(NSObject*<CKHandwritingViewControllerSendDelegate>)arg1 ;
-(void)setDeviceOrientationManager:(CKDeviceOrientationManager *)arg1 ;
-(void)setPluginPayload:(CKBrowserItemPayload *)arg1 ;
-(void)setAnimationScheduledUpdater:(CKScheduledUpdater *)arg1 ;
-(CKScheduledUpdater *)animationScheduledUpdater;
-(void)setForegrounded:(BOOL)arg1 ;
-(void)_handleApplicationWillEnterForeground:(id)arg1 ;
-(void)_handleApplicationDidEnterBackground:(id)arg1 ;
-(void)setCachedSendDelegate:(NSObject*<CKHandwritingViewControllerSendDelegate>)arg1 ;
-(UIViewController*<CKHandwritingBrowserViewControllerProtocol>)browserViewController;
-(NSObject*<CKHandwritingViewControllerSendDelegate>)cachedSendDelegate;
-(void)setCachedPluginPayload:(CKBrowserItemPayload *)arg1 ;
-(void)_loadCachedPayloadIntoBrowser;
-(CKBrowserItemPayload *)cachedPluginPayload;
-(BOOL)actualVisibility;
-(BOOL)requestedVisibility;
-(void)setRequestedVisibility:(BOOL)arg1 ;
-(void)setRequestedVisibilityShouldBeAnimated:(BOOL)arg1 ;
-(CKHandwritingWindow *)handwritingWindow;
-(void)_flushHandwritingWindowCacheIfNeeded;
-(BOOL)requestedVisibilityShouldBeAnimated;
-(CKDeviceOrientationManager *)deviceOrientationManager;
-(void)_doInitialization;
-(BOOL)suppressAppearanceCallbacksBecauseOfFirstInitialization;
-(void)setActualVisibility:(BOOL)arg1 ;
-(void)setSuppressAppearanceCallbacksBecauseOfFirstInitialization:(BOOL)arg1 ;
-(BOOL)foregrounded;
-(void)setBrowserViewController:(UIViewController*<CKHandwritingBrowserViewControllerProtocol>)arg1 ;
-(void)setHandwritingWindow:(CKHandwritingWindow *)arg1 ;
@end

