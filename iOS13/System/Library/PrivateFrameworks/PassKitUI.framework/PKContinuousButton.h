/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIImage, NSMutableSet, UIColor, CAFilter, CAShapeLayer, _UIBackdropView, UIActivityIndicatorView;

@interface PKContinuousButton : UIButton {

	SCD_Struct_PK30 _configuration;
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
-(id)init;
-(void)dealloc;
-(void)setEnabled:(BOOL)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithConfiguration:(SCD_Struct_PK30)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)tintColorDidChange;
-(BOOL)_shouldAnimatePropertyWithKey:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)_accessibilitySettingsDidChange:(id)arg1 ;
-(void)updateWithImage:(id)arg1 ;
-(void)_updateFilter;
-(void)updateImageView;
-(BOOL)showSpinner;
-(void)setShowSpinner:(BOOL)arg1 ;
-(void)_updateColor;
-(void)setBlurDisabled:(BOOL)arg1 ;
-(void)_createHighlightFilterIfNecessary;
-(void)pk_applyAppearance:(id)arg1 ;
-(id)pk_childrenForAppearance;
-(void)updateTitleColorWithColor:(id)arg1 ;
-(void)updateActivityIndicatorColorWithColor:(id)arg1 ;
-(void)setImageEnabled:(BOOL)arg1 forState:(unsigned long long)arg2 ;
-(id)initWithCornerRadius:(double)arg1 effect:(long long)arg2 ;
-(void)_updateTitleColor;
-(void)_updateBackdropSettings;
-(BOOL)blurDisabled;
@end

