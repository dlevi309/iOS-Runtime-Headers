/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <HealthDaemon/HDDemoDataBaseSampleGenerator.h>

@class NSArray;

@interface HDDemoDataStatisticsSampleGenerator : HDDemoDataBaseSampleGenerator {

	linear_congruential_engine<unsigned int, 48271, 0, 2147483647> _generator;
	normal_distribution<double> _distribution;
	NSArray* _pseudoRandomDoubles;

}

@property (nonatomic,copy) NSArray * pseudoRandomDoubles;              //@synthesize pseudoRandomDoubles=_pseudoRandomDoubles - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setupWithDemoDataGenerator:(id)arg1 ;
-(double)pseudoRandomDoubleFromTime:(double)arg1 ;
-(double)computeNoiseFromTime:(double)arg1 stdDev:(double)arg2 ;
-(double)computeStatisticalTimeFromCurrentTime:(double)arg1 mean:(double)arg2 stdDev:(double)arg3 ;
-(id)_createPseudoRandomDoubles;
-(double)_pseudoRandomDoubleFromCurrentTime:(double)arg1 mean:(double)arg2 stdDev:(double)arg3 ;
-(double)randomDoubleFromGenerator;
-(id)_pseudoRandomDoubles;
-(NSArray *)pseudoRandomDoubles;
-(void)setPseudoRandomDoubles:(NSArray *)arg1 ;
@end

