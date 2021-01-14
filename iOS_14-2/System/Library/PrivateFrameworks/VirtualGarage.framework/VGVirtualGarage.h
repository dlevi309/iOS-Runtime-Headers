/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VirtualGarage.framework/VirtualGarage
*/

#import <VirtualGarage/VirtualGarage-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/VGDataCoordinatorDelegate.h>
#import <libobjc.A.dylib/VGVirtualGaragePersistingDelegate.h>
#import <libobjc.A.dylib/GEOConfigChangeListenerDelegate.h>
#import <libobjc.A.dylib/VGVirtualGarageActions.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol VGVirtualGaragePersisting, VGVirtualGarageDelegate;
@class VGVehicle, NSArray, NSMutableArray, NSString, VGDataCoordinator;

@interface VGVirtualGarage : NSObject <NSCopying, VGDataCoordinatorDelegate, VGVirtualGaragePersistingDelegate, GEOConfigChangeListenerDelegate, VGVirtualGarageActions, NSSecureCoding> {

	NSMutableArray* _vehicles;
	NSString* _selectedVehicleIdentifier;
	BOOL _isDataCoordinatorRunning;
	VGDataCoordinator* _dataCoordinator;
	id<VGVirtualGaragePersisting> _persister;
	BOOL _finishedLoadingVehicles;
	NSMutableArray* _queuedGetGarageCompletionHandlers;
	BOOL _shouldAssumeFullCharge;
	id<VGVirtualGarageDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<VGVirtualGarageDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSArray * vehicles; 
@property (nonatomic,readonly) VGVehicle * selectedVehicle; 
@property (assign,nonatomic) BOOL shouldAssumeFullCharge;                              //@synthesize shouldAssumeFullCharge=_shouldAssumeFullCharge - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)virtualGarageSelectVehicle:(id)arg1 ;
-(void)virtualGarageSaveVehicle:(id)arg1 ;
-(void)virtualGarageGetGarageWithReply:(/*^block*/id)arg1 ;
-(void)virtualGarageGetListOfUnpairedVehiclesWithReply:(/*^block*/id)arg1 ;
-(void)virtualGarageOnboardVehicle:(id)arg1 ;
-(void)virtualGarageAddVehicle:(id)arg1 ;
-(void)virtualGarageSetAssumesFullCharge:(BOOL)arg1 ;
-(void)valueChangedForGEOConfigKey:(SCD_Struct_VG2*)arg1 ;
-(void)virtualGarageRemoveVehicle:(id)arg1 ;
-(void)_removeVehiclesWithUninstalledAppsIfNeeded;
-(void)virtualGarageEndContinuousUpdates;
-(void)_setDataCoordintorRunning:(BOOL)arg1 ;
-(id<VGVirtualGarageDelegate>)delegate;
-(void)_endContinuousUpdates;
-(void)encodeWithCoder:(id)arg1 ;
-(NSArray *)vehicles;
-(void)setShouldAssumeFullCharge:(BOOL)arg1 ;
-(void)_addVehicle:(id)arg1 ;
-(void)_startContinuousUpdatesIfNeeded;
-(void)virtualGarageGetLatestStateOfVehicleWithIdentifier:(id)arg1 syncAcrossDevices:(BOOL)arg2 withReply:(/*^block*/id)arg3 ;
-(void)dataCoordinatorDidUpdateInstalledApps:(id)arg1 ;
-(void)setDelegate:(id<VGVirtualGarageDelegate>)arg1 ;
-(NSString *)description;
-(void)_selectVehicleWithIdentifier:(id)arg1 ;
-(void)_setupDataCoordinatorIfNeeded;
-(void)garagePersister:(id)arg1 wantsToUpdateVehicles:(id)arg2 ;
-(void)_unpairVehicle:(id)arg1 ;
-(void)dataCoordinator:(id)arg1 wantsToUpdateVehicle:(id)arg2 syncAcrossDevices:(BOOL)arg3 ;
-(VGVehicle *)selectedVehicle;
-(void)_removeVehicleWithIdentifier:(id)arg1 ;
-(id)_garageCopy;
-(id)initWithCoder:(id)arg1 ;
-(void)_notifyObserversGarageDidUpdateVehicles;
-(void)dataCoordinator:(id)arg1 didUpdateUnpairedVehicles:(id)arg2 ;
-(void)_saveVehicle:(id)arg1 syncAcrossDevices:(BOOL)arg2 ;
-(void)virtualGarageStartContinuousUpdatesIfNeeded;
-(void)dataCoordinator:(id)arg1 wantsToSelectVehicle:(id)arg2 ;
-(void)_onboardVehicle:(id)arg1 ;
-(id)initWithGaragePersister:(id)arg1 ;
-(id)_vehicleWithIdentifier:(id)arg1 ;
-(BOOL)shouldAssumeFullCharge;
-(void)_executeQueuedCompletionHandlersIfNeeded;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_forceUpdateWithVehicles:(id)arg1 ;
-(void)dealloc;
@end

