/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UISplitViewController.h>
#import <UIKit/UISplitViewControllerDelegate.h>

@class NSHashTable, UIViewController;

@interface PXSplitViewController : UISplitViewController <UISplitViewControllerDelegate> {

	BOOL _inViewWillTransitionToSize;
	long long _originalPreferredDisplayMode;
	NSHashTable* _changeObservers;
	BOOL _wantsSidebarHidden;
	UIViewController* _sidebarViewController;
	UIViewController* _contentViewController;

}

@property (nonatomic,readonly) UIViewController * sidebarViewController;              //@synthesize sidebarViewController=_sidebarViewController - In the implementation block
@property (nonatomic,readonly) UIViewController * contentViewController;              //@synthesize contentViewController=_contentViewController - In the implementation block
@property (nonatomic,readonly) BOOL isSidebarVisible; 
@property (assign,nonatomic) BOOL wantsSidebarHidden;                                 //@synthesize wantsSidebarHidden=_wantsSidebarHidden - In the implementation block
+(void)initialize;
-(UIViewController *)sidebarViewController;
-(void)registerChangeObserver:(id)arg1 ;
-(BOOL)isSidebarVisible;
-(void)unregisterChangeObserver:(id)arg1 ;
-(long long)splitViewController:(id)arg1 displayModeForExpandingToProposedDisplayMode:(long long)arg2 ;
-(id)keyCommands;
-(BOOL)_isDisplayModeAllVisibleAllowed;
-(void)setWantsSidebarHidden:(BOOL)arg1 ;
-(id)initWithSidebarNavigationController:(id)arg1 contentViewController:(id)arg2 ;
-(BOOL)wantsSidebarHidden;
-(UIViewController *)contentViewController;
-(void)toggleSidebarVisibilityAnimated;
-(void)dismissPrimaryColumnIfOverlay;
-(id)_deepestUnambiguousResponder;
-(void)splitViewController:(id)arg1 willChangeToDisplayMode:(long long)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)px_endPointForTransition:(id)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
@end

