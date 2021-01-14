/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDJournalableOperation.h>

@class NSUUID, HKQuantitySample, NSArray;

@interface HDInsertValuesToQuantitySampleSeriesOperation : HDJournalableOperation {

	NSUUID* _legacySeriesIdentifier;
	BOOL _didAwakeFromJournal;
	HKQuantitySample* _series;
	NSArray* _values;

}

@property (nonatomic,copy,readonly) HKQuantitySample * series;              //@synthesize series=_series - In the implementation block
@property (nonatomic,copy,readonly) NSArray * values;                       //@synthesize values=_values - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(NSArray *)values;
-(void)encodeWithCoder:(id)arg1 ;
-(HKQuantitySample *)series;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSeries:(id)arg1 values:(id)arg2 ;
@end

