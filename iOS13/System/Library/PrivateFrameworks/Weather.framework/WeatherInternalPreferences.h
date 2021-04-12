/*
* Generated on Monday, March 1, 2021 at 2:32:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Weather.framework/Weather
*/

#import <CoreFoundation/NSUserDefaults.h>

@protocol WeatherPreferencesPersistence;
@interface WeatherInternalPreferences : NSUserDefaults {

	id<WeatherPreferencesPersistence> _persistence;

}

@property (retain) id<WeatherPreferencesPersistence> persistence;              //@synthesize persistence=_persistence - In the implementation block
@property (readonly) BOOL isInternalInstall; 
@property (readonly) BOOL isV3Enabled; 
@property (readonly) BOOL shouldShowUpdateTimestamp; 
+(id)sharedInternalPreferences;
-(BOOL)isInternalInstall;
-(id<WeatherPreferencesPersistence>)persistence;
-(void)setPersistence:(id<WeatherPreferencesPersistence>)arg1 ;
-(BOOL)isV3Enabled;
-(BOOL)shouldShowUpdateTimestamp;
@end

