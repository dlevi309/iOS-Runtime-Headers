/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WeatherAnalytics.framework/WeatherAnalytics
*/

#import <libobjc.A.dylib/AADataEventType.h>

@class NSString, WADevicePlatform, WAOsInstallVariant;

@interface WADeviceData : NSObject <AADataEventType> {

	NSString* _deviceModel;
	WADevicePlatform* _devicePlatform;
	WAOsInstallVariant* _osInstallVariant;
	NSString* _osVersion;

}

@property (nonatomic,readonly) NSString * deviceModel;                             //@synthesize deviceModel=_deviceModel - In the implementation block
@property (nonatomic,readonly) WADevicePlatform * devicePlatform;                  //@synthesize devicePlatform=_devicePlatform - In the implementation block
@property (nonatomic,readonly) WAOsInstallVariant * osInstallVariant;              //@synthesize osInstallVariant=_osInstallVariant - In the implementation block
@property (nonatomic,readonly) NSString * osVersion;                               //@synthesize osVersion=_osVersion - In the implementation block
+(id)dataName;
-(NSString *)osVersion;
-(NSString *)deviceModel;
-(WADevicePlatform *)devicePlatform;
-(WAOsInstallVariant *)osInstallVariant;
-(id)toDict;
-(id)initWithDeviceModel:(id)arg1 devicePlatform:(id)arg2 osInstallVariant:(id)arg3 osVersion:(id)arg4 ;
@end

