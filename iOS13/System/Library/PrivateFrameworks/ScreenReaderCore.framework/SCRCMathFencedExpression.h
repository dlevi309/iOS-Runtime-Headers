/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
*/

#import <ScreenReaderCore/SCRCMathRowExpression.h>

@class NSString;

@interface SCRCMathFencedExpression : SCRCMathRowExpression {

	NSString* _openString;
	NSString* _closeString;

}

@property (nonatomic,copy) NSString * openString;               //@synthesize openString=_openString - In the implementation block
@property (nonatomic,copy) NSString * closeString;              //@synthesize closeString=_closeString - In the implementation block
-(id)description;
-(id)initWithDictionary:(id)arg1 ;
-(id)mathMLAttributes;
-(id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(BOOL)arg2 ;
-(id)speakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3 ;
-(id)mathMLTag;
-(id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2 ;
-(id)latexDescriptionInMathMode:(BOOL)arg1 ;
-(unsigned long long)fractionLevel;
-(void)setOpenString:(NSString *)arg1 ;
-(void)setCloseString:(NSString *)arg1 ;
-(NSString *)openString;
-(NSString *)closeString;
-(BOOL)_isBinomialCoefficient;
-(id)_binomialCoefficientContent;
-(id)_treePositionForBinomialCoefficientContentWithOuterTreePosition:(id)arg1 ;
@end

