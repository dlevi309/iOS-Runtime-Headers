/*
* Generated on Monday, March 1, 2021 at 2:32:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaRemote.framework/MediaRemote
*/

#import <MediaRemote/MROutputContextDataSource.h>

@class NSString, NSMutableArray;

@interface MRExternalOutputContextDataSource : MROutputContextDataSource {

	NSString* _uniqueIdentifier;
	NSMutableArray* _outputDevices;
	float _masterVolume;
	unsigned _masterVolumeControlCapabilities;

}
-(id)uniqueIdentifier;
-(float)volume;
-(id)initWithUniqueIdentifier:(id)arg1 ;
-(id)outputDevices;
-(unsigned)volumeControlCapabilities;
-(void)_reevaluateMasterVolumeControlCapabilities;
-(void)_reevaluateMasterVolume;
-(void)removeOutputDevices:(id)arg1 ;
-(float)_calculateMasterVolume;
-(unsigned)_calculateMasterVolumeCapabilities;
-(void)updateOutputDevices:(id)arg1 ;
-(void)removeAllOutputDevices;
-(void)updateVolume:(float)arg1 outputDeviceUID:(id)arg2 ;
-(void)updateVolumeControlCapabilities:(unsigned)arg1 outputDeviceUID:(id)arg2 ;
@end

