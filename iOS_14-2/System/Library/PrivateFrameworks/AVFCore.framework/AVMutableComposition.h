/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVFCore-Structs.h>
#import <AVFCore/AVComposition.h>

@class AVMutableCompositionInternal, NSArray;

@interface AVMutableComposition : AVComposition {

	AVMutableCompositionInternal* _mutablePriv;

}

@property (nonatomic,readonly) NSArray * tracks; 
@property (assign,nonatomic) CGSize naturalSize; 
+(id)composition;
+(id)compositionWithURLAssetInitializationOptions:(id)arg1 ;
-(CGSize)naturalSize;
-(NSArray *)tracks;
-(void)setNaturalSize:(CGSize)arg1 ;
-(void)setMetadata:(id)arg1 ;
-(id)trackWithTrackID:(int)arg1 ;
-(id)tracksWithMediaType:(id)arg1 ;
-(id)tracksWithMediaCharacteristic:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithComposition:(id)arg1 ;
-(id)_newTrackForIndex:(long long)arg1 ;
-(void)removeTimeRange:(SCD_Struct_AV7)arg1 ;
-(void)_notifyTracksThatSegmentsWillChange:(id)arg1 ;
-(void)insertEmptyTimeRange:(SCD_Struct_AV7)arg1 ;
-(void)_notifyTracksThatSegmentsDidChange:(id)arg1 successfully:(BOOL)arg2 ;
-(BOOL)insertTimeRange:(SCD_Struct_AV7)arg1 ofAsset:(id)arg2 atTime:(SCD_Struct_AV6)arg3 error:(id*)arg4 ;
-(void)scaleTimeRange:(SCD_Struct_AV7)arg1 toDuration:(SCD_Struct_AV6)arg2 ;
-(void)removeTrack:(id)arg1 ;
-(id)addMutableTrackWithMediaType:(id)arg1 preferredTrackID:(int)arg2 ;
-(id)mutableTrackCompatibleWithTrack:(id)arg1 ;
@end

