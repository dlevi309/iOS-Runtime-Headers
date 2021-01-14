/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrackingAvoidance.framework/TrackingAvoidance
*/


@class NSDate;

@interface TAVehicleCategory : NSObject {

	NSDate* _date;
	unsigned long long _vehicleCategoryType;

}

@property (nonatomic,copy,readonly) NSDate * date;                                  //@synthesize date=_date - In the implementation block
@property (nonatomic,readonly) unsigned long long vehicleCategoryType;              //@synthesize vehicleCategoryType=_vehicleCategoryType - In the implementation block
+(unsigned long long)speculateTAVehicleCategoryTypeFromVehicleStateNotification:(id)arg1 ;
+(unsigned long long)speculateTAVehicleCategoryTypeFromGeoNavigationNotification:(id)arg1 ;
-(NSDate *)date;
-(id)initWithVehicleCategoryType:(unsigned long long)arg1 andDate:(id)arg2 ;
-(id)initWithTAVehicularStateNotification:(id)arg1 ;
-(id)initWithTAGeoNavigationNotification:(id)arg1 ;
-(unsigned long long)vehicleCategoryType;
@end

