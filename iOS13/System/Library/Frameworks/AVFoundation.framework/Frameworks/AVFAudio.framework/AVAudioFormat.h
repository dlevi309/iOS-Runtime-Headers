/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/

#import <AVFAudio/AVFAudio-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class AVAudioChannelLayout, NSData, NSDictionary;

@interface AVAudioFormat : NSObject <NSSecureCoding> {

	AudioStreamBasicDescription _asbd;
	AVAudioChannelLayout* _layout;
	unsigned long long _commonFormat;
	void* _reserved;

}

@property (getter=isStandard,nonatomic,readonly) BOOL standard; 
@property (nonatomic,readonly) unsigned long long commonFormat; 
@property (nonatomic,readonly) unsigned channelCount; 
@property (nonatomic,readonly) double sampleRate; 
@property (getter=isInterleaved,nonatomic,readonly) BOOL interleaved; 
@property (nonatomic,readonly) const AudioStreamBasicDescription* streamDescription; 
@property (nonatomic,readonly) AVAudioChannelLayout * channelLayout; 
@property (nonatomic,retain) NSData * magicCookie; 
@property (nonatomic,readonly) NSDictionary * settings; 
@property (nonatomic,readonly) const opaqueCMFormatDescriptionRef formatDescription; 
+(BOOL)supportsSecureCoding;
+(id)settingsFromASBD:(const AudioStreamBasicDescription*)arg1 channelLayout:(id)arg2 ;
+(id)formatWithInvalidSampleRateAndChannelCount;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithSettings:(id)arg1 ;
-(NSDictionary *)settings;
-(double)sampleRate;
-(const AudioStreamBasicDescription*)streamDescription;
-(id)initStandardFormatWithSampleRate:(double)arg1 channels:(unsigned)arg2 ;
-(id)initWithStreamDescription:(const AudioStreamBasicDescription*)arg1 ;
-(const opaqueCMFormatDescriptionRef)formatDescription;
-(unsigned)channelCount;
-(NSData *)magicCookie;
-(void)setMagicCookie:(NSData *)arg1 ;
-(id)initWithStreamDescription:(const AudioStreamBasicDescription*)arg1 channelLayout:(id)arg2 ;
-(id)initStandardFormatWithSampleRate:(double)arg1 channelLayout:(id)arg2 ;
-(id)initWithCommonFormat:(unsigned long long)arg1 sampleRate:(double)arg2 channels:(unsigned)arg3 interleaved:(BOOL)arg4 ;
-(id)initWithCommonFormat:(unsigned long long)arg1 sampleRate:(double)arg2 interleaved:(BOOL)arg3 channelLayout:(id)arg4 ;
-(id)initWithCMAudioFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(AVAudioChannelLayout *)channelLayout;
-(BOOL)isStandard;
-(unsigned long long)commonFormat;
-(BOOL)isInterleaved;
@end

