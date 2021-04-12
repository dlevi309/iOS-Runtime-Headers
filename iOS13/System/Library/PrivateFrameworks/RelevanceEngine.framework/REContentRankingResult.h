/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@interface REContentRankingResult : NSObject {

	BOOL _valid;
	int _unknownCount;
	double _positivePolarity;
	double _negativePolarity;
	double _unbiasedPositivePolarity;
	double _unbiasedNegativePolarity;

}

@property (assign,nonatomic) BOOL valid;                                   //@synthesize valid=_valid - In the implementation block
@property (assign,nonatomic) double positivePolarity;                      //@synthesize positivePolarity=_positivePolarity - In the implementation block
@property (assign,nonatomic) double negativePolarity;                      //@synthesize negativePolarity=_negativePolarity - In the implementation block
@property (assign,nonatomic) int unknownCount;                             //@synthesize unknownCount=_unknownCount - In the implementation block
@property (assign,nonatomic) double unbiasedPositivePolarity;              //@synthesize unbiasedPositivePolarity=_unbiasedPositivePolarity - In the implementation block
@property (assign,nonatomic) double unbiasedNegativePolarity;              //@synthesize unbiasedNegativePolarity=_unbiasedNegativePolarity - In the implementation block
-(BOOL)valid;
-(void)setValid:(BOOL)arg1 ;
-(void)setPositivePolarity:(double)arg1 ;
-(void)setNegativePolarity:(double)arg1 ;
-(void)setUnknownCount:(int)arg1 ;
-(void)setUnbiasedPositivePolarity:(double)arg1 ;
-(void)setUnbiasedNegativePolarity:(double)arg1 ;
-(double)positivePolarity;
-(double)negativePolarity;
-(int)unknownCount;
-(double)unbiasedPositivePolarity;
-(double)unbiasedNegativePolarity;
@end

