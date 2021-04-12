/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)values;
-(HKQuantitySample *)series;
-(BOOL)performWithProfile:(id)arg1 transaction:(id)arg2 error:(id*)arg3 ;
-(id)initWithSeries:(id)arg1 values:(id)arg2 ;
@end

