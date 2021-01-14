/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/_HKCFGExpression.h>

@interface _HKCFGTerminal : _HKCFGExpression
+(id)terminalMatchingIntegerWithCondition:(/*^block*/id)arg1 ;
+(id)terminalMatchingString:(id)arg1 caseSensitive:(BOOL)arg2 ;
+(id)terminalMatchingDoubleWithCondition:(/*^block*/id)arg1 ;
+(id)terminalMatchingCharacterInSet:(id)arg1 ;
+(id)_terminalMatchingIntegerWithCondition:(/*^block*/id)arg1 ;
+(id)_terminalMatchingDoubleWithCondition:(/*^block*/id)arg1 ;
+(id)terminalMatchingString:(id)arg1 ;
+(id)terminalMatchingCharacterInString:(id)arg1 ;
+(id)terminalMatchingAnyDouble;
+(id)terminalMatchingAnyInteger;
+(id)terminalMatchingSequenceOfCharactersInSet:(id)arg1 ;
-(id)_label;
-(unsigned long long)_minimumLength;
-(void)_tryNodesWithContext:(id)arg1 solutionTest:(/*^block*/id)arg2 ;
-(id)characterSet;
-(BOOL)_scanValue:(id*)arg1 withScanner:(id)arg2 ;
@end

