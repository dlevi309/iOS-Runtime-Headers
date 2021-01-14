/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVOutputDeviceDiscoverySessionAvailableOutputDevicesImpl.h>

@class NSArray, NSString;

@interface AVFigEndpointOutputDeviceDiscoverySessionAvailableOutputDevicesImpl : NSObject <AVOutputDeviceDiscoverySessionAvailableOutputDevicesImpl> {

	NSArray* _figEndpoints;

}

@property (nonatomic,readonly) NSArray * allDevices; 
@property (nonatomic,readonly) NSArray * availableOutputDeviceGroups; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSArray *)allDevices;
-(id)init;
-(id)initWithAvailableFigEndpoints:(id)arg1 ;
-(NSArray *)availableOutputDeviceGroups;
-(void)dealloc;
@end

