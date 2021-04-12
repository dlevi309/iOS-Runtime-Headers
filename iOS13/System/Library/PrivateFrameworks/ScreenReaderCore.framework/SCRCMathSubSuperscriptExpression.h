/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
*/

#import <ScreenReaderCore/SCRCMathExpression.h>

@class SCRCMathExpression;

@interface SCRCMathSubSuperscriptExpression : SCRCMathExpression {

	SCRCMathExpression* _base;
	SCRCMathExpression* _subscript;
	SCRCMathExpression* _superscript;

}

@property (nonatomic,retain) SCRCMathExpression * base;                     //@synthesize base=_base - In the implementation block
@property (nonatomic,retain) SCRCMathExpression * subscript;                //@synthesize subscript=_subscript - In the implementation block
@property (nonatomic,retain) SCRCMathExpression * superscript;              //@synthesize superscript=_superscript - In the implementation block
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)isNumber;
-(void)setBase:(SCRCMathExpression *)arg1 ;
-(SCRCMathExpression *)base;
-(id)mathMLString;
-(id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(BOOL)arg2 ;
-(id)speakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3 ;
-(id)subExpressions;
-(id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2 ;
-(id)latexMathModeDescription;
-(unsigned long long)fractionLevel;
-(BOOL)isRangeSubSuperscript;
-(BOOL)isBaseSubSuperscript;
-(void)setSubscript:(SCRCMathExpression *)arg1 ;
-(void)setSuperscript:(SCRCMathExpression *)arg1 ;
-(SCRCMathExpression *)subscript;
-(SCRCMathExpression *)superscript;
-(id)_stringToAddForSuperscript:(id)arg1 withPriorDescription:(id)arg2 updatedDescription:(id*)arg3 ;
@end

