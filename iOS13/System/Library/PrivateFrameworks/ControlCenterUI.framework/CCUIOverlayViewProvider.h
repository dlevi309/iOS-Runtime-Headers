/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUI.framework/ControlCenterUI
*/

@class MTMaterialView, UIScrollView, UIView, CCUIModuleCollectionView, CCUIStatusLabelViewController, CCUIHeaderPocketView, UIStatusBar;


@protocol CCUIOverlayViewProvider <NSObject>
@property (nonatomic,readonly) MTMaterialView * overlayBackgroundView; 
@property (nonatomic,readonly) UIScrollView * overlayScrollView; 
@property (nonatomic,readonly) UIView * overlayContainerView; 
@property (nonatomic,readonly) CCUIModuleCollectionView * overlayModuleCollectionView; 
@property (nonatomic,readonly) CCUIStatusLabelViewController * overlayStatusLabelViewController; 
@property (nonatomic,readonly) CCUIHeaderPocketView * overlayHeaderView; 
@property (nonatomic,readonly) UIStatusBar * overlayLeadingStatusBar; 
@required
-(UIView *)overlayContainerView;
-(UIScrollView *)overlayScrollView;
-(CCUIHeaderPocketView *)overlayHeaderView;
-(MTMaterialView *)overlayBackgroundView;
-(CCUIModuleCollectionView *)overlayModuleCollectionView;
-(UIStatusBar *)overlayLeadingStatusBar;
-(CCUIStatusLabelViewController *)overlayStatusLabelViewController;
-(void)setOverlayStatusBarHidden:(BOOL)arg1;

@end

