/*
* Generated on Thursday, January 14, 2021 at 2:27:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CameraEditKit.framework/CameraEditKit
*/

#import <CameraEditKit/CameraEditKit-Structs.h>
#import <UIKitCore/UIButton.h>
#import <libobjc.A.dylib/CAMAccessibilityHUDImageProvider.h>

@protocol CEKApertureButtonDelegate;
@class UIImageView, UILabel, NSNumberFormatter, NSString;

@interface CEKApertureButton : UIButton <CAMAccessibilityHUDImageProvider> {

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

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
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
-(id)imageForAccessibilityHUD;
-(void)_updateBackgroundView;
-(void)setTappableEdgeInsets:(UIEdgeInsets)arg1 ;
-(CGSize)intrinsicContentSize;
-(UIEdgeInsets)tappableEdgeInsets;
-(void)setActive:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setOrientation:(long long)arg1 animated:(BOOL)arg2 ;
-(id<CEKApertureButtonDelegate>)delegate;
-(UIEdgeInsets)alignmentRectInsets;
-(void)setWantsBackground:(BOOL)arg1 ;
-(BOOL)isActive;
-(BOOL)wantsBackground;
-(double)apertureValue;
-(void)setApertureValue:(double)arg1 ;
-(void)setExpansionDirection:(long long)arg1 ;
-(void)setShouldShowApertureValue:(BOOL)arg1 animated:(BOOL)arg2 ;
-(NSNumberFormatter *)_decimalFormatter;
-(void)setDelegate:(id<CEKApertureButtonDelegate>)arg1 ;
-(UIImageView *)_circleBackgroundView;
-(void)layoutSubviews;
-(long long)orientation;
-(void)set_circleBackgroundView:(UIImageView *)arg1 ;
-(void)setActive:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UILabel *)_valueLabel;
-(void)setOrientation:(long long)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_updateValueLabel;
-(void)_updateColorsAnimated:(BOOL)arg1 ;
-(UIEdgeInsets)_expansionInsets;
-(id)_circleImageWithColor:(id)arg1 ;
-(BOOL)shouldShowApertureValue;
-(void)_updateSymbolLabelOrientationAnimated:(BOOL)arg1 ;
-(NSNumberFormatter *)_wholeNumberFormatter;
-(double)_cachedValueLabelWidth;
-(void)_setCachedValueLabelWidth:(double)arg1 ;
-(UIImageView *)_circleOutlineView;
-(UILabel *)_symbolLabel;
-(double)_cachedSymbolLabelWidth;
-(double)_cachedSpaceWidth;
-(long long)expansionDirection;
-(void)_setCenterAndBoundsForView:(id)arg1 frame:(CGRect)arg2 ;
-(BOOL)_isRightToLeftFormatting;
-(void)_setLayer:(id)arg1 highlighted:(BOOL)arg2 animated:(BOOL)arg3 ;
-(void)_rotateView:(id)arg1 withInterfaceOrientation:(long long)arg2 animated:(BOOL)arg3 ;
-(void)setShouldShowApertureValue:(BOOL)arg1 ;
@end

