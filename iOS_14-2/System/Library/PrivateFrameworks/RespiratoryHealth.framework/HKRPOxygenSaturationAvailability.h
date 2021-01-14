/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RespiratoryHealth.framework/RespiratoryHealth
*/


@protocol HKRPOxygenSaturationAvailabilityDataSource;
@interface HKRPOxygenSaturationAvailability : NSObject {

	id<HKRPOxygenSaturationAvailabilityDataSource> _dataSource;

}

@property (getter=isDeviceSupported,nonatomic,readonly) BOOL deviceSupported; 
+(BOOL)isCountryAllowed:(id)arg1 ;
+(id)_availabilityPlistURL;
+(id)allowedCountryCodesISO3166;
+(id)allowedCountryCodesByVersion;
-(id)initWithDevice:(id)arg1 ;
-(id)init;
-(id)initWithDataSource:(id)arg1 ;
-(BOOL)isDeviceSupported;
@end

