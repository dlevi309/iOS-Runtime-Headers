/*
* Generated on Thursday, January 14, 2021 at 2:24:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthUI.framework/HealthUI
*/

#import <HealthUI/HealthUI-Structs.h>
#import <HealthUI/HKViewController.h>
#import <libobjc.A.dylib/HKTitledBuddyHeaderViewDelegate.h>

@class UIScrollView, UIStackView, UIVisualEffectView, HKTitledLogoBuddyHeaderView, NSArray, UIActivityIndicatorView, NSString;

@interface HKTitledBuddyViewController : HKViewController <HKTitledBuddyHeaderViewDelegate> {

	UIScrollView* _scrollView;
	UIStackView* _bodyStackView;
	UIVisualEffectView* _anchoredButtonContainerView;
	UIStackView* _containerStackView;
	HKTitledLogoBuddyHeaderView* _header;
	NSArray* _buttons;
	NSArray* _buttonStackConstraints;
	UIActivityIndicatorView* _loadingIndicator;

}

@property (nonatomic,readonly) UIActivityIndicatorView * loadingIndicator;              //@synthesize loadingIndicator=_loadingIndicator - In the implementation block
@property (nonatomic,readonly) NSArray * buttons; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)embedView:(id)arg1 inContainerViewWithMinimumEdgeInsets:(UIEdgeInsets)arg2 ;
-(id)init;
-(void)viewWillAppear:(BOOL)arg1 ;
-(NSArray *)buttons;
-(unsigned long long)supportedInterfaceOrientations;
-(id)titleImage;
-(void)viewDidLoad;
-(id)bodyString;
-(void)_updateForCurrentSizeCategory;
-(BOOL)shouldCustomizeNavigationBar;
-(long long)bodyTextAlignment;
-(id)bottomAnchoredButtons;
-(void)updateBodyTextAttributesWithMutableString:(id)arg1 ;
-(void)buttonAtIndexTapped:(long long)arg1 ;
-(id)titleString;
-(id)headerView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UIActivityIndicatorView *)loadingIndicator;
-(void)viewDidLayoutSubviews;
-(id)linkButtonTitle;
-(void)linkButtonTapped:(id)arg1 ;
-(id)_createHeaderView;
-(void)titledBuddyHeaderViewDidTapLinkButton:(id)arg1 ;
-(id)subsequentViews;
-(void)_createAnchoredButtons;
-(BOOL)shouldHideNavigationBar;
-(void)_anchoredButtonTapped:(id)arg1 ;
-(void)reloadViews;
@end

