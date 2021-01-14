/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

@class NSString, NSArray, NSNumber;


@protocol VCSessionDownlinkBandwidthAllocatorClient
@property (readonly) NSString * uuid; 
@property (readonly) NSArray * mediaEntries; 
@property (readonly) unsigned actualNetworkBitrateVideo; 
@property (readonly) unsigned actualNetworkBitrateAudio; 
@property (readonly) unsigned optedInNetworkBitrateVideo; 
@property (readonly) unsigned optedInNetworkBitrateAudio; 
@property (readonly) NSNumber * optedInVideoStreamID; 
@property (readonly) NSNumber * optedInAudioStreamID; 
@property (readonly) unsigned short activeDownlinkVideoStreamID; 
@property (readonly) unsigned short activeDownlinkAudioStreamID; 
@property (readonly) unsigned char videoQuality; 
@property (readonly) unsigned visibilityIndex; 
@property (readonly) unsigned prominenceIndex; 
@property (readonly) BOOL isVisible; 
@property (assign,getter=isVideoSuspended,nonatomic) BOOL videoSuspended; 
@required
-(NSString *)uuid;
-(BOOL)isVisible;
-(unsigned char)videoQuality;
-(unsigned)visibilityIndex;
-(unsigned)prominenceIndex;
-(void)setVideoSuspended:(BOOL)arg1;
-(NSArray *)mediaEntries;
-(unsigned)actualNetworkBitrateVideo;
-(unsigned)actualNetworkBitrateAudio;
-(unsigned)optedInNetworkBitrateVideo;
-(unsigned)optedInNetworkBitrateAudio;
-(NSNumber *)optedInVideoStreamID;
-(NSNumber *)optedInAudioStreamID;
-(unsigned short)activeDownlinkVideoStreamID;
-(unsigned short)activeDownlinkAudioStreamID;
-(BOOL)isVideoSuspended;

@end

