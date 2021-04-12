/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
	double _preferredContentWidth;

}

@property (nonatomic,readonly) long long minimumNumberOfRows; 
@property (nonatomic,readonly) long long maximumNumberOfRows; 
@property (assign,nonatomic) double preferredContentWidth;                 //@synthesize preferredContentWidth=_preferredContentWidth - In the implementation block
@property (nonatomic,readonly) BOOL hasTranslucentAppearance; 
+(void)initialize;
+(id)tableViewCellForSizeEstimation;
-(void)traitCollectionDidChange:(id)arg1 ;
-(CGSize)preferredContentSize;
-(void)willTransitionToTraitCollection:(id)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewWillTransitionToSize:(CGSize)arg1 withTransitionCoordinator:(id)arg2 ;
-(void)willMoveToParentViewController:(id)arg1 ;
-(void)didMoveToParentViewController:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(id)keyCommands;
-(id)_backgroundBlurEffect;
-(double)tableViewSpacingForExtraSeparators:(id)arg1 ;
-(long long)maximumNumberOfRows;
-(long long)minimumNumberOfRows;
-(void)updatePreferredContentSize;
-(void)_updateTranslucentAppearanceIfNeeded;
-(BOOL)_needsTranslucentAppearanceUpdate;
-(void)updateTranslucentAppearance;
-(BOOL)hasTranslucentAppearance;
-(id)backgroundColorUsingTranslucentAppearance:(BOOL)arg1 ;
-(void)cancelPopoverKeyPressed;
-(void)setPreferredContentWidth:(double)arg1 ;
-(double)preferredContentWidth;
@end

