/*
* Generated on Monday, March 1, 2021 at 2:34:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(unsigned long long)supportedInterfaceOrientations;
-(void)viewDidLayoutSubviews;
-(id)headerView;
-(id)titleString;
-(NSArray *)buttons;
-(id)titleImage;
-(void)_updateForCurrentSizeCategory;
-(UIActivityIndicatorView *)loadingIndicator;
-(id)bodyString;
-(long long)bodyTextAlignment;
-(void)reloadViews;
-(BOOL)shouldCustomizeNavigationBar;
-(void)updateBodyTextAttributesWithMutableString:(id)arg1 ;
-(id)bottomAnchoredButtons;
-(void)buttonAtIndexTapped:(long long)arg1 ;
-(id)_createHeaderView;
-(id)subsequentViews;
-(void)_createAnchoredButtons;
-(BOOL)shouldHideNavigationBar;
-(id)linkButtonTitle;
-(void)linkButtonTapped:(id)arg1 ;
-(void)_anchoredButtonTapped:(id)arg1 ;
-(void)titledBuddyHeaderViewDidTapLinkButton:(id)arg1 ;
@end

