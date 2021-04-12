/*
* Generated on Thursday, January 14, 2021 at 2:28:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RTTUI.framework/RTTUI
*/

#import <RTTUI/RTTUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIView, UIVisualEffectView, UILabel;

@interface RTTUIAbbreviationCell : UICollectionViewCell {

	UIView* _abbreviationContainer;
	UIVisualEffectView* _hintContainer;
	UILabel* _abbreviation;
	UILabel* _hint;

}

@property (nonatomic,retain) UILabel * abbreviation;              //@synthesize abbreviation=_abbreviation - In the implementation block
@property (nonatomic,retain) UILabel * hint;                      //@synthesize hint=_hint - In the implementation block
-(UILabel *)abbreviation;
-(id)accessibilityLabel;
-(UILabel *)hint;
-(id)initWithFrame:(CGRect)arg1 ;
-(BOOL)isAccessibilityElement;
-(BOOL)accessibilityIgnoresInvertColors;
-(void)layoutSubviews;
-(void)setHint:(UILabel *)arg1 ;
-(id)accessibilityIdentifier;
-(void)dealloc;
-(void)setAbbreviationData:(id)arg1 ;
-(void)setAbbreviation:(UILabel *)arg1 ;
-(id)abbreviationText;
@end

