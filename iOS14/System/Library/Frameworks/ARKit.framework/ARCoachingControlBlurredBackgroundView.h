/*
* Generated on Thursday, January 14, 2021 at 2:26:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARKit-Structs.h>
#import <UIKitCore/UIVisualEffectView.h>

@interface ARCoachingControlBlurredBackgroundView : UIVisualEffectView {

	BOOL _highlighted;
	BOOL _selected;
	BOOL _enabled;
	long long _controlStyle;
	long long _backgroundStyle;

}

@property (assign,nonatomic) long long backgroundStyle;                          //@synthesize backgroundStyle=_backgroundStyle - In the implementation block
@property (assign,nonatomic) long long controlStyle;                             //@synthesize controlStyle=_controlStyle - In the implementation block
@property (assign,getter=isHighlighted,nonatomic) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                    //@synthesize selected=_selected - In the implementation block
@property (assign,getter=isEnabled,nonatomic) BOOL enabled;                      //@synthesize enabled=_enabled - In the implementation block
+(id)selectedEffectsForARDarkStyle;
+(id)normalEffectsForARDarkStyle;
+(id)selectedEffectsForDarkModeStyle;
+(id)normalEffectsForDarkModeStyle;
+(id)selectedEffects;
+(id)disabledSelectedEffects;
+(id)disabledEffectsForStudioStyle;
+(id)disabledEffectsForARStyle;
+(id)highlightedEffectsForStudioStyle;
+(id)highlightedEffectsForARStyle;
+(id)normalEffectsForStudioStyle;
+(id)normalEffectsForARStyle;
-(long long)backgroundStyle;
-(void)setEnabled:(BOOL)arg1 ;
-(BOOL)isSelected;
-(void)setSelected:(BOOL)arg1 ;
-(void)setControlStyle:(long long)arg1 ;
-(long long)controlStyle;
-(void)setBackgroundStyle:(long long)arg1 ;
-(BOOL)isHighlighted;
-(BOOL)isEnabled;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)updateBackgroundEffects;
-(id)initWithFrame:(CGRect)arg1 backgroundStyle:(long long)arg2 controlStyle:(long long)arg3 ;
@end

