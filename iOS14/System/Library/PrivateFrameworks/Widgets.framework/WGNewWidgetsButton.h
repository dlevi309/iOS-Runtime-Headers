/*
* Generated on Thursday, January 14, 2021 at 2:28:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)badgeNumber;
-(id)init;
-(NSString *)numberText;
-(void)_buttonPushed:(id)arg1 ;
-(id)_attributedStringWithColor:(id)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(CGSize)_numberLabelSizeForText:(id)arg1 withAttributes:(id)arg2 ;
-(void)setLegibilitySettings:(_UILegibilitySettings *)arg1 ;
-(id)_numberAttributedStringWithNumberText:(id)arg1 attributes:(id)arg2 ;
-(id)_numberTextAttributes;
-(void)setNumberText:(NSString *)arg1 ;
-(id)_numberFont;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)text;
-(_UILegibilitySettings *)legibilitySettings;
-(void)_updateButtons;
-(id)_textFont;
-(void)_setAttributeTitleForButton:(id)arg1 withColor:(id)arg2 ;
-(void)updateForContentCategorySizeChange;
-(void)setBadgeNumber:(unsigned long long)arg1 ;
-(void)_buttonStateChanged:(id)arg1 ;
-(id)_textAttributesWithColor:(id)arg1 ;
-(id)_numberImageForNumberText:(id)arg1 withAttributes:(id)arg2 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

