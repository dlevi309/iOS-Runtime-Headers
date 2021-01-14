/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
*/

#import <ScreenReaderCore/SCRCMathSimpleExpression.h>

@interface SCRCMathOperatorExpression : SCRCMathSimpleExpression {

	unsigned short _operatorChar;

}

@property (nonatomic,readonly) unsigned short operatorChar;              //@synthesize operatorChar=_operatorChar - In the implementation block
-(id)mathMLString;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(BOOL)arg2 ;
-(id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2 ;
-(BOOL)canBeUsedWithRange;
-(BOOL)isNaturalSuperscript;
-(BOOL)isEllipsis;
-(BOOL)isTermSeparator;
-(BOOL)isOperationSymbol;
-(BOOL)isFenceDelimiter;
-(id)latexFormatStringAsOver;
-(BOOL)_isIntegral;
-(BOOL)_isUnionOrIntersection;
-(BOOL)_isSummation;
-(BOOL)_isRingOperator;
-(BOOL)_isInvisibleCharacter;
-(BOOL)_isMinusSign;
-(unsigned short)operatorChar;
@end

