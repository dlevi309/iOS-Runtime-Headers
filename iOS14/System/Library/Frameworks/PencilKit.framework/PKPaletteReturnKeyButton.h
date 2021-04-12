/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

#import <PencilKit/PencilKit-Structs.h>
#import <PencilKit/PKPaletteButton.h>

@class PKPaletteReturnKeyButtonContentView;

@interface PKPaletteReturnKeyButton : PKPaletteButton {

	double _scalingFactor;
	long long _returnKeyType;
	long long _axis;
	PKPaletteReturnKeyButtonContentView* _contentView;

}

@property (nonatomic,retain) PKPaletteReturnKeyButtonContentView * contentView;              //@synthesize contentView=_contentView - In the implementation block
@property (assign,nonatomic) long long returnKeyType;                                        //@synthesize returnKeyType=_returnKeyType - In the implementation block
@property (assign,nonatomic) long long axis;                                                 //@synthesize axis=_axis - In the implementation block
-(void)setAxis:(long long)arg1 ;
-(id)_textColor;
-(long long)axis;
-(void)setReturnKeyType:(long long)arg1 ;
-(long long)returnKeyType;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)_updateLabelText;
-(void)setEnabled:(BOOL)arg1 ;
-(double)scalingFactor;
-(void)layoutSubviews;
-(void)setContentView:(PKPaletteReturnKeyButtonContentView *)arg1 ;
-(void)_updateUI;
-(BOOL)_useCompactLayout;
-(void)setScalingFactor:(double)arg1 ;
-(id)_backgroundColor;
-(void)_updateImageView;
-(CGSize)_contentViewSize;
-(PKPaletteReturnKeyButtonContentView *)contentView;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_updateContentViewOrientation;
-(id)_returnKeyImage;
-(id)_returnKeyTintColor;
-(id)_regularLayoutBackgroundColor;
-(BOOL)_shouldUseBlueReturnKeyColor;
-(id)_returnKeyLabelText;
-(id)_returnKeyImageSymbolConfiguration;
@end

