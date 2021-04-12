/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class UILabel, NSMutableDictionary, NSString, NSDictionary, UIColor, _UIBadgeVisualStyle;

@interface _UIBadgeView : UIView {

	UILabel* _label;
	NSMutableDictionary* _mergedTextAttributes;
	NSString* _text;
	NSDictionary* _textAttributes;
	UIColor* _badgeColor;
	_UIBadgeVisualStyle* _style;
	UIOffset _textOffset;

}

@property (nonatomic,copy) NSString * text;                            //@synthesize text=_text - In the implementation block
@property (nonatomic,copy) NSDictionary * textAttributes;              //@synthesize textAttributes=_textAttributes - In the implementation block
@property (nonatomic,copy) UIColor * badgeColor;                       //@synthesize badgeColor=_badgeColor - In the implementation block
@property (assign,nonatomic) UIOffset textOffset;                      //@synthesize textOffset=_textOffset - In the implementation block
@property (nonatomic,retain) _UIBadgeVisualStyle * style;              //@synthesize style=_style - In the implementation block
-(_UIBadgeVisualStyle *)style;
-(void)setStyle:(_UIBadgeVisualStyle *)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(NSDictionary *)textAttributes;
-(void)setTextAttributes:(NSDictionary *)arg1 ;
-(void)setBadgeColor:(UIColor *)arg1 ;
-(UIColor *)badgeColor;
-(id)initWithText:(id)arg1 ;
-(void)setTextOffset:(UIOffset)arg1 ;
-(void)_setUpLabelIfNecessary;
-(void)_applyTextToLabel;
-(UIOffset)textOffset;
@end

