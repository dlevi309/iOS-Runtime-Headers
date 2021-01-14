/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HDDataCollectorSensorDatum.h>

@class HKQuantity, NSDictionary;

@interface HDQuantityDatum : HDDataCollectorSensorDatum {

	HKQuantity* _quantity;
	NSDictionary* _metadata;
	/*^block*/id _saveCompletion;

}

@property (nonatomic,copy,readonly) HKQuantity * quantity;                //@synthesize quantity=_quantity - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy) id saveCompletion;                             //@synthesize saveCompletion=_saveCompletion - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)hdt_quantityDatumForType:(id)arg1 startTime:(double)arg2 endTime:(double)arg3 value:(double)arg4 ;
+(id)quantityDatumWithHKQuantityDatum:(id)arg1 metadata:(id)arg2 ;
+(id)quantityDataForDifferencesInData:(id)arg1 baseDatum:(id)arg2 unit:(id)arg3 differenceHandler:(/*^block*/id)arg4 intervalHandler:(/*^block*/id)arg5 ;
-(id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 resumeContext:(id)arg3 quantity:(id)arg4 ;
-(void)setSaveCompletion:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(HKQuantity *)quantity;
-(id)datumForChangeSince:(id)arg1 newIdentifier:(id)arg2 newResumeContext:(id)arg3 ;
-(id)initWithIdentifier:(id)arg1 dateInterval:(id)arg2 quantity:(id)arg3 metadata:(id)arg4 resumeContextProvider:(/*^block*/id)arg5 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)saveCompletion;
-(NSDictionary *)metadata;
-(BOOL)isEqual:(id)arg1 ;
@end

