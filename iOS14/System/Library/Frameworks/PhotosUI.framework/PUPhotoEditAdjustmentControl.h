/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class UIColor, UILabel, UIImageView, PUPhotoEditCircularIndicatorView, NSMapTable, NSNumberFormatter;

@interface PUPhotoEditAdjustmentControl : UIControl {

	BOOL _shouldShowValueLabel;
	BOOL _displayMappedValue;
	BOOL _shouldShowCircularRing;
	BOOL _shouldScaleDownImage;
	BOOL _valueChanged;
	double _value;
	double _defaultValue;
	double _identityValue;
	double _minValue;
	double _maxValue;
	UIColor* _defaultColor;
	UIColor* _alternateColor;
	UILabel* _valueLabel;
	UIImageView* _imageView;
	PUPhotoEditCircularIndicatorView* _circularIndicatorView;
	NSMapTable* _stateToContentMap;
	NSNumberFormatter* _formatter;

}

@property (nonatomic,retain) UILabel * valueLabel;                                                  //@synthesize valueLabel=_valueLabel - In the implementation block
@property (nonatomic,retain) UIImageView * imageView;                                               //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) PUPhotoEditCircularIndicatorView * circularIndicatorView;              //@synthesize circularIndicatorView=_circularIndicatorView - In the implementation block
@property (nonatomic,retain) NSMapTable * stateToContentMap;                                        //@synthesize stateToContentMap=_stateToContentMap - In the implementation block
@property (nonatomic,retain) UIColor * defaultColor;                                                //@synthesize defaultColor=_defaultColor - In the implementation block
@property (nonatomic,retain) UIColor * alternateColor;                                              //@synthesize alternateColor=_alternateColor - In the implementation block
@property (assign,nonatomic) BOOL valueChanged;                                                     //@synthesize valueChanged=_valueChanged - In the implementation block
@property (nonatomic,retain) NSNumberFormatter * formatter;                                         //@synthesize formatter=_formatter - In the implementation block
@property (assign,nonatomic) double value;                                                          //@synthesize value=_value - In the implementation block
@property (assign,nonatomic) double defaultValue;                                                   //@synthesize defaultValue=_defaultValue - In the implementation block
@property (assign,nonatomic) double identityValue;                                                  //@synthesize identityValue=_identityValue - In the implementation block
@property (assign,nonatomic) double minValue;                                                       //@synthesize minValue=_minValue - In the implementation block
@property (assign,nonatomic) double maxValue;                                                       //@synthesize maxValue=_maxValue - In the implementation block
@property (assign,nonatomic) BOOL shouldShowValueLabel;                                             //@synthesize shouldShowValueLabel=_shouldShowValueLabel - In the implementation block
@property (assign,nonatomic) BOOL displayMappedValue;                                               //@synthesize displayMappedValue=_displayMappedValue - In the implementation block
@property (assign,nonatomic) BOOL shouldShowCircularRing;                                           //@synthesize shouldShowCircularRing=_shouldShowCircularRing - In the implementation block
@property (assign,nonatomic) BOOL shouldScaleDownImage;                                             //@synthesize shouldScaleDownImage=_shouldScaleDownImage - In the implementation block
-(void)resetToDefaults;
-(void)setImageView:(UIImageView *)arg1 ;
-(void)setMaxValue:(double)arg1 ;
-(void)setDefaultValue:(double)arg1 ;
-(void)_setup;
-(NSNumberFormatter *)formatter;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImageView *)imageView;
-(double)defaultValue;
-(BOOL)valueChanged;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setIdentityValue:(double)arg1 ;
-(void)setDisplayMappedValue:(BOOL)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)setImage:(id)arg1 forState:(unsigned long long)arg2 ;
-(void)setFormatter:(NSNumberFormatter *)arg1 ;
-(UIColor *)defaultColor;
-(void)setValue:(double)arg1 ;
-(BOOL)displayMappedValue;
-(void)setShouldShowValueLabel:(BOOL)arg1 ;
-(void)setShouldScaleDownImage:(BOOL)arg1 ;
-(void)setShouldShowCircularRing:(BOOL)arg1 ;
-(void)_resetAllValues;
-(BOOL)_setContentPropertyKey:(id)arg1 withValue:(id)arg2 forState:(unsigned long long)arg3 ;
-(void)setColor:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)colorForState:(unsigned long long)arg1 ;
-(void)setDefaultColor:(UIColor *)arg1 ;
-(void)_updateRingVisibility;
-(void)_updateSubviewVisibility;
-(void)_updateSubviewColors;
-(void)_updateFormatter;
-(void)_updateSubviewValues;
-(BOOL)shouldShowValueLabel;
-(BOOL)shouldShowCircularRing;
-(UIColor *)alternateColor;
-(void)setAlternateColor:(UIColor *)arg1 ;
-(BOOL)shouldScaleDownImage;
-(PUPhotoEditCircularIndicatorView *)circularIndicatorView;
-(void)setCircularIndicatorView:(PUPhotoEditCircularIndicatorView *)arg1 ;
-(NSMapTable *)stateToContentMap;
-(void)setStateToContentMap:(NSMapTable *)arg1 ;
-(void)setValueChanged:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)setMinValue:(double)arg1 ;
-(double)identityValue;
-(void)_layoutImageView;
-(UILabel *)valueLabel;
-(void)_updateSubviews;
-(void)_setContent:(id)arg1 forState:(unsigned long long)arg2 ;
-(id)imageForState:(unsigned long long)arg1 ;
-(id)_currentImage;
-(void)_updateImageView;
-(id)_contentForState:(unsigned long long)arg1 ;
-(double)maxValue;
-(void)setValueLabel:(UILabel *)arg1 ;
-(double)minValue;
-(void)_setupImageView;
-(double)value;
@end

