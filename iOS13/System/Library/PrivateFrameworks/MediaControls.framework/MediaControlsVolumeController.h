/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <libobjc.A.dylib/MPVolumeControllerDelegate.h>

@class NSString, MPAVEndpointRoute, NSHashTable, MPVolumeController, MPAVOutputDeviceRoute;

@interface MediaControlsVolumeController : NSObject <MPVolumeControllerDelegate> {

	BOOL _isSplitRoute;
	BOOL _primaryInteractionEnabled;
	BOOL _secondaryInteractionEnabled;
	NSString* _volumeAudioCategory;
	MPAVEndpointRoute* _systemRoute;
	NSHashTable* _observers;
	MPVolumeController* _systemVolumeController;
	MPVolumeController* _primaryVolumeController;
	MPVolumeController* _secondaryVolumeController;
	MPAVOutputDeviceRoute* _systemOutputDeviceRoute;
	MPAVOutputDeviceRoute* _primaryOutputDeviceRoute;
	MPAVOutputDeviceRoute* _secondaryOutputDeviceRoute;

}

@property (nonatomic,retain) MPAVEndpointRoute * systemRoute;                                 //@synthesize systemRoute=_systemRoute - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                         //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) MPVolumeController * systemVolumeController;                     //@synthesize systemVolumeController=_systemVolumeController - In the implementation block
@property (nonatomic,retain) MPVolumeController * primaryVolumeController;                    //@synthesize primaryVolumeController=_primaryVolumeController - In the implementation block
@property (nonatomic,retain) MPVolumeController * secondaryVolumeController;                  //@synthesize secondaryVolumeController=_secondaryVolumeController - In the implementation block
@property (nonatomic,retain) MPAVOutputDeviceRoute * systemOutputDeviceRoute;                 //@synthesize systemOutputDeviceRoute=_systemOutputDeviceRoute - In the implementation block
@property (nonatomic,retain) MPAVOutputDeviceRoute * primaryOutputDeviceRoute;                //@synthesize primaryOutputDeviceRoute=_primaryOutputDeviceRoute - In the implementation block
@property (nonatomic,retain) MPAVOutputDeviceRoute * secondaryOutputDeviceRoute;              //@synthesize secondaryOutputDeviceRoute=_secondaryOutputDeviceRoute - In the implementation block
@property (assign,nonatomic) BOOL primaryInteractionEnabled;                                  //@synthesize primaryInteractionEnabled=_primaryInteractionEnabled - In the implementation block
@property (assign,nonatomic) BOOL secondaryInteractionEnabled;                                //@synthesize secondaryInteractionEnabled=_secondaryInteractionEnabled - In the implementation block
@property (nonatomic,readonly) BOOL isSplitRoute;                                             //@synthesize isSplitRoute=_isSplitRoute - In the implementation block
@property (nonatomic,copy) NSString * volumeAudioCategory;                                    //@synthesize volumeAudioCategory=_volumeAudioCategory - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isDefaultPackage:(id)arg1 ;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)setObservers:(NSHashTable *)arg1 ;
-(NSHashTable *)observers;
-(void)volumeController:(id)arg1 volumeControlAvailableDidChange:(BOOL)arg2 ;
-(void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2 ;
-(NSString *)volumeAudioCategory;
-(MPAVEndpointRoute *)systemRoute;
-(void)setVolumeAudioCategory:(NSString *)arg1 ;
-(BOOL)isSplitRoute;
-(void)setUserInteractionEnabled:(BOOL)arg1 forRouteType:(unsigned long long)arg2 ;
-(id)glyphStateForVolumeLevel:(double)arg1 packageName:(id)arg2 ;
-(void)logFailedSetBluetoothListeningMode:(id)arg1 forRouteType:(unsigned long long)arg2 ;
-(id)packageNameForRouteType:(unsigned long long)arg1 isRTL:(BOOL)arg2 isSlider:(BOOL)arg3 ;
-(float)volumeForRouteType:(unsigned long long)arg1 ;
-(id)routeNameForRouteType:(unsigned long long)arg1 ;
-(id)availableBluetoothListeningModeForRouteType:(unsigned long long)arg1 ;
-(id)currentBluetoothListeningModeForRouteType:(unsigned long long)arg1 ;
-(id)setCurrentBluetoothListeningModeForRouteType:(unsigned long long)arg1 bluetoothListeningMode:(id)arg2 ;
-(void)routeDidChangeNotification;
-(BOOL)_setupOutputDevicesAndVolumeControllersIfNeeded;
-(id)_packageNameForRoute:(id)arg1 isRTL:(BOOL)arg2 isSlider:(BOOL)arg3 ;
-(void)_notifyUserInteractionEnabledChanged:(BOOL)arg1 routeType:(unsigned long long)arg2 ;
-(void)_notifyVolumeChangedForVolumeController:(id)arg1 volumeControlAvailable:(BOOL)arg2 effectiveVolume:(float)arg3 ;
-(unsigned long long)_routeForVolumeController:(id)arg1 ;
-(id)_volumePackageNameForRTL:(BOOL)arg1 ;
-(BOOL)volumeControlAvailableForRouteType:(unsigned long long)arg1 ;
-(void)setVolume:(float)arg1 forRouteType:(unsigned long long)arg2 ;
-(BOOL)userInteractionEnabledForRouteType:(unsigned long long)arg1 ;
-(void)setSystemRoute:(MPAVEndpointRoute *)arg1 ;
-(MPVolumeController *)systemVolumeController;
-(void)setSystemVolumeController:(MPVolumeController *)arg1 ;
-(MPVolumeController *)primaryVolumeController;
-(void)setPrimaryVolumeController:(MPVolumeController *)arg1 ;
-(MPVolumeController *)secondaryVolumeController;
-(void)setSecondaryVolumeController:(MPVolumeController *)arg1 ;
-(MPAVOutputDeviceRoute *)systemOutputDeviceRoute;
-(void)setSystemOutputDeviceRoute:(MPAVOutputDeviceRoute *)arg1 ;
-(MPAVOutputDeviceRoute *)primaryOutputDeviceRoute;
-(void)setPrimaryOutputDeviceRoute:(MPAVOutputDeviceRoute *)arg1 ;
-(MPAVOutputDeviceRoute *)secondaryOutputDeviceRoute;
-(void)setSecondaryOutputDeviceRoute:(MPAVOutputDeviceRoute *)arg1 ;
-(BOOL)primaryInteractionEnabled;
-(void)setPrimaryInteractionEnabled:(BOOL)arg1 ;
-(BOOL)secondaryInteractionEnabled;
-(void)setSecondaryInteractionEnabled:(BOOL)arg1 ;
@end

