/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RTTUI.framework/RTTUI
*/

#import <RTTUI/RTTUI-Structs.h>
#import <UIKitCore/UIControl.h>

@class NSDictionary, UILabel, UIView, NSString;

@interface RTTUIAbbreviationView : UIControl {

	BOOL _drawLeftBorder;
	NSDictionary* _abbreviationData;
	UILabel* _abbreviation;
	UILabel* _hint;
	UIView* _leftBorderView;
	UIView* _highlightView;

}

@property (nonatomic,retain) UILabel * abbreviation;                       //@synthesize abbreviation=_abbreviation - In the implementation block
@property (nonatomic,retain) UILabel * hint;                               //@synthesize hint=_hint - In the implementation block
@property (nonatomic,retain) UIView * leftBorderView;                      //@synthesize leftBorderView=_leftBorderView - In the implementation block
@property (nonatomic,retain) UIView * highlightView;                       //@synthesize highlightView=_highlightView - In the implementation block
@property (nonatomic,retain) NSDictionary * abbreviationData;              //@synthesize abbreviationData=_abbreviationData - In the implementation block
@property (nonatomic,readonly) NSString * abbreviationText; 
@property (assign,nonatomic) BOOL drawLeftBorder;                          //@synthesize drawLeftBorder=_drawLeftBorder - In the implementation block
+(void)warningSquelcher;
-(BOOL)canBecomeFocused;
-(UILabel *)abbreviation;
-(id)accessibilityLabel;
-(UILabel *)hint;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setHighlightView:(UIView *)arg1 ;
-(UIView *)highlightView;
-(BOOL)isAccessibilityElement;
-(void)setHint:(UILabel *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)accessibilityIdentifier;
-(void)setHighlighted:(BOOL)arg1 ;
-(NSDictionary *)abbreviationData;
-(void)setAbbreviationData:(NSDictionary *)arg1 ;
-(void)setAbbreviation:(UILabel *)arg1 ;
-(void)setDrawLeftBorder:(BOOL)arg1 ;
-(NSString *)abbreviationText;
-(void)setLeftBorderView:(UIView *)arg1 ;
-(UIView *)leftBorderView;
-(BOOL)drawLeftBorder;
@end

