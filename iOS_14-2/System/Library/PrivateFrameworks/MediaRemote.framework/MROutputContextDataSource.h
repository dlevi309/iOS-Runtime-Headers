/*
* Generated on Thursday, January 14, 2021 at 2:21:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)outputDeviceForUID:(id)arg1 ;
-(NSString *)uniqueIdentifier;
-(unsigned)volumeControlCapabilities;
-(id)description;
-(NSArray *)outputDevices;
-(float)volume;
-(BOOL)isAirPlaying;
@end

