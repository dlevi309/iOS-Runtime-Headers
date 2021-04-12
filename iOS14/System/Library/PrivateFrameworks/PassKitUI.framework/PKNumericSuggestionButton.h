/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PKNumericBorderButton.h>

@class UIColor, PKNumericSuggestion;

@interface PKNumericSuggestionButton : PKNumericBorderButton {

	UIColor* _textColor;
	PKNumericSuggestion* _suggestion;

}

@property (nonatomic,copy) UIColor * textColor;                             //@synthesize textColor=_textColor - In the implementation block
@property (nonatomic,retain) PKNumericSuggestion * suggestion;              //@synthesize suggestion=_suggestion - In the implementation block
+(id)buttonWithSuggestion:(id)arg1 ;
-(UIColor *)textColor;
-(id)init;
-(PKNumericSuggestion *)suggestion;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setSuggestion:(PKNumericSuggestion *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

