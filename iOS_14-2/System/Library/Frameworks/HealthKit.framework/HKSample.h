/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKObject.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HKSampleType, NSDate;

@interface HKSample : HKObject <NSCopying> {

	HKSampleType* _sampleType;
	double _startTimestamp;
	double _endTimestamp;

}

@property (assign,setter=_setStartTimestamp:,getter=_startTimestamp,nonatomic) double startTimestamp;              //@synthesize startTimestamp=_startTimestamp - In the implementation block
@property (assign,setter=_setEndTimestamp:,getter=_endTimestamp,nonatomic) double endTimestamp;                    //@synthesize endTimestamp=_endTimestamp - In the implementation block
@property (copy,readonly) HKSampleType * sampleType; 
@property (readonly) NSDate * startDate; 
@property (readonly) NSDate * endDate; 
+(BOOL)supportsSecureCoding;
+(BOOL)supportsEquivalence;
+(id)_newSampleWithType:(id)arg1 startDate:(double)arg2 endDate:(double)arg3 device:(id)arg4 metadata:(id)arg5 config:(/*^block*/id)arg6 ;
+(id)_newSampleFromDatesWithType:(id)arg1 startDate:(id)arg2 endDate:(id)arg3 device:(id)arg4 metadata:(id)arg5 config:(/*^block*/id)arg6 ;
+(id)_enumerateValidIntervalsWithStartDate:(id)arg1 endDate:(id)arg2 sampleType:(id)arg3 block:(/*^block*/id)arg4 ;
-(NSDate *)endDate;
-(BOOL)isEquivalent:(id)arg1 ;
-(NSDate *)startDate;
-(id)valueForKey:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_setStartDate:(id)arg1 ;
-(void)_setEndDate:(id)arg1 ;
-(id)description;
-(void)_setSampleType:(id)arg1 ;
-(void)_setStartTimestamp:(double)arg1 ;
-(void)_setEndTimestamp:(double)arg1 ;
-(double)_endTimestamp;
-(SCD_Struct_HK32)hk_dayIndexRangeWithCalendar:(id)arg1 ;
-(void)_enumerateTimePeriodsWithBlock:(/*^block*/id)arg1 ;
-(void)_setType:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(id)_validateWithConfiguration:(HKObjectValidationConfiguration)arg1 ;
-(HKSampleType *)sampleType;
-(long long)_externalSyncObjectCode;
-(BOOL)_requiresPrivateEntitlementForQueries;
-(double)_startTimestamp;
@end

