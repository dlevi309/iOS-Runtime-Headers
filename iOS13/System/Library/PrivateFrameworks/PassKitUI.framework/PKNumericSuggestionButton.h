/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(UIColor *)textColor;
-(void)setSuggestion:(PKNumericSuggestion *)arg1 ;
-(PKNumericSuggestion *)suggestion;
@end

