/*
* Generated on Thursday, January 14, 2021 at 2:20:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIDictationView.h>
#import <UIKit/UIPointerInteractionDelegate.h>

@class UIButton, UILabel, NSString;

@interface UIDictationLayoutView : UIDictationView <UIPointerInteractionDelegate> {

	BOOL _hideSwitcher;
	UIButton* _globeButton;
	UIButton* _keyboardButton;
	UILabel* _languageLabel;
	NSString* _currentDictationLanguage;
	UIButton* _waveTapEndpointButton;
	BOOL _blackTextColor;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithFrame:(CGRect)arg1 ;
-(id)pointerInteraction:(id)arg1 styleForRegion:(id)arg2 ;
-(BOOL)isShowing;
-(id)darkGrayColor;
-(void)layoutSubviews;
-(void)finishReturnToKeyboard;
-(void)globeButtonPressed:(id)arg1 withEvent:(id)arg2 location:(CGPoint)arg3 ;
-(void)keyboardButtonPressed:(id)arg1 ;
-(void)globeButtonPressed:(id)arg1 withEvent:(id)arg2 ;
-(void)updateLanguageLabel;
-(void)setState:(int)arg1 ;
-(void)returnToKeyboard;
-(void)setRenderConfig:(id)arg1 ;
-(void)dealloc;
@end

