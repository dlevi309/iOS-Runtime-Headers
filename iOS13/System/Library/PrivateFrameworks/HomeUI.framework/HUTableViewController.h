/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UITableViewController.h>
#import <libobjc.A.dylib/HUResizableCellDelegate.h>

@class NSHashTable, NSMapTable, NSString;

@interface HUTableViewController : UITableViewController <HUResizableCellDelegate> {

	BOOL _sectionContentInsetFollowsLayoutMargins;
	BOOL _viewLayingOut;
	NSHashTable* _childViewControllersAtViewWillAppearTime;
	NSHashTable* _childViewControllersAtViewWillDisappearTime;
	NSMapTable* _installedChildViewControllersKeyedByCell;

}

@property (nonatomic,retain) NSHashTable * childViewControllersAtViewWillAppearTime;                 //@synthesize childViewControllersAtViewWillAppearTime=_childViewControllersAtViewWillAppearTime - In the implementation block
@property (nonatomic,retain) NSHashTable * childViewControllersAtViewWillDisappearTime;              //@synthesize childViewControllersAtViewWillDisappearTime=_childViewControllersAtViewWillDisappearTime - In the implementation block
@property (nonatomic,retain) NSMapTable * installedChildViewControllersKeyedByCell;                  //@synthesize installedChildViewControllersKeyedByCell=_installedChildViewControllersKeyedByCell - In the implementation block
@property (assign,getter=isViewLayingOut,nonatomic) BOOL viewLayingOut;                              //@synthesize viewLayingOut=_viewLayingOut - In the implementation block
@property (assign,nonatomic) BOOL sectionContentInsetFollowsLayoutMargins;                           //@synthesize sectionContentInsetFollowsLayoutMargins=_sectionContentInsetFollowsLayoutMargins - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithCoder:(id)arg1 ;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
-(id)initWithStyle:(long long)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillLayoutSubviews;
-(void)preferredContentSizeDidChangeForChildContentContainer:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(void)tableView:(id)arg1 didEndDisplayingCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(BOOL)shouldAutomaticallyForwardAppearanceMethods;
-(void)contentSizeCategoryDidChange;
-(void)didUpdateRequiredHeightForCell:(id)arg1 ;
-(void)setChildViewControllersAtViewWillDisappearTime:(NSHashTable *)arg1 ;
-(void)setChildViewControllersAtViewWillAppearTime:(NSHashTable *)arg1 ;
-(NSHashTable *)childViewControllersAtViewWillAppearTime;
-(NSHashTable *)childViewControllersAtViewWillDisappearTime;
-(BOOL)sectionContentInsetFollowsLayoutMargins;
-(void)setViewLayingOut:(BOOL)arg1 ;
-(BOOL)isViewLayingOut;
-(NSMapTable *)installedChildViewControllersKeyedByCell;
-(void)setSectionContentInsetFollowsLayoutMargins:(BOOL)arg1 ;
-(void)setInstalledChildViewControllersKeyedByCell:(NSMapTable *)arg1 ;
@end

