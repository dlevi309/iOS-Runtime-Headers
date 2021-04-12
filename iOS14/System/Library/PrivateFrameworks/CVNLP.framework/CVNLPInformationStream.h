/*
* Generated on Thursday, January 14, 2021 at 2:24:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CVNLP.framework/CVNLP
*/


@class NSNumber;

@interface CVNLPInformationStream : NSObject {

	double _decodingWeightValue;
	double _lowerBoundLogProbabilityValue;
	NSNumber* _decodingWeight;
	NSNumber* _lowerBoundLogProbability;

}

@property (nonatomic,readonly) NSNumber * decodingWeight;                        //@synthesize decodingWeight=_decodingWeight - In the implementation block
@property (nonatomic,readonly) NSNumber * lowerBoundLogProbability;              //@synthesize lowerBoundLogProbability=_lowerBoundLogProbability - In the implementation block
+(id)defaultLowerBoundLogProbability;
+(id)defaultDecodingWeight;
-(id)initWithDecodingWeight:(id)arg1 lowerBoundLogProbability:(id)arg2 ;
-(id)initWithDecodingWeight:(id)arg1 ;
-(double)decodingWeightValue;
-(double)lowerBoundLogProbabilityValue;
-(NSNumber *)decodingWeight;
-(NSNumber *)lowerBoundLogProbability;
@end

