/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

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
+(id)_sampleWithUUID:(id)arg1 metadata:(id)arg2 sourceBundleIdentifier:(id)arg3 creationDate:(double)arg4 sampleType:(id)arg5 startDate:(double)arg6 endDate:(double)arg7 ;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_init;
-(id)valueForKey:(id)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(void)_setType:(id)arg1 ;
-(double)_startTimestamp;
-(double)_endTimestamp;
-(void)_setStartDate:(id)arg1 ;
-(void)_setEndDate:(id)arg1 ;
-(BOOL)isEquivalent:(id)arg1 ;
-(id)_validateConfigurationWithOptions:(unsigned long long)arg1 ;
-(HKSampleType *)sampleType;
-(long long)_externalSyncObjectCode;
-(BOOL)_requiresPrivateEntitlementForQueries;
-(void)_enumerateTimePeriodsWithBlock:(/*^block*/id)arg1 ;
-(void)_setStartTimestamp:(double)arg1 ;
-(void)_setEndTimestamp:(double)arg1 ;
-(void)_setSampleType:(id)arg1 ;
@end

