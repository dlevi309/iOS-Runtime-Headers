/*
* Generated on Monday, March 1, 2021 at 2:35:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PrototypeToolsUI.framework/PrototypeToolsUI
*/

#import <UIKitCore/UIButton.h>

@interface _KeypadButton : UIButton {

	long long _keyType;
	unsigned long long _digit;

}

@property (nonatomic,readonly) long long keyType;                     //@synthesize keyType=_keyType - In the implementation block
@property (nonatomic,readonly) unsigned long long digit;              //@synthesize digit=_digit - In the implementation block
-(long long)keyType;
-(void)setHighlighted:(BOOL)arg1 ;
-(void)_updateBackgroundColor;
-(unsigned long long)digit;
-(id)initWithKeyType:(long long)arg1 digit:(unsigned long long)arg2 target:(id)arg3 ;
-(id)initWithKeyType:(long long)arg1 target:(id)arg2 ;
-(id)initWithDigit:(unsigned long long)arg1 target:(id)arg2 ;
@end

