/*
* Generated on Monday, March 1, 2021 at 2:32:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <HealthKit/HKSample.h>
#import <libobjc.A.dylib/_HKBinarySample.h>

@class HKQuantity, NSString, NSArray;

@interface HKElectrocardiogram : HKSample <_HKBinarySample> {

	Electrocardiogram* _reading;

}

@property (getter=_averageHeartRate,nonatomic,readonly) HKQuantity * averageHeartRate; 
@property (getter=_classification,nonatomic,readonly) unsigned long long classification; 
@property (getter=_symptoms,nonatomic,readonly) unsigned long long symptoms; 
@property (getter=_localizedClassification,nonatomic,readonly) NSString * localizedClassification; 
@property (getter=_localizedSymptoms,nonatomic,readonly) NSArray * localizedSymptoms; 
@property (nonatomic,readonly) NSArray * leadNames; 
@property (nonatomic,readonly) long long numberOfValues; 
@property (nonatomic,readonly) HKQuantity * frequency; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(BOOL)_isConcreteObjectClass;
+(id)_electrocardiogramWithStartDate:(id)arg1 device:(id)arg2 metadata:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)payload;
-(HKQuantity *)frequency;
-(long long)numberOfValues;
-(unsigned long long)_classification;
-(id)_validateConfigurationWithOptions:(unsigned long long)arg1 ;
-(BOOL)prepareForSaving:(id*)arg1 ;
-(void)_setPayload:(id)arg1 ;
-(void)setReading:(Electrocardiogram*)arg1 ;
-(void)_enumerateDataForLead:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(id)_averageHeartRate;
-(unsigned long long)_symptoms;
-(NSArray *)leadNames;
-(void)enumerateDataForLead:(unsigned long long)arg1 block:(/*^block*/id)arg2 ;
-(id)_localizedClassification;
-(id)_localizedSymptoms;
@end

