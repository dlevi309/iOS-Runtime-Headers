/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVFoundation-Structs.h>
#import <AVFoundation/AVComposition.h>

@class AVMutableCompositionInternal, NSArray;

@interface AVMutableComposition : AVComposition {

	AVMutableCompositionInternal* _mutablePriv;

}

@property (nonatomic,readonly) NSArray * tracks; 
@property (assign,nonatomic) CGSize naturalSize; 
+(id)composition;
+(id)compositionWithURLAssetInitializationOptions:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setMetadata:(id)arg1 ;
-(id)tracksWithMediaType:(id)arg1 ;
-(CGSize)naturalSize;
-(NSArray *)tracks;
-(id)tracksWithMediaCharacteristic:(id)arg1 ;
-(id)trackWithTrackID:(int)arg1 ;
-(id)_initWithComposition:(id)arg1 ;
-(id)_newTrackForIndex:(long long)arg1 ;
-(void)_notifyTracksThatSegmentsWillChange:(id)arg1 ;
-(void)_notifyTracksThatSegmentsDidChange:(id)arg1 successfully:(BOOL)arg2 ;
-(void)setNaturalSize:(CGSize)arg1 ;
-(BOOL)insertTimeRange:(SCD_Struct_AV8)arg1 ofAsset:(id)arg2 atTime:(SCD_Struct_AV7)arg3 error:(id*)arg4 ;
-(void)insertEmptyTimeRange:(SCD_Struct_AV8)arg1 ;
-(void)removeTimeRange:(SCD_Struct_AV8)arg1 ;
-(void)scaleTimeRange:(SCD_Struct_AV8)arg1 toDuration:(SCD_Struct_AV7)arg2 ;
-(id)addMutableTrackWithMediaType:(id)arg1 preferredTrackID:(int)arg2 ;
-(void)removeTrack:(id)arg1 ;
-(id)mutableTrackCompatibleWithTrack:(id)arg1 ;
@end

