/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetReaderOutput.h>

@class AVAssetReaderTrackOutputInternal, AVAssetTrack, NSDictionary, NSString;

@interface AVAssetReaderTrackOutput : AVAssetReaderOutput {

	AVAssetReaderTrackOutputInternal* _trackOutputInternal;

}

@property (assign,nonatomic) BOOL appliesPreferredTrackTransform; 
@property (getter=_isAttachedToAdaptor,nonatomic,readonly) BOOL attachedToAdaptor; 
@property (nonatomic,readonly) AVAssetTrack * track; 
@property (nonatomic,readonly) NSDictionary * outputSettings; 
@property (nonatomic,copy) NSString * audioTimePitchAlgorithm; 
+(id)assetReaderTrackOutputWithTrack:(id)arg1 outputSettings:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)mediaType;
-(id)_asset;
-(NSDictionary *)outputSettings;
-(void)setAppliesPreferredTrackTransform:(BOOL)arg1 ;
-(opaqueCMSampleBufferRef)copyNextSampleBuffer;
-(void)setAudioTimePitchAlgorithm:(NSString *)arg1 ;
-(BOOL)appliesPreferredTrackTransform;
-(BOOL)_isAttachedToAdaptor;
-(void)_setAttachedAdaptor:(id)arg1 ;
-(AVAssetTrack *)track;
-(opaqueCMSampleBufferRef)_copyNextSampleBufferForAdaptor;
-(NSString *)audioTimePitchAlgorithm;
-(BOOL)_trimsSampleDurations;
-(BOOL)_enableTrackExtractionReturningError:(id*)arg1 ;
-(id)_figAssetReaderExtractionOptions;
-(id)initWithTrack:(id)arg1 outputSettings:(id)arg2 ;
-(id)_formatDescriptions;
-(unsigned)_getUniformMediaSubtypeIfExists;
-(id)_attachedAdaptor;
@end

