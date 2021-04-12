/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>
#import <TVMLKit/TVRowHosting.h>

@class UIView, CAGradientLayer, _TVCollectionView, IKColor, NSString;

@interface _TVCollectionWrappingView : UIView <TVRowHosting> {

	CGRect _headerFrame;
	UIView* _selectingView;
	UIView* _headerView;
	double _showcaseFactor;
	CGRect _footerFrame;
	UIView* _footerView;
	CAGradientLayer* _gradientLayer;
	struct {
		BOOL respondsToAugmentedSelectionFrameForFrame;
	}  _collectionViewFlags;
	BOOL _centered;
	BOOL _headerCanBecomeFocused;
	BOOL _headerAuxiliarySelecting;
	BOOL _headerFloating;
	BOOL _headerHidden;
	BOOL _headerFocused;
	_TVCollectionView* _collectionView;
	double _headerSelectionMargin;
	long long _collectionGradientMask;
	IKColor* _ikBackgroundColor;
	TVShowcaseConfig _showcaseConfig;

}

@property (assign,getter=isHeaderFocused,nonatomic) BOOL headerFocused;                                    //@synthesize headerFocused=_headerFocused - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                                          //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) _TVCollectionView * collectionView;                                           //@synthesize collectionView=_collectionView - In the implementation block
@property (assign,getter=isCentered,nonatomic) BOOL centered;                                              //@synthesize centered=_centered - In the implementation block
@property (assign,nonatomic) BOOL headerCanBecomeFocused;                                                  //@synthesize headerCanBecomeFocused=_headerCanBecomeFocused - In the implementation block
@property (assign,nonatomic) double headerSelectionMargin;                                                 //@synthesize headerSelectionMargin=_headerSelectionMargin - In the implementation block
@property (assign,nonatomic) TVShowcaseConfig showcaseConfig;                                              //@synthesize showcaseConfig=_showcaseConfig - In the implementation block
@property (assign,getter=isHeaderAuxiliarySelecting,nonatomic) BOOL headerAuxiliarySelecting;              //@synthesize headerAuxiliarySelecting=_headerAuxiliarySelecting - In the implementation block
@property (assign,getter=isHeaderFloating,nonatomic) BOOL headerFloating;                                  //@synthesize headerFloating=_headerFloating - In the implementation block
@property (assign,getter=isHeaderHidden,nonatomic) BOOL headerHidden;                                      //@synthesize headerHidden=_headerHidden - In the implementation block
@property (assign,nonatomic) long long collectionGradientMask;                                             //@synthesize collectionGradientMask=_collectionGradientMask - In the implementation block
@property (nonatomic,retain) IKColor * ikBackgroundColor;                                                  //@synthesize ikBackgroundColor=_ikBackgroundColor - In the implementation block
@property (nonatomic,retain) UIView * footerView;                                                          //@synthesize footerView=_footerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) BOOL shouldBindRowsTogether; 
+(void)gradientConfigForCollection:(id)arg1 gradientMask:(long long)arg2 gradientLengths:(UIEdgeInsets*)arg3 gradientInset:(UIEdgeInsets*)arg4 gradientBoundsInset:(UIEdgeInsets*)arg5 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)didUpdateFocusInContext:(id)arg1 withAnimationCoordinator:(id)arg2 ;
-(id)preferredFocusEnvironments;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(_TVCollectionView *)collectionView;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(void)_updateSubviews;
-(void)setCollectionView:(_TVCollectionView *)arg1 ;
-(UIView *)footerView;
-(void)setFooterView:(UIView *)arg1 ;
-(BOOL)isCentered;
-(void)setCentered:(BOOL)arg1 ;
-(IKColor *)ikBackgroundColor;
-(void)_updateGradientLayer;
-(void)tv_setShowcaseFactor:(double)arg1 ;
-(void)setValue:(id)arg1 forTVViewStyle:(id)arg2 ;
-(id)rowMetricsForExpectedWidth:(double)arg1 firstItemRowIndex:(long long*)arg2 ;
-(id)showcaseRowMetricsForExpectedWidth:(double)arg1 ;
-(BOOL)shouldBindRowsTogether;
-(double)headerSelectionMargin;
-(void)setCollectionGradientMask:(long long)arg1 ;
-(void)setHeaderSelectionMargin:(double)arg1 ;
-(void)setHeaderHidden:(BOOL)arg1 ;
-(BOOL)isHeaderHidden;
-(TVShowcaseConfig)showcaseConfig;
-(void)setShowcaseConfig:(TVShowcaseConfig)arg1 ;
-(void)reevaluateHeaderFrame;
-(id)_currentFooterView;
-(id)_currentHeaderView;
-(CGRect)_adjustedHeaderFrame;
-(UIEdgeInsets)_adjustedPadding;
-(double)_adjustedShowcaseFactor;
-(double)_showcaseContentScaleForExpectedWidth:(double)arg1 ;
-(long long)collectionGradientMask;
-(BOOL)isHeaderFloating;
-(BOOL)headerCanBecomeFocused;
-(void)setHeaderFocused:(BOOL)arg1 ;
-(BOOL)isHeaderFocused;
-(id)_collectionRowMetricsForExpectedWidth:(double)arg1 firstItemRowIndex:(long long*)arg2 forShowcase:(BOOL)arg3 ;
-(BOOL)isHeaderAuxiliarySelecting;
-(void)setHeaderFloating:(BOOL)arg1 ;
-(void)reevaluateFooterFrame;
-(void)setIkBackgroundColor:(IKColor *)arg1 ;
-(void)setHeaderCanBecomeFocused:(BOOL)arg1 ;
-(void)setHeaderAuxiliarySelecting:(BOOL)arg1 ;
@end

