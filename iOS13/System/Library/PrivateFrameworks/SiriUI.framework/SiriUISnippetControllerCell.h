/*
* Generated on Monday, March 1, 2021 at 2:33:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriUI.framework/SiriUI
*/

#import <SiriUI/SiriUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <SiriUI/SiriUIReusableView.h>

@protocol SiriUIReusableView;
@class SiriUIKeyline, SiriUIContentButton, UIView, UILabel, UICollectionReusableView, SiriUISnippetViewController, NSString;

@interface SiriUISnippetControllerCell : UICollectionViewCell <SiriUIReusableView> {

	SiriUIKeyline* _bottomKeyline;
	SiriUIContentButton* _snippetPunchOutButton;
	UIView* _snippetBackgroundView;
	UIView* _materialView;
	UIView* _clippingContainerView;
	UIView* _cancelledTouchPreventionView;
	UILabel* _cancelledLabel;
	BOOL _cellIsUsingPlatterStyle;
	double _topPadding;
	UICollectionReusableView*<SiriUIReusableView> _headerView;
	UICollectionReusableView*<SiriUIReusableView> _footerView;
	UICollectionReusableView*<SiriUIReusableView> _transparentHeaderView;
	UICollectionReusableView*<SiriUIReusableView> _transparentFooterView;
	SiriUISnippetViewController* _snippetViewController;
	UIEdgeInsets _snippetEdgeInsets;

}

@property (assign,setter=_setSnippetEdgeInsets:,getter=_snippetEdgeInsets,nonatomic) UIEdgeInsets snippetEdgeInsets;              //@synthesize snippetEdgeInsets=_snippetEdgeInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,nonatomic,__weak) SiriUISnippetViewController * snippetViewController;                                          //@synthesize snippetViewController=_snippetViewController - In the implementation block
+(double)defaultHeight;
+(id)elementKind;
+(id)reuseIdentifier;
+(CGRect)contentBoundsForCollectionViewCellBounds:(CGRect)arg1 snippetViewController:(id)arg2 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)accessibilityIdentifier;
-(void)layoutSubviews;
-(void)_setHeaderView:(id)arg1 ;
-(void)setTopPadding:(double)arg1 ;
-(SiriUISnippetViewController *)snippetViewController;
-(void)setSnippetViewController:(SiriUISnippetViewController *)arg1 ;
-(void)setShowBackgroundView:(BOOL)arg1 ;
-(void)_snippetPunchOutButtonTapped:(id)arg1 ;
-(void)_configureSubviewsForCurrentInset;
-(double)_heightForFooterView;
-(double)_heightForTransparentHeaderView;
-(double)_heightForTransparentFooterView;
-(double)_heightForHeaderView;
-(UIEdgeInsets)_snippetEdgeInsets;
-(void)_setFooterView:(id)arg1 ;
-(void)_setTransparentHeaderView:(id)arg1 ;
-(void)_setTransparentFooterView:(id)arg1 ;
-(void)_setSnippetEdgeInsets:(UIEdgeInsets)arg1 ;
-(void)animateSnippetCancellationWithCompletion:(/*^block*/id)arg1 ;
-(void)animateSnippetConfirmationWithCompletion:(/*^block*/id)arg1 ;
-(void)animateSnippetResizeToSize:(CGSize)arg1 completion:(/*^block*/id)arg2 ;
@end

