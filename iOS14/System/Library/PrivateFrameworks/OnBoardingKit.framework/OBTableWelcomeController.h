/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <OnBoardingKit/OnBoardingKit-Structs.h>
#import <OnBoardingKit/OBWelcomeController.h>
#import <UIKit/UIScrollViewDelegate.h>

@class UITableView, OBTableHeaderFooterView, UIView, NSString;

@interface OBTableWelcomeController : OBWelcomeController <UIScrollViewDelegate> {

	BOOL _adoptTableViewScrollView;
	UITableView* _tableView;
	OBTableHeaderFooterView* _headerContainer;
	OBTableHeaderFooterView* _footerContainer;
	UIView* _hostedTableFooterView;
	UIView* _hostedTableHeaderView;
	UIEdgeInsets _hostedTableFooterPadding;

}

@property (nonatomic,retain) OBTableHeaderFooterView * headerContainer;              //@synthesize headerContainer=_headerContainer - In the implementation block
@property (nonatomic,retain) OBTableHeaderFooterView * footerContainer;              //@synthesize footerContainer=_footerContainer - In the implementation block
@property (assign,nonatomic) BOOL adoptTableViewScrollView;                          //@synthesize adoptTableViewScrollView=_adoptTableViewScrollView - In the implementation block
@property (nonatomic,retain) UIView * hostedTableFooterView;                         //@synthesize hostedTableFooterView=_hostedTableFooterView - In the implementation block
@property (nonatomic,retain) UIView * hostedTableHeaderView;                         //@synthesize hostedTableHeaderView=_hostedTableHeaderView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets hostedTableFooterPadding;                  //@synthesize hostedTableFooterPadding=_hostedTableFooterPadding - In the implementation block
@property (nonatomic,retain) UITableView * tableView;                                //@synthesize tableView=_tableView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(UITableView *)tableView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(BOOL)adoptTableViewScrollView;
-(void)_setTableViewNonHeaderFooterDonation:(id)arg1 ;
-(void)_setTableViewWithHeaderFooterDonation:(id)arg1 ;
-(void)updateDirectionalLayoutMargins;
-(void)_updateDirectionalLayoutMarginsForTableView;
-(void)setHeaderContainer:(OBTableHeaderFooterView *)arg1 ;
-(void)setFooterContainer:(OBTableHeaderFooterView *)arg1 ;
-(OBTableHeaderFooterView *)headerContainer;
-(double)headerViewBottomToTableViewTopPadding;
-(void)_updateHeaderTopOffsetConstraint;
-(void)_updateTableHeaderViewSizeIfNeeded;
-(void)_layoutButtonTray;
-(void)_updateButtonTrayTableFooterContainerSizeIfNeeded;
-(void)setHostedTableFooterView:(UIView *)arg1 ;
-(void)setHostedTableFooterPadding:(UIEdgeInsets)arg1 ;
-(void)setHostedTableHeaderView:(UIView *)arg1 ;
-(UIView *)hostedTableHeaderView;
-(OBTableHeaderFooterView *)footerContainer;
-(UIView *)hostedTableFooterView;
-(void)_layoutFooterContainerFloatButtonTray;
-(void)_floatButtonTray;
-(void)_layoutFooterContainerInlineButtonTray;
-(void)_inlineButtonTray;
-(BOOL)_buttonTrayInlined;
-(BOOL)_scrollContentUnderButtonTrayForGroupedStyle;
-(BOOL)_scrollViewContentIsUnderTray;
-(UIEdgeInsets)hostedTableFooterPadding;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 adoptTableViewScrollView:(BOOL)arg4 ;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 adoptTableViewScrollView:(BOOL)arg4 ;
-(void)setAdoptTableViewScrollView:(BOOL)arg1 ;
-(void)_setupScrollView;
-(void)viewDidLoad;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 icon:(id)arg3 ;
-(void)setTableView:(UITableView *)arg1 ;
-(void)setTableFooterView:(id)arg1 ;
-(void)loadView;
-(id)initWithTitle:(id)arg1 detailText:(id)arg2 symbolName:(id)arg3 ;
-(id)scrollView;
-(void)viewDidLayoutSubviews;
-(void)setTableHeaderView:(id)arg1 ;
-(BOOL)contentViewUnderButtonTray;
@end

