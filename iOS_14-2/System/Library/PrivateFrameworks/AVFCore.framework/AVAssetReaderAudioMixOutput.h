/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetReaderOutput.h>

@class AVAssetReaderAudioMixOutputInternal, NSArray, NSDictionary, AVAudioMix, NSString;

@interface AVAssetReaderAudioMixOutput : AVAssetReaderOutput {

	AVAssetReaderAudioMixOutputInternal* _audioMixOutputInternal;

}

@property (nonatomic,readonly) NSArray * audioTracks; 
@property (nonatomic,readonly) NSDictionary * audioSettings; 
@property (nonatomic,copy) AVAudioMix * audioMix; 
@property (nonatomic,copy) NSString * audioTimePitchAlgorithm; 
+(id)assetReaderAudioMixOutputWithAudioTracks:(id)arg1 audioSettings:(id)arg2 ;
-(id)_asset;
-(NSArray *)audioTracks;
-(BOOL)_enableTrackExtractionReturningError:(id*)arg1 ;
-(NSDictionary *)audioSettings;
-(id)initWithAudioTracks:(id)arg1 audioSettings:(id)arg2 ;
-(void)_setAudioVolumeCurve:(id)arg1 forTrack:(id)arg2 ;
-(void)_setAudioTimePitchAlgorithm:(id)arg1 forTrack:(id)arg2 ;
-(void)_setAudioTapProcessor:(opaqueMTAudioProcessingTapRef)arg1 forTrack:(id)arg2 ;
-(id)_audioVolumeCurveForTrack:(id)arg1 ;
-(id)_audioTimePitchAlgorithmForTrack:(id)arg1 ;
-(opaqueMTAudioProcessingTapRef)_audioTapProcessorForTrack:(id)arg1 ;
-(id)mediaType;
-(id)init;
-(AVAudioMix *)audioMix;
-(id)description;
-(NSString *)audioTimePitchAlgorithm;
-(void)setAudioTimePitchAlgorithm:(NSString *)arg1 ;
-(void)setAudioMix:(AVAudioMix *)arg1 ;
-(void)dealloc;
@end

