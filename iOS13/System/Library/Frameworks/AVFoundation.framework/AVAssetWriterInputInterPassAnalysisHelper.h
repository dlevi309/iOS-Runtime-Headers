/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetWriterInputHelper.h>

@class AVAssetWriterInputWritingHelper, AVAssetWriterInputPassDescription;

@interface AVAssetWriterInputInterPassAnalysisHelper : AVAssetWriterInputHelper {

	AVAssetWriterInputWritingHelper* _writingHelper;
	AVAssetWriterInputPassDescription* _initialPassDescription;

}
-(void)dealloc;
-(long long)status;
-(BOOL)isReadyForMoreMediaData;
-(void)stopRequestingMediaData;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(void)markAsFinished;
-(id)initWithConfigurationState:(id)arg1 ;
-(CVPixelBufferPoolRef)pixelBufferPool;
-(BOOL)canPerformMultiplePasses;
-(id)currentPassDescription;
-(BOOL)shouldRespondToInitialPassDescription;
-(long long)appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 error:(id*)arg2 ;
-(BOOL)appendPixelBuffer:(CVBufferRef)arg1 withPresentationTime:(SCD_Struct_AV7)arg2 ;
-(void)markCurrentPassAsFinished;
-(id)initWithWritingHelper:(id)arg1 ;
-(void)startPassAnalysis;
@end

