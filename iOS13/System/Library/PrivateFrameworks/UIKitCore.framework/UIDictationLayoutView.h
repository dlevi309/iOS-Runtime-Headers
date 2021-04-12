/*
* Generated on Monday, March 1, 2021 at 2:30:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIDictationView.h>

@class UIButton, UILabel, NSString;

@interface UIDictationLayoutView : UIDictationView {

	BOOL _hideSwitcher;
	UIButton* _globeButton;
	UIButton* _keyboardButton;
	UILabel* _languageLabel;
	NSString* _currentDictationLanguage;
	UIButton* _waveTapEndpointButton;
	BOOL _blackTextColor;

}
-(void)dealloc;
-(void)setState:(int)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setRenderConfig:(id)arg1 ;
-(id)darkGrayColor;
-(void)returnToKeyboard;
-(void)finishReturnToKeyboard;
-(void)globeButtonPressed:(id)arg1 withEvent:(id)arg2 location:(CGPoint)arg3 ;
-(BOOL)isShowing;
-(void)keyboardButtonPressed:(id)arg1 ;
-(void)globeButtonPressed:(id)arg1 withEvent:(id)arg2 ;
-(void)updateLanguageLabel;
@end

