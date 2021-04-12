/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVAssetReaderOutput.h>

@class AVAssetReaderSampleReferenceOutputInternal, AVAssetTrack;

@interface AVAssetReaderSampleReferenceOutput : AVAssetReaderOutput {

	AVAssetReaderSampleReferenceOutputInternal* _sampleReferenceOutputInternal;

}

@property (nonatomic,readonly) AVAssetTrack * track; 
+(id)assetReaderSampleReferenceOutputWithTrack:(id)arg1 ;
-(id)_asset;
-(BOOL)_trimsSampleDurations;
-(BOOL)_enableTrackExtractionReturningError:(id*)arg1 ;
-(id)initWithTrack:(id)arg1 ;
-(AVAssetTrack *)track;
-(id)mediaType;
-(id)init;
-(id)description;
-(void)dealloc;
@end

