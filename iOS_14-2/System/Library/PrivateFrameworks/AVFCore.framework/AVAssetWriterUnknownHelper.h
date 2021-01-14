/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVAssetWriterHelper.h>

@interface AVAssetWriterUnknownHelper : AVAssetWriterHelper {

	short _alternateGroupID;

}
-(void)setShouldOptimizeForNetworkUse:(BOOL)arg1 ;
-(BOOL)_canAddInputGroup:(id)arg1 exceptionReason:(id*)arg2 ;
-(void)addInputGroup:(id)arg1 ;
-(void)setOutputFileTypeProfile:(id)arg1 ;
-(id)initWithURL:(id)arg1 fileType:(id)arg2 ;
-(void)cancelWriting;
-(void)setProducesCombinableFragments:(BOOL)arg1 ;
-(void)setMetadata:(id)arg1 ;
-(BOOL)canAddInputGroup:(id)arg1 ;
-(void)setDelegate:(id)arg1 ;
-(void)setDirectoryForTemporaryFiles:(id)arg1 ;
-(BOOL)_canAddInput:(id)arg1 exceptionReason:(id*)arg2 ;
-(void)setPreferredVolume:(float)arg1 ;
-(void)setMovieTimeScale:(int)arg1 ;
-(void)startWriting;
-(void)setOverallDurationHint:(SCD_Struct_AV6)arg1 ;
-(BOOL)canAddInput:(id)arg1 ;
-(void)setInitialMovieFragmentSequenceNumber:(long long)arg1 ;
-(void)setInitialSegmentStartTime:(SCD_Struct_AV6)arg1 ;
-(void)addInput:(id)arg1 ;
-(void)setSinglePassFileSize:(long long)arg1 ;
-(void)setMovieFragmentInterval:(SCD_Struct_AV6)arg1 ;
-(void)setDefaultPropertyValuesToConfigurationState:(id)arg1 outputURL:(id)arg2 fileType:(id)arg3 ;
-(void)setPreferredRate:(float)arg1 ;
-(void)setPreferredOutputSegmentInterval:(SCD_Struct_AV6)arg1 ;
-(void)setPreferredTransform:(CGAffineTransform)arg1 ;
-(void)setSinglePassMediaDataSize:(long long)arg1 ;
-(long long)status;
-(id)initWithConfigurationState:(id)arg1 ;
@end

