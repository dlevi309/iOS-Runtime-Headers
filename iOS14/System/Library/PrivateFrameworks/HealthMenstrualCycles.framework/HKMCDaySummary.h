/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthMenstrualCycles.framework/HealthMenstrualCycles
*/

#import <HealthMenstrualCycles/HealthMenstrualCycles-Structs.h>
#import <libobjc.A.dylib/HKMCAdjacentFlowDay.h>
#import <libobjc.A.dylib/HKRedactedDescription.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HKQuantity, NSNumber, NSDictionary, NSSet, NSString;

@interface HKMCDaySummary : NSObject <HKMCAdjacentFlowDay, HKRedactedDescription, NSSecureCoding, NSCopying> {

	BOOL _intermenstrualBleeding;
	long long _dayIndex;
	long long _menstrualFlow;
	unsigned long long _symptoms;
	long long _sexualActivity;
	long long _ovulationTestResult;
	long long _cervicalMucusQuality;
	HKQuantity* _basalBodyTemperature;
	long long _menstrualFlowModificationDayIndex;
	NSNumber* _startOfCycleFromCycleTracking;
	NSDictionary* _sampleCountByType;

}

@property (nonatomic,retain) NSDictionary * sampleCountByType;                            //@synthesize sampleCountByType=_sampleCountByType - In the implementation block
@property (assign,nonatomic) long long menstrualFlow;                                     //@synthesize menstrualFlow=_menstrualFlow - In the implementation block
@property (assign,nonatomic) BOOL intermenstrualBleeding;                                 //@synthesize intermenstrualBleeding=_intermenstrualBleeding - In the implementation block
@property (assign,nonatomic) unsigned long long symptoms;                                 //@synthesize symptoms=_symptoms - In the implementation block
@property (assign,nonatomic) long long sexualActivity;                                    //@synthesize sexualActivity=_sexualActivity - In the implementation block
@property (assign,nonatomic) long long ovulationTestResult;                               //@synthesize ovulationTestResult=_ovulationTestResult - In the implementation block
@property (assign,nonatomic) long long cervicalMucusQuality;                              //@synthesize cervicalMucusQuality=_cervicalMucusQuality - In the implementation block
@property (nonatomic,copy) HKQuantity * basalBodyTemperature;                             //@synthesize basalBodyTemperature=_basalBodyTemperature - In the implementation block
@property (assign,nonatomic) long long menstrualFlowModificationDayIndex;                 //@synthesize menstrualFlowModificationDayIndex=_menstrualFlowModificationDayIndex - In the implementation block
@property (nonatomic,copy) NSNumber * startOfCycleFromCycleTracking;                      //@synthesize startOfCycleFromCycleTracking=_startOfCycleFromCycleTracking - In the implementation block
@property (nonatomic,readonly) long long menstrualFlowSampleCount; 
@property (nonatomic,readonly) long long sexualActivitySampleCount; 
@property (nonatomic,readonly) long long ovulationTestResultSampleCount; 
@property (nonatomic,readonly) long long cervicalMucusQualitySampleCount; 
@property (nonatomic,readonly) long long dayIndex;                                        //@synthesize dayIndex=_dayIndex - In the implementation block
@property (nonatomic,readonly) BOOL isDataLogged; 
@property (nonatomic,readonly) BOOL isSupplementaryDataLogged; 
@property (nonatomic,copy,readonly) NSSet * loggedSupplementaryDisplayTypes; 
@property (copy,readonly) NSString * hk_redactedDescription; 
+(BOOL)supportsSecureCoding;
+(id)daySummaryWithDayIndex:(long long)arg1 menstrualFlow:(long long)arg2 intermenstrualBleeding:(BOOL)arg3 symptoms:(unsigned long long)arg4 sexualActivity:(long long)arg5 ovulationTestResult:(long long)arg6 cervicalMucusQuality:(long long)arg7 basalBodyTemperature:(id)arg8 ;
+(id)daySummaryWithDayIndex:(long long)arg1 menstrualFlow:(long long)arg2 intermenstrualBleeding:(BOOL)arg3 symptoms:(unsigned long long)arg4 sexualActivity:(long long)arg5 ovulationTestResult:(long long)arg6 cervicalMucusQuality:(long long)arg7 basalBodyTemperature:(id)arg8 sampleCountByType:(id)arg9 ;
+(id)emptyDaySummaryWithDayIndex:(long long)arg1 ;
-(long long)ovulationTestResult;
-(void)setOvulationTestResult:(long long)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)symptoms;
-(id)description;
-(BOOL)hasFlow;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)hk_redactedDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(long long)dayIndex;
-(void)setSymptoms:(unsigned long long)arg1 ;
-(long long)menstrualFlow;
-(BOOL)intermenstrualBleeding;
-(BOOL)isUserEnteredDataEqual:(id)arg1 ;
-(long long)menstrualFlowModificationDayIndex;
-(NSNumber *)startOfCycleFromCycleTracking;
-(long long)sexualActivity;
-(long long)cervicalMucusQuality;
-(HKQuantity *)basalBodyTemperature;
-(void)setMenstrualFlowModificationDayIndex:(long long)arg1 ;
-(void)setStartOfCycleFromCycleTracking:(NSNumber *)arg1 ;
-(BOOL)_isMenstrualFlowLogged;
-(BOOL)_isIntermenstrualBleedingLogged;
-(BOOL)_isSymptomsLogged;
-(BOOL)_isSexualActivityLogged;
-(BOOL)_isOvulationTestResultLogged;
-(BOOL)_isCervicalMucusQualityLogged;
-(BOOL)_isBasalBodyTemperatureLogged;
-(BOOL)isDataLogged;
-(BOOL)isSupplementaryDataLogged;
-(NSSet *)loggedSupplementaryDisplayTypes;
-(long long)menstrualFlowSampleCount;
-(long long)sexualActivitySampleCount;
-(long long)ovulationTestResultSampleCount;
-(long long)cervicalMucusQualitySampleCount;
-(void)setMenstrualFlow:(long long)arg1 ;
-(void)setIntermenstrualBleeding:(BOOL)arg1 ;
-(void)setSexualActivity:(long long)arg1 ;
-(void)setCervicalMucusQuality:(long long)arg1 ;
-(void)setBasalBodyTemperature:(HKQuantity *)arg1 ;
-(NSDictionary *)sampleCountByType;
-(void)setSampleCountByType:(NSDictionary *)arg1 ;
-(BOOL)isFetched;
-(BOOL)hasConfirmedNoFlow;
@end

