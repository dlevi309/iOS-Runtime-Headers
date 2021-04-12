/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/


@class NSArray, NSString;

@interface MROutputContextDataSource : NSObject {

	float _volume;
	unsigned _volumeControlCapabilities;
	NSArray* _outputDevices;
	NSString* _uniqueIdentifier;

}

@property (nonatomic,readonly) float volume;                                    //@synthesize volume=_volume - In the implementation block
@property (nonatomic,readonly) BOOL isAirPlaying; 
@property (nonatomic,readonly) unsigned volumeControlCapabilities;              //@synthesize volumeControlCapabilities=_volumeControlCapabilities - In the implementation block
@property (nonatomic,readonly) NSArray * outputDevices;                         //@synthesize outputDevices=_outputDevices - In the implementation block
@property (nonatomic,readonly) NSString * uniqueIdentifier;                     //@synthesize uniqueIdentifier=_uniqueIdentifier - In the implementation block
-(id)description;
-(NSString *)uniqueIdentifier;
-(float)volume;
-(NSArray *)outputDevices;
-(unsigned)volumeControlCapabilities;
-(BOOL)isAirPlaying;
-(id)outputDeviceForUID:(id)arg1 ;
-(void)notifyOutputDeviceAdded:(id)arg1 ;
-(void)notifyOutputDeviceRemoved:(id)arg1 ;
-(void)notifyVolumeDidChange:(float)arg1 outputDevice:(id)arg2 ;
-(void)notifyVolumeCapabilitiesDidChange:(unsigned)arg1 outputDevice:(id)arg2 ;
@end

