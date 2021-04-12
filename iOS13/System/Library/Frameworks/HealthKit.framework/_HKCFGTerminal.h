/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/_HKCFGExpression.h>

@interface _HKCFGTerminal : _HKCFGExpression
+(id)terminalMatchingString:(id)arg1 ;
+(id)terminalMatchingString:(id)arg1 caseSensitive:(BOOL)arg2 ;
+(id)terminalMatchingCharacterInSet:(id)arg1 ;
+(id)_terminalMatchingIntegerWithCondition:(/*^block*/id)arg1 ;
+(id)_terminalMatchingDoubleWithCondition:(/*^block*/id)arg1 ;
+(id)terminalMatchingCharacterInString:(id)arg1 ;
+(id)terminalMatchingAnyInteger;
+(id)terminalMatchingIntegerWithCondition:(/*^block*/id)arg1 ;
+(id)terminalMatchingAnyDouble;
+(id)terminalMatchingDoubleWithCondition:(/*^block*/id)arg1 ;
+(id)terminalMatchingSequenceOfCharactersInSet:(id)arg1 ;
-(id)_label;
-(id)characterSet;
-(unsigned long long)_minimumLength;
-(void)_tryNodesWithContext:(id)arg1 solutionTest:(/*^block*/id)arg2 ;
-(BOOL)_scanValue:(id*)arg1 withScanner:(id)arg2 ;
@end

