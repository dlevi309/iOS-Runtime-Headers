/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrototypeToolsUI.framework/PrototypeToolsUI
*/

#import <PrototypeToolsUI/PrototypeToolsUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/_KeypadButtonTarget.h>

@protocol PTUINumericKeypadDelegate;
@class UILabel, NSArray, _KeypadButton, _KeypadDismissButton, UIView, NSMutableArray, NSNumber, NSString;

@interface PTUINumericKeypad : UIView <_KeypadButtonTarget> {

	id<PTUINumericKeypadDelegate> _delegate;
	BOOL _showing;
	UILabel* _valueLabel;
	NSArray* _digitButtons;
	_KeypadButton* _dotButton;
	_KeypadButton* _signButton;
	_KeypadButton* _clearButton;
	_KeypadButton* _backspaceButton;
	_KeypadDismissButton* _dismissButton;
	UIView* _backgroundView;
	NSMutableArray* _digitsBeforeDot;
	NSMutableArray* _digitsAfterDot;
	BOOL _negative;
	BOOL _hasDot;
	NSNumber* _cachedNumberValue;
	NSString* _cachedStringValue;

}

@property (assign,nonatomic) double doubleValue; 
@property (nonatomic,retain) NSString * stringValue; 
+(id)sharedKeypad;
-(void)_clear;
-(double)doubleValue;
-(id)init;
-(void)setDoubleValue:(double)arg1 ;
-(void)_backspace;
-(BOOL)pointInside:(CGPoint)arg1 withEvent:(id)arg2 ;
-(NSString *)stringValue;
-(void)_flash;
-(void)setStringValue:(NSString *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)hideAnimated:(BOOL)arg1 ;
-(void)keyPress:(id)arg1 ;
-(void)_dismissButtonPress;
-(unsigned long long)_remainingAllowedDigits;
-(void)_updateDisplayedValue;
-(double)_layoutButtonRow:(id)arg1 atY:(double)arg2 ;
-(double)_layoutButtonRow:(id)arg1 atY:(double)arg2 stretch:(BOOL)arg3 ;
-(void)_appendDigit:(unsigned long long)arg1 ;
-(void)_appendDot;
-(void)_changeSign;
-(void)showAnimated:(BOOL)arg1 forDelegate:(id)arg2 ;
@end

