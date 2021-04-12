/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
*/

#import <ScreenReaderCore/SCRCMathSimpleExpression.h>

@interface SCRCMathIdentifierExpression : SCRCMathSimpleExpression {

	long long _fontStyle;

}

@property (nonatomic,readonly) long long fontStyle;              //@synthesize fontStyle=_fontStyle - In the implementation block
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(BOOL)isNumber;
-(long long)fontStyle;
-(id)mathMLString;
-(id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(BOOL)arg2 ;
-(id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(BOOL)arg2 isPartOfWord:(BOOL)arg3 ;
-(BOOL)isNaturalSuperscript;
-(BOOL)canFormWordStartingWithExpression:(id)arg1 ;
-(BOOL)_isPrime;
@end

