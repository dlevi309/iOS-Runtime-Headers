/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)localDeviceUID;
-(void)_handleOutputDeviceRemovedNotification:(id)arg1 ;
-(float)volumeForOutputDeviceUID:(id)arg1 ;
-(void)_handleOutputDeviceVolumeControlCapabilitiesDidChangeNotification:(id)arg1 ;
-(id)setVolume:(float)arg1 outputDeviceUID:(id)arg2 ;
-(unsigned)localVolumeControlCapabilities;
-(id)uniqueIdentifier;
-(unsigned)volumeControlCapabilities;
-(void)_handleOutputDeviceVolumeDidChangeNotification:(id)arg1 ;
-(void)_handleLocalDeviceVolumeControlCapabilitiesDidChangeNotification:(id)arg1 ;
-(id)description;
-(id)outputDevices;
-(void)setLocalVolumeControlCapabilities:(unsigned)arg1 ;
-(unsigned)volumeControlCapabilitiesForOutputDeviceUID:(id)arg1 ;
-(float)localVolume;
-(void)setLocalVolume:(float)arg1 ;
-(void)_handleOutputDeviceAddedNotification:(id)arg1 ;
-(float)volume;
-(void)_handleLocalDeviceVolumeDidChangeNotification:(id)arg1 ;
-(void)dealloc;
@end

