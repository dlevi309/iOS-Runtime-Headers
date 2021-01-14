/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
*/

#import <libobjc.A.dylib/CUXPCCodable.h>

@interface ENExposureSummaryItem : NSObject <CUXPCCodable> {

	double _maximumScore;
	double _scoreSum;
	double _weightedDurationSum;

}

@property (assign,nonatomic) double maximumScore;                     //@synthesize maximumScore=_maximumScore - In the implementation block
@property (assign,nonatomic) double scoreSum;                         //@synthesize scoreSum=_scoreSum - In the implementation block
@property (assign,nonatomic) double weightedDurationSum;              //@synthesize weightedDurationSum=_weightedDurationSum - In the implementation block
-(void)encodeWithXPCObject:(id)arg1 ;
-(id)description;
-(id)initWithXPCObject:(id)arg1 error:(id*)arg2 ;
-(double)scoreSum;
-(double)maximumScore;
-(void)setMaximumScore:(double)arg1 ;
-(void)setScoreSum:(double)arg1 ;
-(double)weightedDurationSum;
-(void)setWeightedDurationSum:(double)arg1 ;
-(void)roundDurations;
@end

