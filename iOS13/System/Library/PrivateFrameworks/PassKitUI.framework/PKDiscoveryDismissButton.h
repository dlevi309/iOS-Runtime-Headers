/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(long long)style;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(id)initWithStyle:(long long)arg1 ;
-(id)_tintColor;
-(void)_dynamicUserInterfaceTraitDidChange;
-(id)_backingEffect;
-(void)_updateStyleWithStyle:(long long)arg1 ;
-(void)updateStyleWithStyle:(long long)arg1 animated:(BOOL)arg2 ;
@end

