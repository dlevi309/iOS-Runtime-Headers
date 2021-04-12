/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSDRep.h>

@interface TSDPartitionedPartialRep : TSDRep
-(void)drawInContext:(CGContextRef)arg1 ;
-(void)willBeRemoved;
-(BOOL)directlyManagesLayerContent;
-(void)didUpdateLayer:(id)arg1 ;
-(CGRect)layerFrameInScaledCanvas;
-(CGRect)clipRect;
-(id)initWithLayout:(id)arg1 canvas:(id)arg2 ;
-(void)addBitmapsToRenderingQualityInfo:(id)arg1 inContext:(CGContextRef)arg2 ;
-(id)i_queueForTileProvider;
-(UIEdgeInsets)p_edgeInsetsForClipping;
-(CGImageRef)p_newImageForCachingBaseRep;
-(CGRect)p_clipRect;
-(CGRect)p_convertBaseToNaturalRect:(CGRect)arg1 ;
-(void)resetCachedPartitionedRendering;
@end

