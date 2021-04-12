/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)formatWithInvalidSampleRateAndChannelCount;
+(id)settingsFromASBD:(const AudioStreamBasicDescription*)arg1 channelLayout:(id)arg2 ;
-(unsigned)channelCount;
-(BOOL)isInterleaved;
-(id)initStandardFormatWithSampleRate:(double)arg1 channelLayout:(id)arg2 ;
-(id)initWithSettings:(id)arg1 ;
-(unsigned long long)commonFormat;
-(id)initWithStreamDescription:(const AudioStreamBasicDescription*)arg1 channelLayout:(id)arg2 ;
-(const opaqueCMFormatDescriptionRef)formatDescription;
-(const AudioStreamBasicDescription*)streamDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setMagicCookie:(NSData *)arg1 ;
-(id)initWithCMAudioFormatDescription:(opaqueCMFormatDescriptionRef)arg1 ;
-(id)initWithStreamDescription:(const AudioStreamBasicDescription*)arg1 ;
-(id)description;
-(id)initWithCommonFormat:(unsigned long long)arg1 sampleRate:(double)arg2 channels:(unsigned)arg3 interleaved:(BOOL)arg4 ;
-(NSDictionary *)settings;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initStandardFormatWithSampleRate:(double)arg1 channels:(unsigned)arg2 ;
-(BOOL)isStandard;
-(AVAudioChannelLayout *)channelLayout;
-(double)sampleRate;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(id)initWithCommonFormat:(unsigned long long)arg1 sampleRate:(double)arg2 interleaved:(BOOL)arg3 channelLayout:(id)arg4 ;
-(NSData *)magicCookie;
@end

