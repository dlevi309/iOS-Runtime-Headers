/*
* Generated on Thursday, January 14, 2021 at 2:23:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)copyNearbyPairedDeviceName;
-(id)getNearbyPairedDevice;
-(void)updateNearbyPairedDevice;
-(void)service:(id)arg1 nearbyDevicesChanged:(id)arg2 ;
-(id)copyNearbyPairedDeviceModelIdentifier;
-(id)copyNearbyPairedDeviceProductName;
-(id)copyNearbyPairedDeviceUniqueID;
@end

