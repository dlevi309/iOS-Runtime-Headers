/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@class AVOutputDeviceDiscoverySessionAvailableOutputDevicesInternal, NSArray;

@interface AVOutputDeviceDiscoverySessionAvailableOutputDevices : NSObject {

	AVOutputDeviceDiscoverySessionAvailableOutputDevicesInternal* _availableOutputDevices;

}

@property (nonatomic,readonly) NSArray * recentlyUsedDevices; 
@property (nonatomic,readonly) NSArray * otherDevices; 
+(id)outputDeviceDiscoverySessionAvailableOutputDevicesWithAvailableFigEndpoints:(id)arg1 ;
-(id)init;
-(unsigned long long)hash;
-(id)availableOutputDeviceGroups;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(NSArray *)otherDevices;
-(NSArray *)recentlyUsedDevices;
-(id)initWithOutputDeviceDiscoverySessionAvailableOutputDevicesImpl:(id)arg1 ;
-(void)_loadOutputDevices;
-(id)impl;
@end

