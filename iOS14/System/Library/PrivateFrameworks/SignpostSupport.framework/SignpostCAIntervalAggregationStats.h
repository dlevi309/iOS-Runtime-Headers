/*
* Generated on Thursday, January 14, 2021 at 2:28:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SignpostSupport.framework/SignpostSupport
*/

#import <SignpostSupport/SignpostSupport-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface SignpostCAIntervalAggregationStats : NSObject <NSCopying> {

	float _maxIntervalDurationNs;
	unsigned long long _intervalCount;
	unsigned long long _totalIntervalDurationNs;

}

@property (nonatomic,readonly) unsigned long long intervalCount;                        //@synthesize intervalCount=_intervalCount - In the implementation block
@property (nonatomic,readonly) unsigned long long totalIntervalDurationNs;              //@synthesize totalIntervalDurationNs=_totalIntervalDurationNs - In the implementation block
@property (nonatomic,readonly) float averageIntervalDurationNs; 
@property (nonatomic,readonly) float maxIntervalDurationNs;                             //@synthesize maxIntervalDurationNs=_maxIntervalDurationNs - In the implementation block
-(id)debugDescription;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)intervalCount;
-(void)_addAggregationStats:(id)arg1 ;
-(unsigned long long)totalIntervalDurationNs;
-(float)maxIntervalDurationNs;
-(float)averageIntervalDurationNs;
-(void)_addDurationNsToAggregation:(unsigned long long)arg1 ;
@end

