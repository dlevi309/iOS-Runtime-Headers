/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UIScrollView *)overlayScrollView;
-(UIView *)overlayContainerView;
-(CCUIModuleCollectionView *)overlayModuleCollectionView;
-(UIStatusBar *)overlayLeadingStatusBar;
-(CCUIStatusLabelViewController *)overlayStatusLabelViewController;
-(MTMaterialView *)overlayBackgroundView;
-(void)setOverlayStatusBarHidden:(BOOL)arg1;
-(CCUIHeaderPocketView *)overlayHeaderView;

@end

