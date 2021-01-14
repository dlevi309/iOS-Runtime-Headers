/*
* Generated on Thursday, January 14, 2021 at 2:29:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/ControlCenter/Bundles/HomeControlCenterModule.bundle/HomeControlCenterModule
*/

#import <HomeControlCenterModule/HomeControlCenterModule-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <libobjc.A.dylib/HUCCRemoteDashboardDelegate.h>

@protocol HUCCDashboardContainerViewControllerDelegate;
@class NSDictionary, HUCCRemoteDashboardViewController, _UIAsyncInvocation;

@interface HUCCDashboardContainerViewController : UIViewController <HUCCRemoteDashboardDelegate> {

	NSDictionary* _transitionSubviewFrames;
	HUCCRemoteDashboardViewController* _remoteDashboardViewController;
	_UIAsyncInvocation* _cancelServiceInvocation;
	id<HUCCDashboardContainerViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) HUCCRemoteDashboardViewController * remoteDashboardViewController;              //@synthesize remoteDashboardViewController=_remoteDashboardViewController - In the implementation block
@property (nonatomic,retain) _UIAsyncInvocation * cancelServiceInvocation;                                   //@synthesize cancelServiceInvocation=_cancelServiceInvocation - In the implementation block
@property (assign,nonatomic,__weak) id<HUCCDashboardContainerViewControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) NSDictionary * transitionSubviewFrames;                                         //@synthesize transitionSubviewFrames=_transitionSubviewFrames - In the implementation block
-(id<HUCCDashboardContainerViewControllerDelegate>)delegate;
-(void)setCancelServiceInvocation:(_UIAsyncInvocation *)arg1 ;
-(_UIAsyncInvocation *)cancelServiceInvocation;
-(void)setDelegate:(id<HUCCDashboardContainerViewControllerDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(id)serviceViewControllerProxy;
-(void)loadView;
-(void)quickControlsPresentationDidUpdate:(BOOL)arg1 ;
-(void)willBeginTransition:(BOOL)arg1 forCompactModule:(BOOL)arg2 ;
-(void)willFinishTransition:(BOOL)arg1 forCompactModule:(BOOL)arg2 ;
-(void)stopRemoteViewController;
-(NSDictionary *)transitionSubviewFrames;
-(CGSize)preferredExpandedSize;
-(void)remoteDashboard:(id)arg1 viewServiceDidTerminateWithError:(id)arg2 ;
-(CGRect)expandedContentFrame;
-(void)_requestRemoteViewControllerForHome:(id)arg1 ;
-(void)_stopAndRemoveRemoteViewController;
-(HUCCRemoteDashboardViewController *)remoteDashboardViewController;
-(void)_configureAndAddRemoteViewController:(id)arg1 forHome:(id)arg2 ;
-(void)_addNewRemoteViewController:(id)arg1 ;
-(void)setTransitionSubviewFrames:(NSDictionary *)arg1 ;
-(void)setRemoteDashboardViewController:(HUCCRemoteDashboardViewController *)arg1 ;
-(void)requestLockAuthenticationForRemoteDashboard:(id)arg1 ;
@end

