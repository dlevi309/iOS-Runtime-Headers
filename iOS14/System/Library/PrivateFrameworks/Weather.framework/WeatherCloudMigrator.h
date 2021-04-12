/*
* Generated on Thursday, January 14, 2021 at 2:25:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/


@class WeatherDeviceLookup;

@interface WeatherCloudMigrator : NSObject {

	WeatherDeviceLookup* _deviceLookup;

}

@property (nonatomic,readonly) WeatherDeviceLookup * deviceLookup;              //@synthesize deviceLookup=_deviceLookup - In the implementation block
-(id)init;
-(BOOL)storeRequiresMigration:(id)arg1 ;
-(void)eraseStoreIfNeeded:(id)arg1 ;
-(WeatherDeviceLookup *)deviceLookup;
-(void)migrateStore:(id)arg1 toStore:(id)arg2 completionBlock:(/*^block*/id)arg3 ;
@end

