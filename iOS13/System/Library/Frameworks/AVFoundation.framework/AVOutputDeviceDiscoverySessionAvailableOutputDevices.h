/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@class AVOutputDeviceDiscoverySessionAvailableOutputDevicesInternal, NSArray;

@interface AVOutputDeviceDiscoverySessionAvailableOutputDevices : NSObject {

	AVOutputDeviceDiscoverySessionAvailableOutputDevicesInternal* _availableOutputDevices;

}

@property (nonatomic,readonly) NSArray * recentlyUsedDevices; 
@property (nonatomic,readonly) NSArray * otherDevices; 
+(id)outputDeviceDiscoverySessionAvailableOutputDevicesWithAvailableFigEndpoints:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)impl;
-(NSArray *)recentlyUsedDevices;
-(NSArray *)otherDevices;
-(id)initWithOutputDeviceDiscoverySessionAvailableOutputDevicesImpl:(id)arg1 ;
-(void)_loadOutputDevices;
@end

