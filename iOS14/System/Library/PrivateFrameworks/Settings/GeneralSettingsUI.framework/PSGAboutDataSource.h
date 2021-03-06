/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/GeneralSettingsUI.framework/GeneralSettingsUI
*/

#import <Preferences/PSSpecifierDataSource.h>
#import <libobjc.A.dylib/NDOAppleCareFlowDelegate.h>

@protocol NSObject;
@class NSMutableDictionary, PSSpecifier, NSString, NSTimer, NSLock, NDOACController, NSArray, NDOManager;

@interface PSGAboutDataSource : PSSpecifierDataSource <NDOAppleCareFlowDelegate> {

	NSMutableDictionary* _mediaDict;
	PSSpecifier* _headsetSpecifier;
	PSSpecifier* _accessoryDividerSpecifier;
	NSString* _loading;
	NSTimer* _reloadTimer;
	BOOL _isGeneratingNotifications;
	BOOL _threadRunning;
	BOOL _cancel;
	BOOL _loaded;
	BOOL _accessory;
	id<NSObject> _photoVideoNotificationToken;
	NSLock* _lock;
	BOOL _hasLoadedSpecifiers;
	NSMutableDictionary* _carrierCellState;
	NSMutableDictionary* _simCellState;
	NSString* _deviceNameToIgnoreOnce;
	NDOACController* _sharedNDOController;
	NSArray* _ndoSpecifiers;
	NDOManager* _ndoManager;

}

@property (nonatomic,retain) NSString * deviceNameToIgnoreOnce;                  //@synthesize deviceNameToIgnoreOnce=_deviceNameToIgnoreOnce - In the implementation block
@property (nonatomic,retain) NDOACController * sharedNDOController;              //@synthesize sharedNDOController=_sharedNDOController - In the implementation block
@property (nonatomic,retain) NSArray * ndoSpecifiers;                            //@synthesize ndoSpecifiers=_ndoSpecifiers - In the implementation block
@property (nonatomic,retain) NDOManager * ndoManager;                            //@synthesize ndoManager=_ndoManager - In the implementation block
-(id)countForKey:(id)arg1 ;
-(id)init;
-(void)reloadSpecifiers;
-(id)_macAddress;
-(void)loadSpecifiers;
-(BOOL)areSpecifiersLoaded;
-(id)specifiersForSpecifier:(id)arg1 observer:(id)arg2 ;
-(void)_accessoryDidUpdate:(id)arg1 ;
-(id)_songs:(id)arg1 ;
-(void)dealloc;
-(id)_bluetoothMACAddress;
-(id)valueForSpecifier:(id)arg1 ;
-(void)newCarrierNotification;
-(void)setDeviceName:(id)arg1 specifier:(id)arg2 ;
-(id)deviceName:(id)arg1 ;
-(id)_myNumber;
-(void)_setValue:(id)arg1 forSpecifier:(id)arg2 ;
-(void)outreachFinishedWithCompletion:(unsigned long long)arg1 ;
-(NSArray *)ndoSpecifiers;
-(void)updateNDOSpecifiersWithPolicy:(unsigned long long)arg1 completion:(/*^block*/id)arg2 ;
-(void)setNdoManager:(NDOManager *)arg1 ;
-(NDOManager *)ndoManager;
-(id)warrantySpecifiersFromWarranty:(id)arg1 ;
-(void)setNdoSpecifiers:(NSArray *)arg1 ;
-(id)warrantyDetailText:(id)arg1 ;
-(void)setDeviceNameToIgnoreOnce:(NSString *)arg1 ;
-(id)untrustedComponents;
-(id)nonGenuineComponentSpecifierForComponent:(id)arg1 ;
-(void)_addKey:(id)arg1 isCopyable:(BOOL)arg2 ;
-(BOOL)_isUsingBootstrap:(id)arg1 ;
-(id)_PRLString:(id)arg1 ;
-(id)_ERIString:(id)arg1 ;
-(id)_NAIString:(id)arg1 ;
-(id)_MINString:(id)arg1 ;
-(id)_IMSStatusString:(id)arg1 ;
-(id)_carrierVersion:(id)arg1 ;
-(id)_ICCIDString:(id)arg1 ;
-(id)_CSNString:(id)arg1 ;
-(id)_modelRegionString;
-(id)_regulatoryModelNumberString;
-(id)_productVersionString;
-(id)_productBuildVersionString;
-(void)_loadMediaFinished:(id)arg1 ;
-(NSString *)deviceNameToIgnoreOnce;
-(void)_loadValues;
-(void)_setValue:(id)arg1 forSpecifierWithKey:(id)arg2 ;
-(void)updateCarrierSpecifier:(id)arg1 ;
-(void)updateSIMSpecifier:(id)arg1 ;
-(id)_modelNameString;
-(id)_macAddressSpecifierKey;
-(id)aboutController;
-(void)appleCareCoveragePressed:(id)arg1 ;
-(id)nonGenuineBatteryURL;
-(id)informationCollectionSpecifier;
-(void)handleNonGenuineComponentTap:(id)arg1 ;
-(NDOACController *)sharedNDOController;
-(void)setSharedNDOController:(NDOACController *)arg1 ;
-(void)updateNDOSpecifiers;
-(id)topLevelComponentInfoSpecifiers;
-(id)_videos:(id)arg1 ;
-(id)_photos:(id)arg1 ;
-(BOOL)shouldShowSIMSpecifier:(id)arg1 ;
-(void)_addKey:(id)arg1 value:(id)arg2 isCopyable:(BOOL)arg3 ;
-(void)cleanupMLReloadTimer;
-(void)forceReloadMediaStats:(id)arg1 ;
-(void)prlVersionChangedForSlot:(id)arg1 ;
-(id)getCarrierSpecifierForSlot:(id)arg1 ;
-(void)mediaLibraryDidChange:(id)arg1 ;
-(void)simStatusChangedToReady;
-(void)prlVersionChanged:(id)arg1 ;
-(void)enableMLUpdates:(BOOL)arg1 ;
-(void)updateProductModelSpecifier:(id)arg1 ;
-(void)updateProductVersionSpecifier:(id)arg1 ;
-(void)reloadDeviceName;
@end

