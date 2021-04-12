/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MROutputContextDataSource.h>

@protocol OS_dispatch_queue;
@class MRAVOutputContext, NSMutableDictionary, NSObject, NSString;

@interface MROutputContextController : MROutputContextDataSource {

	MRAVOutputContext* _outputContext;
	float _masterVolume;
	unsigned _masterVolumeControlCapabilities;
	BOOL _localVolumeInitialized;
	BOOL _localVolumeControlCapabilitiesInitialized;
	NSMutableDictionary* _outputDeviceVolume;
	NSObject*<OS_dispatch_queue> _serialQueue;
	float _localVolume;
	unsigned _localVolumeControlCapabilities;

}

@property (assign,nonatomic) float localVolume;                                    //@synthesize localVolume=_localVolume - In the implementation block
@property (assign,nonatomic) unsigned localVolumeControlCapabilities;              //@synthesize localVolumeControlCapabilities=_localVolumeControlCapabilities - In the implementation block
@property (nonatomic,readonly) NSString * localDeviceUID; 
+(id)sharedOutputContextController;
-(void)dealloc;
-(id)description;
-(id)uniqueIdentifier;
-(void)_registerNotifications;
-(float)volume;
-(id)outputDevices;
-(NSString *)localDeviceUID;
-(id)initWithOutputContext:(id)arg1 ;
-(id)setVolume:(float)arg1 outputDeviceUID:(id)arg2 ;
-(float)volumeForOutputDeviceUID:(id)arg1 ;
-(unsigned)volumeControlCapabilitiesForOutputDeviceUID:(id)arg1 ;
-(unsigned)volumeControlCapabilities;
-(void)_inititalizeVolume;
-(id)_onSerialQueue_localOutputDevice;
-(BOOL)_onSerialQueue_isLocalOutputDevice:(id)arg1 ;
-(void)setLocalVolume:(float)arg1 ;
-(void)setLocalVolumeControlCapabilities:(unsigned)arg1 ;
-(void)_onSerialQueue_reevaluateMasterVolume;
-(void)_onSerialQueue_reevaluateMasterVolumeControlCapabilities;
-(float)_onSerialQueue_calculateMasterVolume;
-(unsigned)_onSerialQueue_calculateMasterVolumeCapabilities;
-(void)_handleLocalDeviceVolumeDidChangeNotification:(id)arg1 ;
-(void)_handleLocalDeviceVolumeControlCapabilitiesDidChangeNotification:(id)arg1 ;
-(void)_handleOutputDeviceVolumeDidChangeNotification:(id)arg1 ;
-(void)_handleOutputDeviceVolumeControlCapabilitiesDidChangeNotification:(id)arg1 ;
-(void)_handleOutputDeviceAddedNotification:(id)arg1 ;
-(void)_handleOutputDeviceRemovedNotification:(id)arg1 ;
-(float)localVolume;
-(unsigned)localVolumeControlCapabilities;
@end

