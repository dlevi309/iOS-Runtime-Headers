/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
*/

#import <libobjc.A.dylib/MPVolumeControllerDelegate.h>
#import <libobjc.A.dylib/MPRequestResponseControllerDelegate.h>

@class NSString, MPAVEndpointRoute, NSHashTable, MPVolumeController, MPAVOutputDeviceRoute, MPRequestResponseController;

@interface MediaControlsVolumeController : NSObject <MPVolumeControllerDelegate, MPRequestResponseControllerDelegate> {

	BOOL _isSplitRoute;
	BOOL _supportsHeadTrackedSpatialAudio;
	BOOL _headTrackedSpatialAudioEnabled;
	BOOL _headTrackedSpatialAudioActive;
	BOOL _automaticResponseLoading;
	BOOL _primaryInteractionEnabled;
	BOOL _secondaryInteractionEnabled;
	int _headTrackedSpatialAudioNotificationToken;
	NSString* _volumeAudioCategory;
	MPAVEndpointRoute* _systemRoute;
	NSHashTable* _observers;
	MPVolumeController* _systemVolumeController;
	MPVolumeController* _primaryVolumeController;
	MPVolumeController* _secondaryVolumeController;
	MPAVOutputDeviceRoute* _systemOutputDeviceRoute;
	MPAVOutputDeviceRoute* _primaryOutputDeviceRoute;
	MPAVOutputDeviceRoute* _secondaryOutputDeviceRoute;
	MPRequestResponseController* _requestController;

}

