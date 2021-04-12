/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(WAOsInstallVariant *)osInstallVariant;
-(WADevicePlatform *)devicePlatform;
-(id)toDict;
-(NSString *)deviceModel;
-(NSString *)osVersion;
-(id)initWithDeviceModel:(id)arg1 devicePlatform:(id)arg2 osInstallVariant:(id)arg3 osVersion:(id)arg4 ;
@end

