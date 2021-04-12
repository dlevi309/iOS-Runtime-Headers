/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetReaderOutput.h>

@class AVAssetReaderAudioMixOutputInternal, NSArray, NSDictionary, AVAudioMix, NSString;

@interface AVAssetReaderAudioMixOutput : AVAssetReaderOutput {

	AVAssetReaderAudioMixOutputInternal* _audioMixOutputInternal;

}

@property (nonatomic,readonly) NSArray * audioTracks; 
@property (nonatomic,readonly) NSDictionary * audioSettings; 
@property (nonatomic,copy) AVAudioMix * audioMix; 
@property (nonatomic,copy) NSString * audioTimePitchAlgorithm; 
+(id)assetReaderAudioMixOutputWithAudioTracks:(id)arg1 audioSettings:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)mediaType;
-(id)_asset;
-(void)setAudioMix:(AVAudioMix *)arg1 ;
-(void)setAudioTimePitchAlgorithm:(NSString *)arg1 ;
-(AVAudioMix *)audioMix;
-(NSString *)audioTimePitchAlgorithm;
-(BOOL)_enableTrackExtractionReturningError:(id*)arg1 ;
-(NSArray *)audioTracks;
-(id)initWithAudioTracks:(id)arg1 audioSettings:(id)arg2 ;
-(NSDictionary *)audioSettings;
-(void)_setAudioVolumeCurve:(id)arg1 forTrack:(id)arg2 ;
-(void)_setAudioTimePitchAlgorithm:(id)arg1 forTrack:(id)arg2 ;
-(void)_setAudioTapProcessor:(opaqueMTAudioProcessingTapRef)arg1 forTrack:(id)arg2 ;
-(id)_audioVolumeCurveForTrack:(id)arg1 ;
-(id)_audioTimePitchAlgorithmForTrack:(id)arg1 ;
-(opaqueMTAudioProcessingTapRef)_audioTapProcessorForTrack:(id)arg1 ;
@end

