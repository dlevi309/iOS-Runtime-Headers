/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setVideoSuspended:(BOOL)arg1;

@end

