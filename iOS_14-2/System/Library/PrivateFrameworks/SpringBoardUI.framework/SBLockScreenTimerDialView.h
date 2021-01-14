/*
* Generated on Thursday, January 14, 2021 at 2:25:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUI.framework/SpringBoardUI
*/

#import <SpringBoardUI/SpringBoardUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBUILegibility.h>

@class _UILegibilitySettings, SBUILegibilityView, UIFont, NSString;

@interface SBLockScreenTimerDialView : UIView <SBUILegibility> {

	double _strength;
	_UILegibilitySettings* _legibilitySettings;
	SBUILegibilityView* _dialView;
	UIFont* _font;

}

@property (nonatomic,retain) UIFont * font;                                           //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) double strength;                                         //@synthesize strength=_strength - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(double)strength;
-(void)setStrength:(double)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(UIFont *)font;
-(id)_newDialViewConfiguredForSettingsAndFont;
-(id)initWithSymbolFont:(id)arg1 ;
@end

