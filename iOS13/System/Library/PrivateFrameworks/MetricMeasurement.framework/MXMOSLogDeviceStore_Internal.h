/*
* Generated on Monday, March 1, 2021 at 2:35:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MetricMeasurement.framework/MetricMeasurement
*/

#import <libobjc.A.dylib/OSDeviceDelegate.h>

@protocol MXMProbeableDevice;
@class OSActivityStream, NSMutableDictionary, NSString;

@interface MXMOSLogDeviceStore_Internal : NSObject <OSDeviceDelegate> {

	OSActivityStream* _stream;
	id<MXMProbeableDevice> _hostDevice;
	NSMutableDictionary* _devices;

}

@property (nonatomic,readonly) id<MXMProbeableDevice> hostDevice;              //@synthesize hostDevice=_hostDevice - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * devices;                  //@synthesize devices=_devices - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shared;
-(id)init;
-(NSMutableDictionary *)devices;
-(BOOL)activityStream:(id)arg1 deviceUDID:(id)arg2 deviceID:(id)arg3 status:(long long)arg4 error:(id)arg5 ;
-(id<MXMProbeableDevice>)hostDevice;
@end

