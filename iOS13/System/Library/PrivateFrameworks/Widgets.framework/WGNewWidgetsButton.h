/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Widgets.framework/Widgets
*/

#import <Widgets/Widgets-Structs.h>
#import <UIKitCore/UIButton.h>

@class UIButton, NSCache, _UILegibilitySettings, NSString;

@interface WGNewWidgetsButton : UIButton {

	UIButton* _vibrantButton;
	UIButton* _overlayButton;
	NSCache* _numberAttributedStringCache;
	unsigned long long _badgeNumber;
	_UILegibilitySettings* _legibilitySettings;
	NSString* _text;
	NSString* _numberText;

}

@property (nonatomic,retain) NSString * text;                                         //@synthesize text=_text - In the implementation block
@property (nonatomic,retain) NSString * numberText;                                   //@synthesize numberText=_numberText - In the implementation block
@property (assign,nonatomic) unsigned long long badgeNumber;                          //@synthesize badgeNumber=_badgeNumber - In the implementation block
@property (nonatomic,retain) _UILegibilitySettings * legibilitySettings;              //@synthesize legibilitySettings=_legibilitySettings - In the implementation block
-(id)init;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_updateButtons;
-(_UILegibilitySettings *)legibilitySettings;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(unsigned long long)badgeNumber;
-(id)_textFont;
-(void)_buttonStateChanged:(id)arg1 ;
-(void)_buttonPushed:(id)arg1 ;
-(void)setBadgeNumber:(unsigned long long)arg1 ;
-(void)setNumberText:(NSString *)arg1 ;
-(void)_setAttributeTitleForButton:(id)arg1 withColor:(id)arg2 ;
-(id)_attributedStringWithColor:(id)arg1 ;
-(id)_numberFont;
-(NSString *)numberText;
-(id)_numberTextAttributes;
-(id)_numberAttributedStringWithNumberText:(id)arg1 attributes:(id)arg2 ;
-(id)_textAttributesWithColor:(id)arg1 ;
-(id)_numberImageForNumberText:(id)arg1 withAttributes:(id)arg2 ;
-(CGSize)_numberLabelSizeForText:(id)arg1 withAttributes:(id)arg2 ;
-(void)updateForContentCategorySizeChange;
@end

