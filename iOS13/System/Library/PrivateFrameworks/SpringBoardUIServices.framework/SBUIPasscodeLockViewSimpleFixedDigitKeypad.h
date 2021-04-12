/*
* Generated on Monday, March 1, 2021 at 2:32:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/

#import <SpringBoardUIServices/SBUIPasscodeLockViewWithKeypad.h>

@interface SBUIPasscodeLockViewSimpleFixedDigitKeypad : SBUIPasscodeLockViewWithKeypad {

	unsigned long long _numberOfDigits;

}

@property (nonatomic,readonly) unsigned long long numberOfDigits;              //@synthesize numberOfDigits=_numberOfDigits - In the implementation block
-(id)initWithLightStyle:(BOOL)arg1 numberOfDigits:(unsigned long long)arg2 ;
-(id)initWithLightStyle:(BOOL)arg1 ;
-(id)_newEntryField;
-(double)_entryFieldBottomYDistanceFromNumberPadTopButton;
-(unsigned long long)numberOfDigits;
@end

