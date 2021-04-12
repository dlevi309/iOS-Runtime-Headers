/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/Frameworks/AVFAudio.framework/AVFAudio
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSURL, AVAudioDeviceTestProcessingChain, NSString;

@interface AVAudioDeviceTestSequence : NSObject <NSSecureCoding> {

	BOOL _calculateCrossCorrelationPeak;
	float _volume;
	long long _outputID;
	NSURL* _stimulusURL;
	AVAudioDeviceTestProcessingChain* _inputProcessingChain;
	AVAudioDeviceTestProcessingChain* _outputProcessingChain;
	long long _outputMode;
	NSString* _mode;

}

@property (assign,nonatomic) long long outputID;                                                    //@synthesize outputID=_outputID - In the implementation block
@property (assign,nonatomic) float volume;                                                          //@synthesize volume=_volume - In the implementation block
@property (nonatomic,retain) NSURL * stimulusURL;                                                   //@synthesize stimulusURL=_stimulusURL - In the implementation block
@property (nonatomic,retain) AVAudioDeviceTestProcessingChain * inputProcessingChain;               //@synthesize inputProcessingChain=_inputProcessingChain - In the implementation block
@property (nonatomic,retain) AVAudioDeviceTestProcessingChain * outputProcessingChain;              //@synthesize outputProcessingChain=_outputProcessingChain - In the implementation block
@property (assign,nonatomic) long long outputMode;                                                  //@synthesize outputMode=_outputMode - In the implementation block
@property (retain) NSString * mode;                                                                 //@synthesize mode=_mode - In the implementation block
@property (assign) BOOL calculateCrossCorrelationPeak;                                              //@synthesize calculateCrossCorrelationPeak=_calculateCrossCorrelationPeak - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setMode:(NSString *)arg1 ;
-(NSString *)mode;
-(void)setOutputMode:(long long)arg1 ;
-(long long)outputMode;
-(float)volume;
-(void)setVolume:(float)arg1 ;
-(long long)outputID;
-(void)setOutputID:(long long)arg1 ;
-(NSURL *)stimulusURL;
-(void)setStimulusURL:(NSURL *)arg1 ;
-(AVAudioDeviceTestProcessingChain *)inputProcessingChain;
-(void)setInputProcessingChain:(AVAudioDeviceTestProcessingChain *)arg1 ;
-(AVAudioDeviceTestProcessingChain *)outputProcessingChain;
-(void)setOutputProcessingChain:(AVAudioDeviceTestProcessingChain *)arg1 ;
-(BOOL)calculateCrossCorrelationPeak;
-(void)setCalculateCrossCorrelationPeak:(BOOL)arg1 ;
@end

