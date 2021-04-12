/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(double)strength;
-(double)interItemSpacing;
-(void)setStrength:(double)arg1 ;
-(id)init;
-(void)setFont:(UIFont *)arg1 ;
-(double)baselineOffsetFromBottom;
-(UIView *)accessoryView;
-(CGRect)accessoryViewFrame;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(void)setAccessoryView:(UIView *)arg1 ;
-(id)initWithString:(id)arg1 accessoryView:(id)arg2 ;
-(double)baselineOffsetFromOrigin;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)_updateForCurrentSizeCategory;
-(NSString *)string;
-(void)setString:(NSString *)arg1 ;
-(CGRect)subtitleLabelFrame;
-(void)dealloc;
-(UIFont *)font;
@end

