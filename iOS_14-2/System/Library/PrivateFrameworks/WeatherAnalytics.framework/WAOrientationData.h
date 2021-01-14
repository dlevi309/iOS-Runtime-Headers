/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WeatherAnalytics.framework/WeatherAnalytics
*/

#import <libobjc.A.dylib/AADataEventType.h>

@class WADeviceOrientation, WAInterfaceOrientation;

@interface WAOrientationData : NSObject <AADataEventType> {

	WADeviceOrientation* _deviceOrientation;
	WAInterfaceOrientation* _interfaceOrientation;

}

@property (nonatomic,readonly) WADeviceOrientation * deviceOrientation;                    //@synthesize deviceOrientation=_deviceOrientation - In the implementation block
@property (nonatomic,readonly) WAInterfaceOrientation * interfaceOrientation;              //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
+(id)dataName;
-(id)toDict;
-(id)initWithDeviceOrientation:(id)arg1 interfaceOrientation:(id)arg2 ;
-(WAInterfaceOrientation *)interfaceOrientation;
-(WADeviceOrientation *)deviceOrientation;
@end

