/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/

#import <CoreFoundation/NSUserDefaults.h>

@protocol WeatherPreferencesPersistence;
@interface WeatherInternalPreferences : NSUserDefaults {

	id<WeatherPreferencesPersistence> _persistence;

}

@property (retain) id<WeatherPreferencesPersistence> persistence;                         //@synthesize persistence=_persistence - In the implementation block
@property (nonatomic,readonly) BOOL isInternalInstall; 
@property (nonatomic,readonly) unsigned long long deviceInactivityThreshold; 
@property (nonatomic,readonly) BOOL isV3Enabled; 
@property (nonatomic,readonly) BOOL shouldShowUpdateTimestamp; 
+(id)sharedInternalPreferences;
-(id<WeatherPreferencesPersistence>)persistence;
-(void)setPersistence:(id<WeatherPreferencesPersistence>)arg1 ;
-(BOOL)isV3Enabled;
-(unsigned long long)deviceInactivityThreshold;
-(BOOL)shouldShowUpdateTimestamp;
-(BOOL)isInternalInstall;
@end

