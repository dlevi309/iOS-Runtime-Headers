/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
*/

#import <ScreenReaderCore/SCRCMathSimpleExpression.h>

@interface SCRCMathIdentifierExpression : SCRCMathSimpleExpression {

	long long _fontStyle;

}

@property (nonatomic,readonly) long long fontStyle;              //@synthesize fontStyle=_fontStyle - In the implementation block
-(BOOL)isNumber;
-(id)mathMLString;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(long long)fontStyle;
-(id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(BOOL)arg2 ;
-(id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(BOOL)arg2 isPartOfWord:(BOOL)arg3 ;
-(BOOL)isNaturalSuperscript;
-(BOOL)canFormWordStartingWithExpression:(id)arg1 ;
-(BOOL)_isPrime;
@end

