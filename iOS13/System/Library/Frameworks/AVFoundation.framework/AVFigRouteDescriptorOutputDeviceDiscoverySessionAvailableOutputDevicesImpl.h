/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVOutputDeviceDiscoverySessionAvailableOutputDevicesImpl.h>

@class NSArray, NSString;

@interface AVFigRouteDescriptorOutputDeviceDiscoverySessionAvailableOutputDevicesImpl : NSObject <AVOutputDeviceDiscoverySessionAvailableOutputDevicesImpl> {

	NSArray* _routeDescriptors;
	OpaqueFigRouteDiscovererRef _routeDiscoverer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * allDevices; 
-(id)init;
-(void)dealloc;
-(NSArray *)allDevices;
-(id)initWithRouteDescriptors:(id)arg1 routeDiscoverer:(OpaqueFigRouteDiscovererRef)arg2 ;
@end

