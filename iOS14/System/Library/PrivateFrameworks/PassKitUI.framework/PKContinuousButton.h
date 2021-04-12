/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIImage, NSMutableSet, UIColor, CAFilter, CAShapeLayer, _UIBackdropView, UIActivityIndicatorView;

@interface PKContinuousButton : UIButton {

	SCD_Struct_PK34 _configuration;
	UIImage* _image;
	NSMutableSet* _disabledImageStates;
	UIColor* _overrideTitleColor;
	CAFilter* _highlightFilter;
	UIColor* _normalInputColor;
	UIColor* _highlightInputColor;
	UIColor* _selectedInputColor;
	UIColor* _disabledInputColor;
	UIColor* _appliedInputColor;
	CAShapeLayer* _layer;
	_UIBackdropView* _backdropView;
	long long _backdropStyle;
	BOOL _updatingBackdropSettings;
	BOOL _highlighted;
	BOOL _selected;
	BOOL _enabled;
	CGSize _boundsSize;
	UIActivityIndicatorView* _activityIndicatorView;
	UIColor* _activityIndicatorColor;
	BOOL _showSpinner;
	BOOL _blurDisabled;

}

@property (assign,nonatomic) BOOL showSpinner;               //@synthesize showSpinner=_showSpinner - In the implementation block
@property (assign,nonatomic) BOOL blurDisabled;              //@synthesize blurDisabled=_blurDisabled - In the implementation block
+(Class)layerClass;
+(id)_filterInputColorForEffect:(long long)arg1 ;
-(void)tintColorDidChange;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(id)init;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)updateWithImage:(id)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithCornerRadius:(double)arg1 effect:(long long)arg2 ;
-(void)_updateFilter;
-(void)setSelected:(BOOL)arg1 ;
-(void)updateActivityIndicatorColorWithColor:(id)arg1 ;
-(id)initWithConfiguration:(SCD_Struct_PK34)arg1 ;
-(void)layoutSubviews;
-(void)setShowSpinner:(BOOL)arg1 ;
-(void)updateImageView;
-(id)initWithCoder:(id)arg1 ;
-(void)pk_applyAppearance:(id)arg1 ;
-(id)pk_childrenForAppearance;
-(void)_accessibilitySettingsDidChange:(id)arg1 ;
-(void)updateTitleColorWithColor:(id)arg1 ;
-(void)setImageEnabled:(BOOL)arg1 forState:(unsigned long long)arg2 ;
-(BOOL)showSpinner;
-(void)_updateColor;
-(void)_updateTitleColor;
-(void)_updateBackdropSettings;
-(void)_createHighlightFilterIfNecessary;
-(BOOL)blurDisabled;
-(void)dealloc;
-(void)setBlurDisabled:(BOOL)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

