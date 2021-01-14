/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVOutputDeviceDiscoverySessionAvailableOutputDevicesImpl.h>

@class NSArray, NSString;

@interface AVFigRouteDescriptorOutputDeviceDiscoverySessionAvailableOutputDevicesImpl : NSObject <AVOutputDeviceDiscoverySessionAvailableOutputDevicesImpl> {

	NSArray* _routeDescriptors;
	OpaqueFigRouteDiscovererRef _routeDiscoverer;
	OpaqueAPSyncControllerRef _syncController;

}

@property (nonatomic,readonly) NSArray * allDevices; 
@property (nonatomic,readonly) NSArray * availableOutputDeviceGroups; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)allDevices;
-(id)init;
-(id)initWithRouteDescriptors:(id)arg1 routeDiscoverer:(OpaqueFigRouteDiscovererRef)arg2 syncController:(OpaqueAPSyncControllerRef)arg3 ;
-(NSArray *)availableOutputDeviceGroups;
-(void)dealloc;
@end