@property (nonatomic,retain) MPAVEndpointRoute * systemRoute;                                                          //@synthesize systemRoute=_systemRoute - In the implementation block
@property (nonatomic,retain) NSHashTable * observers;                                                                  //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) MPVolumeController * systemVolumeController;                                              //@synthesize systemVolumeController=_systemVolumeController - In the implementation block
@property (nonatomic,retain) MPVolumeController * primaryVolumeController;                                             //@synthesize primaryVolumeController=_primaryVolumeController - In the implementation block
@property (nonatomic,retain) MPVolumeController * secondaryVolumeController;                                           //@synthesize secondaryVolumeController=_secondaryVolumeController - In the implementation block
@property (nonatomic,retain) MPAVOutputDeviceRoute * systemOutputDeviceRoute;                                          //@synthesize systemOutputDeviceRoute=_systemOutputDeviceRoute - In the implementation block
@property (nonatomic,retain) MPAVOutputDeviceRoute * primaryOutputDeviceRoute;                                         //@synthesize primaryOutputDeviceRoute=_primaryOutputDeviceRoute - In the implementation block
@property (nonatomic,retain) MPAVOutputDeviceRoute * secondaryOutputDeviceRoute;                                       //@synthesize secondaryOutputDeviceRoute=_secondaryOutputDeviceRoute - In the implementation block
@property (nonatomic,retain) MPRequestResponseController * requestController;                                          //@synthesize requestController=_requestController - In the implementation block
@property (assign,nonatomic) BOOL primaryInteractionEnabled;                                                           //@synthesize primaryInteractionEnabled=_primaryInteractionEnabled - In the implementation block
@property (assign,nonatomic) BOOL secondaryInteractionEnabled;                                                         //@synthesize secondaryInteractionEnabled=_secondaryInteractionEnabled - In the implementation block
@property (assign,nonatomic) int headTrackedSpatialAudioNotificationToken;                                             //@synthesize headTrackedSpatialAudioNotificationToken=_headTrackedSpatialAudioNotificationToken - In the implementation block
@property (nonatomic,readonly) BOOL isSplitRoute;                                                                      //@synthesize isSplitRoute=_isSplitRoute - In the implementation block
@property (nonatomic,readonly) BOOL supportsHeadTrackedSpatialAudio;                                                   //@synthesize supportsHeadTrackedSpatialAudio=_supportsHeadTrackedSpatialAudio - In the implementation block
@property (assign,getter=isHeadTrackedSpatialAudioEnabled,nonatomic) BOOL headTrackedSpatialAudioEnabled;              //@synthesize headTrackedSpatialAudioEnabled=_headTrackedSpatialAudioEnabled - In the implementation block
@property (getter=isHeadTrackedSpatialAudioActive,nonatomic,readonly) BOOL headTrackedSpatialAudioActive;              //@synthesize headTrackedSpatialAudioActive=_headTrackedSpatialAudioActive - In the implementation block
@property (nonatomic,copy) NSString * volumeAudioCategory;                                                             //@synthesize volumeAudioCategory=_volumeAudioCategory - In the implementation block
@property (assign,getter=isAutomaticResponseLoading,nonatomic) BOOL automaticResponseLoading;                          //@synthesize automaticResponseLoading=_automaticResponseLoading - In the implementation block
@property (getter=isPlaying,nonatomic,readonly) BOOL playing; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isDefaultPackage:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(BOOL)isHeadTrackedSpatialAudioActive;
-(MPAVEndpointRoute *)systemRoute;
-(BOOL)supportsHeadTrackedSpatialAudio;
-(BOOL)isPlaying;
-(void)volumeController:(id)arg1 volumeValueDidChange:(float)arg2 ;
-(NSString *)volumeAudioCategory;
-(MPRequestResponseController *)requestController;
-(NSHashTable *)observers;
-(id)init;
-(void)controller:(id)arg1 defersResponseReplacement:(/*^block*/id)arg2 ;
-(void)setAutomaticResponseLoading:(BOOL)arg1 ;
-(BOOL)isAutomaticResponseLoading;
-(void)setObservers:(NSHashTable *)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(BOOL)isSplitRoute;
-(void)volumeController:(id)arg1 volumeControlAvailableDidChange:(BOOL)arg2 ;
-(void)setVolumeAudioCategory:(NSString *)arg1 ;
-(void)dealloc;
-(void)setRequestController:(MPRequestResponseController *)arg1 ;
-(void)beginObservingHeadTrackedSpatialAudioEnabledNotification;
-(void)setUserInteractionEnabled:(BOOL)arg1 forRouteType:(long long)arg2 ;
-(void)endObservingHeadTrackedSpatialAudioEnabledNotification;
-(id)glyphStateForVolumeLevel:(double)arg1 packageName:(id)arg2 ;
-(BOOL)isHeadTrackedSpatialAudioEnabled;
-(id)outputContextDescription;
-(void)setHeadTrackedSpatialAudioEnabled:(BOOL)arg1 ;
-(void)logFailedSetBluetoothListeningMode:(id)arg1 forRouteType:(long long)arg2 ;
-(id)packageNameForRouteType:(long long)arg1 isRTL:(BOOL)arg2 isSlider:(BOOL)arg3 ;
-(float)volumeForRouteType:(long long)arg1 ;
-(id)routeNameForRouteType:(long long)arg1 ;
-(id)availableBluetoothListeningModeForRouteType:(long long)arg1 ;
-(id)currentBluetoothListeningModeForRouteType:(long long)arg1 ;
-(id)setCurrentBluetoothListeningModeForRouteType:(long long)arg1 bluetoothListeningMode:(id)arg2 ;
-(void)routeDidChangeNotification;
-(BOOL)_setupOutputDevicesAndVolumeControllersIfNeeded;
-(id)_packageNameForRoute:(id)arg1 isRTL:(BOOL)arg2 isSlider:(BOOL)arg3 ;
-(void)_notifyUserInteractionEnabledChanged:(BOOL)arg1 routeType:(long long)arg2 ;
-(void)_updateHeadTrackedSpatialAudioEnabled;
-(void)_notifyVolumeChangedForVolumeController:(id)arg1 volumeControlAvailable:(BOOL)arg2 effectiveVolume:(float)arg3 ;
-(long long)_routeForVolumeController:(id)arg1 ;
-(id)_volumePackageNameForClusterRoute:(id)arg1 isRTL:(BOOL)arg2 ;
-(id)_volumePackageNameForRTL:(BOOL)arg1 ;
-(BOOL)volumeControlAvailableForRouteType:(long long)arg1 ;
-(void)setVolume:(float)arg1 forRouteType:(long long)arg2 ;
-(BOOL)userInteractionEnabledForRouteType:(long long)arg1 ;
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
-(int)headTrackedSpatialAudioNotificationToken;
-(void)setHeadTrackedSpatialAudioNotificationToken:(int)arg1 ;
@end

