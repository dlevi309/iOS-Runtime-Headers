/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowUI.framework/WorkflowUI
*/

@class UIViewController, WFDrawerPaneContainer, NSString, UIView, UISearchBar;


@protocol WFDrawerPane <NSObject>
@property (nonatomic,retain) UIViewController * viewController; 
@property (assign,nonatomic,__weak) WFDrawerPaneContainer * container; 
@property (nonatomic,readonly) CGRect grabberAreaBounds; 
@property (assign,nonatomic) double bottomContentInset; 
@property (assign,nonatomic) double topCornerRadius; 
@property (assign,nonatomic,__weak) UIView*<WFDrawerPaneHeaderView> activeHeaderView; 
@property (nonatomic,copy) NSString * title; 
@property (nonatomic,retain) UIView * titleView; 
@property (nonatomic,retain) UISearchBar * searchBar; 
@optional
-(void)willTransitionToVisibility:(unsigned long long)arg1;
-(void)transitionContentForHeight:(double)arg1;
-(void)didTransitionToVisibility:(unsigned long long)arg1;

@required
-(WFDrawerPaneContainer *)container;
-(void)setContainer:(id)arg1;
-(NSString *)title;
-(void)setTitle:(id)arg1;
-(void)setViewController:(id)arg1;
-(UIViewController *)viewController;
-(UIView *)titleView;
-(void)setTitleView:(id)arg1;
-(UISearchBar *)searchBar;
-(void)setSearchBar:(id)arg1;
-(id)initWithViewController:(id)arg1;
-(void)setBottomContentInset:(double)arg1;
-(double)bottomContentInset;
-(CGRect)grabberAreaBounds;
-(double)topCornerRadius;
-(void)setTopCornerRadius:(double)arg1;
-(UIView*<WFDrawerPaneHeaderView>)activeHeaderView;
-(void)setActiveHeaderView:(id)arg1;

@end

