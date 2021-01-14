/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetWriterInputHelper.h>

@class AVAssetWriterInputWritingHelper;

@interface AVAssetWriterInputNoMorePassesHelper : AVAssetWriterInputHelper {

	AVAssetWriterInputWritingHelper* _writingHelper;

}
-(void)markCurrentPassAsFinished;
-(void)markAsFinished;
-(id)currentPassDescription;
-(void)stopRequestingMediaData;
-(id)initWithWritingHelper:(id)arg1 ;
-(BOOL)isReadyForMoreMediaData;
-(long long)appendSampleBuffer:(opaqueCMSampleBufferRef)arg1 error:(id*)arg2 ;
-(BOOL)appendPixelBuffer:(CVBufferRef)arg1 withPresentationTime:(SCD_Struct_AV6)arg2 ;
-(void)requestMediaDataWhenReadyOnQueue:(id)arg1 usingBlock:(/*^block*/id)arg2 ;
-(CVPixelBufferPoolRef)pixelBufferPool;
-(BOOL)canPerformMultiplePasses;
-(long long)status;
-(void)dealloc;
-(id)initWithConfigurationState:(id)arg1 ;
@end

