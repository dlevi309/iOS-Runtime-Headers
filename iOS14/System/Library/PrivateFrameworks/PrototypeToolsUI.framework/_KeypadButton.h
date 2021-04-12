/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PrototypeToolsUI.framework/PrototypeToolsUI
*/

#import <UIKitCore/UIButton.h>

@interface _KeypadButton : UIButton {

	long long _keyType;
	unsigned long long _digit;

}

@property (nonatomic,readonly) long long keyType;                     //@synthesize keyType=_keyType - In the implementation block
@property (nonatomic,readonly) unsigned long long digit;              //@synthesize digit=_digit - In the implementation block
-(void)_updateBackgroundColor;
-(unsigned long long)digit;
-(long long)keyType;
-(void)setHighlighted:(BOOL)arg1 ;
-(id)initWithKeyType:(long long)arg1 digit:(unsigned long long)arg2 target:(id)arg3 ;
-(id)initWithKeyType:(long long)arg1 target:(id)arg2 ;
-(id)initWithDigit:(unsigned long long)arg1 target:(id)arg2 ;
@end

