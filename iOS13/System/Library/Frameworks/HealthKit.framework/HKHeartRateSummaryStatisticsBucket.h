/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)bucketIndex;
-(NSIndexSet *)heartRatesInBeatsPerMinute;
-(id)initWithBucketIndex:(long long)arg1 ;
-(void)addHeartRateInBeatsPerMinute:(long long)arg1 ;
@end

