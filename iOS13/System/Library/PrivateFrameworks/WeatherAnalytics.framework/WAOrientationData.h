/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(WAInterfaceOrientation *)interfaceOrientation;
-(WADeviceOrientation *)deviceOrientation;
-(id)toDict;
-(id)initWithDeviceOrientation:(id)arg1 interfaceOrientation:(id)arg2 ;
@end

