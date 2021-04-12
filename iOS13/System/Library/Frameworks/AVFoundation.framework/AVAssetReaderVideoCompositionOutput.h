/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVAssetReaderOutput.h>

@class AVAssetReaderVideoCompositionOutputInternal, NSArray, NSDictionary, AVVideoComposition;

@interface AVAssetReaderVideoCompositionOutput : AVAssetReaderOutput {

	AVAssetReaderVideoCompositionOutputInternal* _videoCompositionOutputInternal;

}

@property (nonatomic,readonly) NSArray * videoTracks; 
@property (nonatomic,readonly) NSDictionary * videoSettings; 
@property (nonatomic,copy) AVVideoComposition * videoComposition; 
@property (nonatomic,readonly) id<AVVideoCompositing> customVideoCompositor; 
+(id)assetReaderVideoCompositionOutputWithVideoTracks:(id)arg1 videoSettings:(id)arg2 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)mediaType;
-(id)_asset;
-(AVVideoComposition *)videoComposition;
-(void)_setVideoComposition:(id)arg1 customVideoCompositorSession:(id)arg2 ;
-(void)setVideoComposition:(AVVideoComposition *)arg1 ;
-(id<AVVideoCompositing>)customVideoCompositor;
-(id)_errorForOSStatus:(int)arg1 ;
-(BOOL)_prepareForReadingReturningError:(id*)arg1 ;
-(BOOL)alwaysCopiesSampleData;
-(BOOL)_enableTrackExtractionReturningError:(id*)arg1 ;
-(id)_formatDescriptions;
-(NSArray *)videoTracks;
-(id)initWithVideoTracks:(id)arg1 videoSettings:(id)arg2 ;
-(void)_setVideoComposition:(id)arg1 ;
-(id)_videoCompositionProcessorColorProperties;
-(NSDictionary *)videoSettings;
@end

