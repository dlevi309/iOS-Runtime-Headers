/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UITableViewController.h>

@class UIBlurEffect;

@interface _SFPopoverSizingTableViewController : UITableViewController {

	UIBlurEffect* _backgroundBlurEffect;
	BOOL _didUpdateTranslucentAppearanceAtLeastOnce;
	BOOL _didHaveTranslucentAppearance;
	BOOL _updatePreferredContentSizeAfterNextLayout;

}

@property (nonatomic,readonly) long long minimumNumberOfRows; 
@property (nonatomic,readonly) long long maximumNumberOfRows; 
@property (nonatomic,readonly) BOOL hasTranslucentAppearance; 
+(void)initialize;
+(double)caculateHeightForTableView:(id)arg1 targetGlobalRow:(long long)arg2 outGlobalRow:(long long*)arg3 ;
+(id)tableViewCellForSizeEstimation;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)keyCommands;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(CGSize)preferredContentSize;
-(long long)maximumNumberOfRows;
-(long long)minimumNumberOfRows;
-(void)_updateTranslucentAppearanceIfNeeded;
-(BOOL)_needsTranslucentAppearanceUpdate;
-(void)updateTranslucentAppearance;
-(BOOL)hasTranslucentAppearance;
-(id)backgroundColorUsingTranslucentAppearance:(BOOL)arg1 ;
-(void)updatePreferredContentSize;
-(void)cancelPopoverKeyPressed;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(id)_backgroundBlurEffect;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(double)tableViewSpacingForExtraSeparators:(id)arg1 ;
@end

