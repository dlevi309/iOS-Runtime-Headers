/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)updateVolume:(float)arg1 outputDeviceUID:(id)arg2 ;
-(void)updateOutputDevices:(id)arg1 ;
-(id)uniqueIdentifier;
-(unsigned)volumeControlCapabilities;
-(id)initWithUniqueIdentifier:(id)arg1 ;
-(void)updateVolumeControlCapabilities:(unsigned)arg1 outputDeviceUID:(id)arg2 ;
-(id)outputDevices;
-(void)removeOutputDevices:(id)arg1 ;
-(float)volume;
-(void)removeAllOutputDevices;
@end

