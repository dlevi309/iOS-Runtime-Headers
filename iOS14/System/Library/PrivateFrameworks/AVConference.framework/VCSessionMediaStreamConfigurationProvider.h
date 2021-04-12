/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


#import <AVConference/AVConference-Structs.h>
@class NSMutableArray, NSArray;

@interface VCSessionMediaStreamConfigurationProvider : NSObject {

	NSMutableArray* _allocatedStreamIDs;
	NSMutableArray* _audioStreamConfigurations;
	NSMutableArray* _videoStreamConfigurations;
	long long _highestEncodingResolution;
	BOOL _isEncodingSqaures;

}

@property (nonatomic,readonly) NSArray * audioStreamConfigurations;              //@synthesize audioStreamConfigurations=_audioStreamConfigurations - In the implementation block
@property (nonatomic,readonly) NSArray * videoStreamConfigurations;              //@synthesize videoStreamConfigurations=_videoStreamConfigurations - In the implementation block
@property (nonatomic,readonly) long long highestEncodingResolution;              //@synthesize highestEncodingResolution=_highestEncodingResolution - In the implementation block
@property (nonatomic,readonly) BOOL isEncodingSqaures;                           //@synthesize isEncodingSqaures=_isEncodingSqaures - In the implementation block
+(BOOL)isVideoStreamOnDemand:(VCMediaStreamConfigurationProviderVideo*)arg1 ;
+(void)computeMaxNetworkBitrate:(unsigned*)arg1 maxMediaBitrate:(unsigned*)arg2 maxPacketsPerSecond:(float*)arg3 audioStreamIndex:(unsigned)arg4 ;
+(BOOL)isAudioStreamOnDemand:(VCMediaStreamConfigurationProviderAudio*)arg1 ;
-(id)init;
-(void)dealloc;
-(unsigned short)generateStreamID;
-(NSArray *)audioStreamConfigurations;
-(NSArray *)videoStreamConfigurations;
-(BOOL)initializeStreams;
-(BOOL)initializeAudioStreams;
-(BOOL)initializeVideoStreams;
-(BOOL)initializeVideoStreamWithConfig:(VCMediaStreamConfigurationProviderVideo*)arg1 streamIndex:(unsigned)arg2 ;
-(BOOL)initializeVideoStreamWithDefaults;
-(int)streamPayloadFromProviderConfig:(VCMediaStreamConfigurationProviderVideo*)arg1 ;
-(BOOL)initializeAudioStreamWithIndex:(unsigned)arg1 supportedAudioRules:(id)arg2 ;
-(id)audioRuleCollectionWithAudioConfig:(VCMediaStreamConfigurationProviderAudio*)arg1 supportedAudioRules:(id)arg2 ;
-(long long)highestEncodingResolution;
-(BOOL)isEncodingSqaures;
@end

