/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaExperience.framework/MediaExperience
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol OS_dispatch_queue;
@class IDSService, NSObject, IDSDevice, NSString;

@interface CMSM_IDSConnection : NSObject <IDSServiceDelegate> {

	IDSService* pIdsService;
	NSObject*<OS_dispatch_queue> idsDispatchQueue;
	IDSDevice* pNearbyPairedDevice;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)service:(id)arg1 nearbyDevicesChanged:(id)arg2 ;
-(void)updateNearbyPairedDevice;
-(id)getNearbyPairedDevice;
-(id)copyNearbyPairedDeviceUniqueID;
-(id)copyNearbyPairedDeviceName;
-(id)copyNearbyPairedDeviceModelIdentifier;
-(id)copyNearbyPairedDeviceProductName;
@end

