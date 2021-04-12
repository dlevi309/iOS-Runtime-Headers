/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
*/

#import <CameraEditKit/CameraEditKit-Structs.h>
#import <UIKitCore/UIButton.h>

@protocol CEKApertureButtonDelegate;
@class UIImageView, UILabel, NSNumberFormatter;

@interface CEKApertureButton : UIButton {

	BOOL _shouldShowApertureValue;
	BOOL _wantsBackground;
	BOOL __rightToLeftFormatting;
	id<CEKApertureButtonDelegate> _delegate;
	double _apertureValue;
	long long _expansionDirection;
	long long _orientation;
	UIImageView* __circleOutlineView;
	UILabel* __symbolLabel;
	UILabel* __valueLabel;
	UIImageView* __circleBackgroundView;
	NSNumberFormatter* __decimalFormatter;
	NSNumberFormatter* __wholeNumberFormatter;
	double __cachedSpaceWidth;
	double __cachedSymbolLabelWidth;
	double __cachedValueLabelWidth;
	UIEdgeInsets _tappableEdgeInsets;

}

@property (nonatomic,readonly) UIImageView * _circleOutlineView;                                           //@synthesize _circleOutlineView=__circleOutlineView - In the implementation block
@property (nonatomic,readonly) UILabel * _symbolLabel;                                                     //@synthesize _symbolLabel=__symbolLabel - In the implementation block
@property (nonatomic,readonly) UILabel * _valueLabel;                                                      //@synthesize _valueLabel=__valueLabel - In the implementation block
@property (nonatomic,retain) UIImageView * _circleBackgroundView;                                          //@synthesize _circleBackgroundView=__circleBackgroundView - In the implementation block
@property (nonatomic,readonly) NSNumberFormatter * _decimalFormatter;                                      //@synthesize _decimalFormatter=__decimalFormatter - In the implementation block
@property (nonatomic,readonly) NSNumberFormatter * _wholeNumberFormatter;                                  //@synthesize _wholeNumberFormatter=__wholeNumberFormatter - In the implementation block
@property (getter=_isRightToLeftFormatting,nonatomic,readonly) BOOL _rightToLeftFormatting;                //@synthesize _rightToLeftFormatting=__rightToLeftFormatting - In the implementation block
@property (nonatomic,readonly) double _cachedSpaceWidth;                                                   //@synthesize _cachedSpaceWidth=__cachedSpaceWidth - In the implementation block
@property (nonatomic,readonly) double _cachedSymbolLabelWidth;                                             //@synthesize _cachedSymbolLabelWidth=__cachedSymbolLabelWidth - In the implementation block
@property (assign,setter=_setCachedValueLabelWidth:,nonatomic) double _cachedValueLabelWidth;              //@synthesize _cachedValueLabelWidth=__cachedValueLabelWidth - In the implementation block
@property (assign,nonatomic,__weak) id<CEKApertureButtonDelegate> delegate;                                //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) double apertureValue;                                                         //@synthesize apertureValue=_apertureValue - In the implementation block
@property (assign,nonatomic) BOOL shouldShowApertureValue;                                                 //@synthesize shouldShowApertureValue=_shouldShowApertureValue - In the implementation block
@property (assign,nonatomic) long long expansionDirection;                                                 //@synthesize expansionDirection=_expansionDirection - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active; 
@property (assign,nonatomic) BOOL wantsBackground;                                                         //@synthesize wantsBackground=_wantsBackground - In the implementation block
@property (assign,nonatomic) UIEdgeInsets tappableEdgeInsets;                                              //@synthesize tappableEdgeInsets=_tappableEdgeInsets - In the implementation block
@property (assign,nonatomic) long long orientation;                                                        //@synthesize orientation=_orientation - In the implementation block
-(id<CEKApertureButtonDelegate>)delegate;
-(void)setDelegate:(id<CEKApertureButtonDelegate>)arg1 ;
-(BOOL)isActive;
-(void)setActive:(BOOL)arg1 ;
-(long long)orientation;
-(void)setOrientation:(long long)arg1 ;
-(NSNumberFormatter *)_decimalFormatter;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIEdgeInsets)alignmentRectInsets;
-(void)_updateBackgroundView;
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(void)setActive:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UILabel *)_valueLabel;
-(UILabel *)_symbolLabel;
-(double)apertureValue;
-(void)setApertureValue:(double)arg1 ;
-(void)_updateColorsAnimated:(BOOL)arg1 ;
-(void)_updateValueLabel;
-(id)_circleImageWithColor:(id)arg1 ;
-(BOOL)shouldShowApertureValue;
-(void)setShouldShowApertureValue:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_updateSymbolLabelOrientationAnimated:(BOOL)arg1 ;
-(NSNumberFormatter *)_wholeNumberFormatter;
-(double)_cachedValueLabelWidth;
-(void)_setCachedValueLabelWidth:(double)arg1 ;
-(UIImageView *)_circleOutlineView;
-(UIImageView *)_circleBackgroundView;
-(BOOL)wantsBackground;
-(void)set_circleBackgroundView:(UIImageView *)arg1 ;
-(double)_cachedSymbolLabelWidth;
-(double)_cachedSpaceWidth;
-(long long)expansionDirection;
-(UIEdgeInsets)tappableEdgeInsets;
-(UIEdgeInsets)_expansionInsets;
-(void)_setCenterAndBoundsForView:(id)arg1 frame:(CGRect)arg2 ;
-(BOOL)_isRightToLeftFormatting;
-(void)_setLayer:(id)arg1 highlighted:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)_rotateView:(id)arg1 withInterfaceOrientation:(long long)arg2 animated:(BOOL)arg3 ;
-(void)setShouldShowApertureValue:(BOOL)arg1 ;
-(void)setExpansionDirection:(long long)arg1 ;
-(void)setWantsBackground:(BOOL)arg1 ;
-(void)setTappableEdgeInsets:(UIEdgeInsets)arg1 ;
@end

