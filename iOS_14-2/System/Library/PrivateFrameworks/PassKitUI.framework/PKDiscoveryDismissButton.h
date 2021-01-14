/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIVisualEffectView;

@interface PKDiscoveryDismissButton : UIButton {

	UIVisualEffectView* _blurView;
	long long _style;

}

@property (nonatomic,readonly) long long style;              //@synthesize style=_style - In the implementation block
+(long long)_blurEffectStyleForUserInterfaceStyle:(long long)arg1 ;
+(id)_tintColorForUserInterfaceStyle:(long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)init;
-(id)_tintColor;
-(id)initWithStyle:(long long)arg1 ;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)_backingEffect;
-(void)_updateStyleWithStyle:(long long)arg1 ;
-(void)updateStyleWithStyle:(long long)arg1 animated:(BOOL)arg2 ;
-(long long)style;
@end

