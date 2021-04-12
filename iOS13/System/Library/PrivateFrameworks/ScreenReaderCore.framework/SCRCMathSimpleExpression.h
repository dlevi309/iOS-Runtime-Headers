/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
*/

#import <ScreenReaderCore/SCRCMathExpression.h>

@class NSString;

@interface SCRCMathSimpleExpression : SCRCMathExpression {

	NSString* _content;

}

@property (nonatomic,copy) NSString * content;              //@synthesize content=_content - In the implementation block
-(id)description;
-(long long)integerValue;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)content;
-(void)setContent:(NSString *)arg1 ;
-(BOOL)isInteger;
-(id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(BOOL)arg2 ;
-(id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2 ;
-(id)latexMathModeDescription;
-(BOOL)canBeUsedWithBase;
-(BOOL)isFunctionName;
-(BOOL)isWordOrAbbreviation;
-(id)_functionNames;
@end

