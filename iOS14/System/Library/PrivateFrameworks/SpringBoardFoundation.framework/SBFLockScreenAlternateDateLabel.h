/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SBUILegibility.h>

@class UIFont, _UILegibilitySettings, NSDate, SBUILegibilityLabel, NSString;

@interface SBFLockScreenAlternateDateLabel : UIView <SBUILegibility> {

	UIFont* _font;
	_UILegibilitySettings* _legibilitySettings;
	double _strength;
	NSDate* _date;
	SBUILegibilityLabel* _label;

}

@property (nonatomic,retain) SBUILegibilityLabel * label;                             //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NSDate * date;                                           //@synthesize date=_date - In the implementation block
@property (nonatomic,retain) UIFont * font;                                           //@synthesize font=_font - In the implementation block
@property (nonatomic,readonly) UIEdgeInsets characterOverflowInsets; 
@property (assign,nonatomic) double strength;                                         //@synthesize strength=_strength - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)showAlternateDate;
+(id)_lunarCalendarIdentifier;
-(double)strength;
-(void)setStrength:(double)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(id)_alternateDateString;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(id)initWithSettings:(id)arg1 strength:(double)arg2 font:(id)arg3 ;
-(void)setDate:(NSDate *)arg1 ;
-(UIEdgeInsets)characterOverflowInsets;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLabel:(SBUILegibilityLabel *)arg1 ;
-(NSDate *)date;
-(SBUILegibilityLabel *)label;
-(UIFont *)font;
@end

