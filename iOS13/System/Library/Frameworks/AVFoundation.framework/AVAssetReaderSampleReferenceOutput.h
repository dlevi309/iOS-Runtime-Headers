/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVAssetReaderOutput.h>

@class AVAssetReaderSampleReferenceOutputInternal, AVAssetTrack;

@interface AVAssetReaderSampleReferenceOutput : AVAssetReaderOutput {

	AVAssetReaderSampleReferenceOutputInternal* _sampleReferenceOutputInternal;

}

@property (nonatomic,readonly) AVAssetTrack * track; 
+(id)assetReaderSampleReferenceOutputWithTrack:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)mediaType;
-(id)_asset;
-(id)initWithTrack:(id)arg1 ;
-(AVAssetTrack *)track;
-(BOOL)_trimsSampleDurations;
-(BOOL)_enableTrackExtractionReturningError:(id*)arg1 ;
@end

