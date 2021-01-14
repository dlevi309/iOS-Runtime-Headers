/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(NSString *)openString;
-(id)speakableDescriptionWithSpeakingStyle:(long long)arg1 arePausesAllowed:(BOOL)arg2 ;
-(id)speakableSegmentsWithSpeakingStyle:(long long)arg1 upToDepth:(unsigned long long)arg2 treePosition:(id)arg3 ;
-(id)mathMLTag;
-(id)mathMLAttributes;
-(id)dollarCodeDescriptionWithNumberOfOuterRadicals:(unsigned long long)arg1 treePosition:(id)arg2 ;
-(id)latexDescriptionInMathMode:(BOOL)arg1 ;
-(unsigned long long)fractionLevel;
-(void)setOpenString:(NSString *)arg1 ;
-(void)setCloseString:(NSString *)arg1 ;
-(NSString *)closeString;
-(BOOL)_isBinomialCoefficient;
-(id)_binomialCoefficientContent;
-(id)_treePositionForBinomialCoefficientContentWithOuterTreePosition:(id)arg1 ;
@end

