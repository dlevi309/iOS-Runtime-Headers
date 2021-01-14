/*
* Generated on Thursday, January 14, 2021 at 2:28:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UISearchBar *)searchBar;
-(double)bottomContentInset;
-(void)setViewController:(id)arg1;
-(void)setSearchBar:(id)arg1;
-(UIView *)titleView;
-(void)setBottomContentInset:(double)arg1;
-(id)initWithViewController:(id)arg1;
-(void)setTitle:(id)arg1;
-(void)setTitleView:(id)arg1;
-(void)setContainer:(id)arg1;
-(UIViewController *)viewController;
-(WFDrawerPaneContainer *)container;
-(NSString *)title;
-(CGRect)grabberAreaBounds;
-(double)topCornerRadius;
-(void)setTopCornerRadius:(double)arg1;
-(UIView*<WFDrawerPaneHeaderView>)activeHeaderView;
-(void)setActiveHeaderView:(id)arg1;

@end

