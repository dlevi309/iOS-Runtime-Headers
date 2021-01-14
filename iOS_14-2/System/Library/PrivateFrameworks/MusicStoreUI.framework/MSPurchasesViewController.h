/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicStoreUI.framework/MusicStoreUI
*/

#import <iTunesStoreUI/SUViewController.h>

@class UIView, SUSegmentedControl, NSArray;

@interface MSPurchasesViewController : SUViewController {

	long long _activeViewControllerIndex;
	UIView* _containerView;
	SUSegmentedControl* _segmentedControl;
	NSArray* _viewControllers;

}
-(id)initWithSection:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)loadView;
-(void)dealloc;
-(void)_segmentedControlAction:(id)arg1 ;
-(void)tabBarControllerDidReselectTabBarItem:(id)arg1 ;
-(id)copyArchivableContext;
-(void)restoreArchivableContext:(id)arg1 ;
-(void)invalidateForMemoryPurge;
-(id)_activeViewController;
-(id)_newSegmentedControlWithPageSectionGroup:(id)arg1 ;
-(void)_tabConfigurationChangedNotification:(id)arg1 ;
-(void)_reloadSegmentedControlPlacement;
-(void)_reloadViewControllersWithSection:(id)arg1 ;
-(void)_showActiveViewController;
-(void)_setActiveViewControllerIndex:(long long)arg1 ;
-(id)_newViewControllerForPageSection:(id)arg1 ;
@end

