/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, _TVStackBackdropView, _TVStackBackdropMaskingView, UICollectionView, NSArray, UIImage;

@interface _TVStackWrappingView : UIView {

	UIImageView* _backgroundImageView;
	_TVStackBackdropView* _backdropView;
	_TVStackBackdropMaskingView* _maskedBackdropView;
	BOOL _shouldAdjustForTabBarSafeAreaInsets;
	BOOL _usesBackgroundImage;
	BOOL _usesBackdropImage;
	UICollectionView* _stackView;
	NSArray* _headerSupplementaryViews;
	UIImage* _backgroundImage;
	UIImage* _backdropImage;
	long long _backdropBlurEffectStyle;
	double _backdropInitialPeek;
	double _backdropPeekGradient;
	double _backdropMaskFactor;
	NSArray* _supplementaryCellLayoutAttributes;

}

@property (nonatomic,retain) UICollectionView * stackView;                                    //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,copy) NSArray * headerSupplementaryViews;                                //@synthesize headerSupplementaryViews=_headerSupplementaryViews - In the implementation block
@property (assign,nonatomic) BOOL shouldAdjustForTabBarSafeAreaInsets;                        //@synthesize shouldAdjustForTabBarSafeAreaInsets=_shouldAdjustForTabBarSafeAreaInsets - In the implementation block
@property (nonatomic,retain) UIImage * backgroundImage;                                       //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (assign,nonatomic) BOOL usesBackgroundImage;                                        //@synthesize usesBackgroundImage=_usesBackgroundImage - In the implementation block
@property (nonatomic,retain) UIImage * backdropImage;                                         //@synthesize backdropImage=_backdropImage - In the implementation block
@property (assign,nonatomic) BOOL usesBackdropImage;                                          //@synthesize usesBackdropImage=_usesBackdropImage - In the implementation block
@property (assign,nonatomic) long long backdropBlurEffectStyle;                               //@synthesize backdropBlurEffectStyle=_backdropBlurEffectStyle - In the implementation block
@property (assign,nonatomic) double backdropInitialPeek;                                      //@synthesize backdropInitialPeek=_backdropInitialPeek - In the implementation block
@property (assign,nonatomic) double backdropPeekGradient;                                     //@synthesize backdropPeekGradient=_backdropPeekGradient - In the implementation block
@property (assign,nonatomic) double backdropMaskFactor;                                       //@synthesize backdropMaskFactor=_backdropMaskFactor - In the implementation block
@property (nonatomic,copy,readonly) NSArray * supplementaryCellLayoutAttributes;              //@synthesize supplementaryCellLayoutAttributes=_supplementaryCellLayoutAttributes - In the implementation block
-(UIImage *)backgroundImage;
-(void)setBackgroundImage:(UIImage *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)preferredFocusEnvironments;
-(void)layoutSubviews;
-(UICollectionView *)stackView;
-(void)setStackView:(UICollectionView *)arg1 ;
-(NSArray *)supplementaryCellLayoutAttributes;
-(void)setBackdropBlurEffectStyle:(long long)arg1 ;
-(void)setBackdropInitialPeek:(double)arg1 ;
-(void)setBackdropPeekGradient:(double)arg1 ;
-(double)backdropInitialPeek;
-(void)setBackdropMaskFactor:(double)arg1 ;
-(void)setUsesBackgroundImage:(BOOL)arg1 ;
-(void)setBackdropImage:(UIImage *)arg1 ;
-(void)setUsesBackdropImage:(BOOL)arg1 ;
-(void)setHeaderSupplementaryViews:(NSArray *)arg1 ;
-(void)configureSupplementaryCellLayoutAttributesWithAutomaticInsets:(UIEdgeInsets)arg1 sectionIndex:(long long)arg2 ;
-(long long)backdropBlurEffectStyle;
-(double)backdropPeekGradient;
-(double)backdropMaskFactor;
-(BOOL)usesBackgroundImage;
-(BOOL)usesBackdropImage;
-(UIImage *)backdropImage;
-(NSArray *)headerSupplementaryViews;
-(BOOL)shouldAdjustForTabBarSafeAreaInsets;
-(void)setShouldAdjustForTabBarSafeAreaInsets:(BOOL)arg1 ;
@end

