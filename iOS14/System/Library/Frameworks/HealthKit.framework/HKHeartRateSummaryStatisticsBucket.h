/*
* Generated on Thursday, January 14, 2021 at 2:21:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableIndexSet, NSIndexSet;

@interface HKHeartRateSummaryStatisticsBucket : NSObject <NSSecureCoding> {

	NSMutableIndexSet* _heartRatesInBeatsPerMinute;
	long long _bucketIndex;

}

@property (nonatomic,readonly) long long bucketIndex;                                //@synthesize bucketIndex=_bucketIndex - In the implementation block
@property (nonatomic,readonly) NSIndexSet * heartRatesInBeatsPerMinute;              //@synthesize heartRatesInBeatsPerMinute=_heartRatesInBeatsPerMinute - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)bucketIndex;
-(NSIndexSet *)heartRatesInBeatsPerMinute;
-(id)initWithBucketIndex:(long long)arg1 ;
-(void)addHeartRateInBeatsPerMinute:(long long)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

