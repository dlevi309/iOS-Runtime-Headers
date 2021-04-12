/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VirtualGarage.framework/VirtualGarage
*/

#import <libobjc.A.dylib/VGOEMApplicationFinderUpdates.h>
#import <libobjc.A.dylib/VGExternalAccessoryUpdating.h>
#import <libobjc.A.dylib/VGOEMAppSOCStreaming.h>

@protocol VGDataCoordinatorDelegate, OS_dispatch_queue, VGOEMApplicationFinding;
@class NSObject, NSArray, VGExternalAccessory, NSMutableArray, NSTimer, NSMutableSet, NSString;

@interface VGDataCoordinator : NSObject <VGOEMApplicationFinderUpdates, VGExternalAccessoryUpdating, VGOEMAppSOCStreaming> {

	id<VGDataCoordinatorDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _workQueue;
	NSObject*<OS_dispatch_queue> _delegateQueue;
	id<VGOEMApplicationFinding> _applicationFinder;
	NSArray* _applications;
	VGExternalAccessory* _accessory;
	NSMutableArray* _unpairedVehicles;
	NSTimer* _vehicleStateRefreshTimer;
	NSMutableSet* _observedVehicles;

}

@property (nonatomic,copy,readonly) NSArray * unpairedVehicles; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)deviceIdentifier;
-(id)_applicationForVehicle:(id)arg1 ;
-(void)_stopChargeStreamForVehicle:(id)arg1 ;
-(void)_invalidateRefreshTimer;
-(unsigned long long)_indexOfVehicleInUnpairedVehicles:(id)arg1 ;
-(id)_vehicleStateProviderForVehicle:(id)arg1 ;
-(void)_updateGarageWithVehicle:(id)arg1 selectVehicle:(BOOL)arg2 syncAcrossDevices:(BOOL)arg3 ;
-(NSArray *)unpairedVehicles;
-(void)_saveOnboardingInfoForVehicle:(id)arg1 ;
-(void)OEMAppsUpdated:(id)arg1 ;
-(void)accessoryUpdatedWithVehicle:(id)arg1 ;
-(void)_removeUnpairedIapVehicleIfNeeded;
-(void)endAllContinuousUpdates;
-(void)_loadAllOEMVehiclesForApps:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithApplicationFinder:(id)arg1 externalAccessory:(id)arg2 delegate:(id)arg3 ;
-(void)_setupTimerIfNeeded;
-(void)finishOnboardingVehicle:(id)arg1 ;
-(void)_startChargeStreamForVehicle:(id)arg1 ;
-(void)unpairVehicle:(id)arg1 ;
-(void)startContinuousUpdatesForVehicle:(id)arg1 ;
-(id)_applicationRecordForVehicle:(id)arg1 ;
-(void)vehicleStateUpdated:(id)arg1 ;
-(void)_refreshStateForTrackedVehicles;
-(void)getLatestStateOfVehicle:(id)arg1 withReply:(/*^block*/id)arg2 ;
-(BOOL)shouldUnpairVehicle:(id)arg1 ;
-(id)_oemAppForChargeStreamForVehicle:(id)arg1 ;
-(void)dealloc;
-(void)_updateStateOfChargeForVehicle:(id)arg1 syncAcrossDevices:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(double)_vehicleStateRefreshInterval;
@end

