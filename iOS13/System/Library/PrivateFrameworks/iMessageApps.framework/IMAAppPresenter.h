/*
* Generated on Monday, March 1, 2021 at 2:35:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iMessageApps.framework/iMessageApps
*/

#import <iMessageApps/iMessageApps-Structs.h>
#import <libobjc.A.dylib/CKBrowserViewControllerSendDelegate.h>
#import <libobjc.A.dylib/CKBrowserSwitcherViewControllerDelegate.h>
#import <libobjc.A.dylib/CKFullScreenAppViewControllerDelegate.h>
#import <libobjc.A.dylib/CKBrowserDragControllerTranscriptDelegate.h>
#import <libobjc.A.dylib/CKBrowserTransitionCoordinatorDelegate.h>

@protocol IMAAppPresenterDelegate;
@class IMBalloonPlugin, CKFullScreenAppViewController, CKBrowserTransitionCoordinator, CKBrowserSwitcherViewController, UIViewController, NSString;

@interface IMAAppPresenter : NSObject <CKBrowserViewControllerSendDelegate, CKBrowserSwitcherViewControllerDelegate, CKFullScreenAppViewControllerDelegate, CKBrowserDragControllerTranscriptDelegate, CKBrowserTransitionCoordinatorDelegate> {

	id<IMAAppPresenterDelegate> _delegate;
	IMBalloonPlugin* _currentBalloonPlugin;
	CKFullScreenAppViewController* _expandedAppViewController;
	CKBrowserTransitionCoordinator* _transitionCoordinator;
	BOOL _isTransitioningPresentationStyles;
	BOOL _alwaysPresentAppsExpanded;
	BOOL _hidesCompactAppForStickerDrag;
	double _compactHeight;
	CKBrowserSwitcherViewController* _switcherViewController;

}

@property (nonatomic,retain) CKBrowserSwitcherViewController * switcherViewController;              //@synthesize switcherViewController=_switcherViewController - In the implementation block
@property (assign,nonatomic,__weak) id<IMAAppPresenterDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double compactHeight;                                                  //@synthesize compactHeight=_compactHeight - In the implementation block
@property (assign,nonatomic) BOOL alwaysPresentAppsExpanded;                                        //@synthesize alwaysPresentAppsExpanded=_alwaysPresentAppsExpanded - In the implementation block
@property (nonatomic,readonly) UIViewController * currentAppViewController; 
@property (assign,nonatomic) BOOL hidesCompactAppForStickerDrag;                                    //@synthesize hidesCompactAppForStickerDrag=_hidesCompactAppForStickerDrag - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)disableAutomaticAppDiscovery;
+(void)loadAppWithIdentifierIfNeeded:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id<IMAAppPresenterDelegate>)delegate;
-(void)setDelegate:(id<IMAAppPresenterDelegate>)arg1 ;
-(void)dismiss;
-(void)startEditingPayload:(id)arg1 ;
-(void)setLocalUserIsTyping:(BOOL)arg1 ;
-(id)dragControllerTranscriptDelegate;
-(void)dragManagerDidBeginDragging:(id)arg1 ;
-(void)dragManager:(id)arg1 draggedItemWithTarget:(id)arg2 ;
-(void)dragManagerDidEndDragging:(id)arg1 ;
-(int)dragManager:(id)arg1 dropAreaForDragTarget:(id)arg2 ;
-(void)dragManager:(id)arg1 overrideDropPointForTarget:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)dismissAndReloadInputViews:(BOOL)arg1 forPlugin:(id)arg2 ;
-(void)dismissAndReloadInputViews:(BOOL)arg1 ;
-(BOOL)shouldAlwaysShowAppTitle;
-(void)requestPresentationStyleExpanded:(BOOL)arg1 ;
-(void)commitPayload:(id)arg1 ;
-(void)startEditingPayload:(id)arg1 dismiss:(BOOL)arg2 ;
-(void)openURL:(id)arg1 pluginID:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)openURL:(id)arg1 applicationIdentifier:(id)arg2 pluginID:(id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)dismissToKeyboard:(BOOL)arg1 ;
-(void)commitSticker:(id)arg1 ;
-(void)commitSticker:(id)arg1 withDragTarget:(id)arg2 ;
-(void)requestPresentationStyleFullScreenModalForPlugin:(id)arg1 ;
-(void)switcherViewControllerDidFinishSwitching:(id)arg1 toViewController:(id)arg2 ;
-(void)switcherViewControllerDidCollapse:(id)arg1 ;
-(BOOL)switcherViewControllerShouldShowIconAndTitleWhenCompact:(id)arg1 ;
-(void)browserTransitionCoordinatorWillTransitionOrPresentToFullscreen:(id)arg1 withReason:(long long)arg2 ;
-(void)browserTransitionCoordinatorDidTransitionOrPresentToFullscreen:(id)arg1 withReason:(long long)arg2 ;
-(void)browserTransitionCoordinatorWillCollapseOrDismiss:(id)arg1 withReason:(long long)arg2 ;
-(void)browserTransitionCoordinatorDidCollapseOrDismiss:(id)arg1 withReason:(long long)arg2 ;
-(CGSize)browserTransitionCoordinator:(id)arg1 preferredSizeForBrowser:(id)arg2 ;
-(double)browserTransitionCoordinatorCollapsedContentHeight:(id)arg1 ;
-(BOOL)browserTransitionCoordinatorShouldDismissOnDragSuccess:(id)arg1 ;
-(id)transitionsPresentationViewController;
-(double)compactHeight;
-(void)setCompactHeight:(double)arg1 ;
-(UIViewController *)currentAppViewController;
-(void)setAlwaysPresentAppsExpanded:(BOOL)arg1 ;
-(void)hideAppViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)alwaysPresentAppsExpanded;
-(void)notifyDelegateOfSelectedPlugin:(id)arg1 ;
-(CGRect)alwaysExpandedAppViewControllerFrame;
-(BOOL)addSwitcher;
-(void)positionSwitcherOffscreen:(BOOL)arg1 ;
-(CKBrowserSwitcherViewController *)switcherViewController;
-(void)animateSwitcherOffscreen:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)_hideCompactBrowserAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateSwitcherViewFrame;
-(id)appViewControllerPresenter;
-(double)switcherHeight;
-(BOOL)isAppCompact;
-(BOOL)hidesCompactAppForStickerDrag;
-(BOOL)isSwitcherOffscreen;
-(void)presentAppWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)presentFullScreenModalAppWithBundleIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)updateAppFrameForRotation;
-(void)setHidesCompactAppForStickerDrag:(BOOL)arg1 ;
-(void)setSwitcherViewController:(CKBrowserSwitcherViewController *)arg1 ;
@end

