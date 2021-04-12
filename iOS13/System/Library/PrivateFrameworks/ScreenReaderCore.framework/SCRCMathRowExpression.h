/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
*/

#import <ScreenReaderCore/SCRCMathArrayExpression.h>

@interface SCRCMathRowExpression : SCRCMathArrayExpression
-(long long)integerValue;
-(BOOL)isNumber;
-(BOOL)isInteger;
-(id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(BOOL)arg2 ;
-(id)childSpeakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 parentTreePosition:(id)arg3 childIndex:(unsigned long long*)arg4 ;
-(id)mathMLTag;
-(id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2 ;
-(id)latexDescriptionInMathMode:(BOOL)arg1 ;
-(unsigned long long)fractionLevel;
-(id)speakableSummary;
-(BOOL)canBeUsedWithRange;
-(BOOL)canBeUsedWithBase;
-(BOOL)isFunctionName;
-(BOOL)isWordOrAbbreviation;
-(BOOL)beginsWithSpace;
-(BOOL)endsWithSpace;
-(id)_indexesOfCharactersInWords;
-(void)_addSpacingAndChild:(id)arg1 toResult:(id)arg2 nextChild:(id)arg3 previousChild:(id)arg4 numberOfOuterRadicals:(unsigned long long)arg5 treePosition:(id)arg6 ;
@end

