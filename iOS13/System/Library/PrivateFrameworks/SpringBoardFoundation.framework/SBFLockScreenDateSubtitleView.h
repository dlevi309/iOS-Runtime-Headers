/*
* Generated on Monday, March 1, 2021 at 2:32:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <UIKitCore/UIView.h>

@class SBUILegibilityLabel, UIView, _UILegibilitySettings, UIFont, NSString;

@interface SBFLockScreenDateSubtitleView : UIView {

	SBUILegibilityLabel* _label;
	UIView* _accessoryView;
	_UILegibilitySettings* _legibilitySettings;
	double _strength;

}

@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (assign,nonatomic) double strength;                                         //@synthesize strength=_strength - In the implementation block
@property (nonatomic,retain) UIFont * font; 
@property (nonatomic,readonly) double baselineOffsetFromOrigin; 
@property (nonatomic,readonly) double baselineOffsetFromBottom; 
@property (nonatomic,retain) NSString * string; 
@property (nonatomic,retain) UIView * accessoryView;                                  //@synthesize accessoryView=_accessoryView - In the implementation block
+(id)labelFont;
+(double)scaledFontSize:(double)arg1 withMaximumFontSizeCategory:(id)arg2 ;
+(SCD_Struct_SB20)labelFontMetrics;
-(id)init;
-(NSString *)string;
-(void)dealloc;
-(void)setString:(NSString *)arg1 ;
-(double)baselineOffsetFromBottom;
-(void)setFont:(UIFont *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIFont *)font;
-(void)setAccessoryView:(UIView *)arg1 ;
-(UIView *)accessoryView;
-(double)interItemSpacing;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)setStrength:(double)arg1 ;
-(double)strength;
-(void)_updateForCurrentSizeCategory;
-(id)initWithString:(id)arg1 accessoryView:(id)arg2 ;
-(CGRect)subtitleLabelFrame;
-(double)baselineOffsetFromOrigin;
-(CGRect)accessoryViewFrame;
@end

