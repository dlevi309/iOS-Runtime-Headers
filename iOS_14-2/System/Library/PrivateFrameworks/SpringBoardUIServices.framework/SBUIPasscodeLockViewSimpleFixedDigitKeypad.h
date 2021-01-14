/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

