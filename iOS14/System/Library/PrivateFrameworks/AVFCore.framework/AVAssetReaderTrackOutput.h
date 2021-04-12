/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetReaderOutput.h>

@class AVAssetReaderTrackOutputInternal, AVAssetTrack, NSDictionary, NSString;

@interface AVAssetReaderTrackOutput : AVAssetReaderOutput {

	AVAssetReaderTrackOutputInternal* _trackOutputInternal;

}

@property (getter=_isAttachedToAdaptor,nonatomic,readonly) BOOL attachedToAdaptor; 
@property (nonatomic,readonly) AVAssetTrack * track; 
@property (nonatomic,readonly) NSDictionary * outputSettings; 
@property (nonatomic,copy) NSString * audioTimePitchAlgorithm; 
+(id)assetReaderTrackOutputWithTrack:(id)arg1 outputSettings:(id)arg2 ;
-(id)_asset;
-(BOOL)_trimsSampleDurations;
-(BOOL)_enableTrackExtractionReturningError:(id*)arg1 ;
-(id)_figAssetReaderExtractionOptions;
-(id)initWithTrack:(id)arg1 outputSettings:(id)arg2 ;
-(id)_formatDescriptions;
-(unsigned)_getUniformMediaSubtypeIfExists;
-(AVAssetTrack *)track;
-(void)_setAttachedAdaptor:(id)arg1 ;
-(id)mediaType;
-(id)init;
-(NSDictionary *)outputSettings;
-(id)description;
-(void)setAppliesPreferredTrackTransform:(BOOL)arg1 ;
-(NSString *)audioTimePitchAlgorithm;
-(BOOL)appliesPreferredTrackTransform;
-(opaqueCMSampleBufferRef)copyNextSampleBuffer;
-(opaqueCMSampleBufferRef)_copyNextSampleBufferForAdaptor;
-(void)setAudioTimePitchAlgorithm:(NSString *)arg1 ;
-(BOOL)_isAttachedToAdaptor;
-(id)_attachedAdaptor;
-(void)dealloc;
@end

