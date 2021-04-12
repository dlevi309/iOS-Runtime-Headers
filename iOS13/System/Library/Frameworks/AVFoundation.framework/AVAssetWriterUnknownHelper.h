/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVAssetWriterHelper.h>

@interface AVAssetWriterUnknownHelper : AVAssetWriterHelper {

	short _alternateGroupID;

}
-(void)setDelegate:(id)arg1 ;
-(long long)status;
-(void)setMetadata:(id)arg1 ;
-(BOOL)canAddInput:(id)arg1 ;
-(void)addInput:(id)arg1 ;
-(void)startWriting;
-(void)setPreferredTransform:(CGAffineTransform)arg1 ;
-(void)setPreferredVolume:(float)arg1 ;
-(void)setMovieFragmentInterval:(SCD_Struct_AV7)arg1 ;
-(void)setOverallDurationHint:(SCD_Struct_AV7)arg1 ;
-(void)setShouldOptimizeForNetworkUse:(BOOL)arg1 ;
-(void)setDirectoryForTemporaryFiles:(id)arg1 ;
-(void)setMovieTimeScale:(int)arg1 ;
-(void)setPreferredRate:(float)arg1 ;
-(void)setSinglePassFileSize:(long long)arg1 ;
-(void)setSinglePassMediaDataSize:(long long)arg1 ;
-(id)initWithURL:(id)arg1 fileType:(id)arg2 ;
-(BOOL)canAddInputGroup:(id)arg1 ;
-(void)addInputGroup:(id)arg1 ;
-(void)cancelWriting;
-(id)initWithConfigurationState:(id)arg1 ;
-(BOOL)_canAddInput:(id)arg1 exceptionReason:(id*)arg2 ;
-(BOOL)_canAddInputGroup:(id)arg1 exceptionReason:(id*)arg2 ;
@end

