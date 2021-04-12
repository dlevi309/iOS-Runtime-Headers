/*
* Generated on Monday, March 1, 2021 at 2:35:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RTTUI.framework/RTTUI
*/

#import <RTTUI/RTTUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class UIVisualEffectView, UILabel;

@interface RTTUIAbbreviationCell : UICollectionViewCell {

	UIVisualEffectView* _abbreviationContainer;
	UIVisualEffectView* _hintContainer;
	UILabel* _abbreviation;
	UILabel* _hint;

}

@property (nonatomic,retain) UILabel * abbreviation;              //@synthesize abbreviation=_abbreviation - In the implementation block
@property (nonatomic,retain) UILabel * hint;                      //@synthesize hint=_hint - In the implementation block
-(void)dealloc;
-(UILabel *)abbreviation;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)accessibilityLabel;
-(BOOL)isAccessibilityElement;
-(id)accessibilityIdentifier;
-(BOOL)accessibilityIgnoresInvertColors;
-(void)layoutSubviews;
-(UILabel *)hint;
-(void)setHint:(UILabel *)arg1 ;
-(void)setAbbreviationData:(id)arg1 ;
-(void)setAbbreviation:(UILabel *)arg1 ;
-(id)abbreviationText;
@end

