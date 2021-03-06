/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/


#import <SpringBoardFoundation/SpringBoardFoundation-Structs.h>
@interface SBFCARendererImpl : NSObject
+(id)luminanceTreatmentFilters;
+(id)_actuallyRenderImage:(CGImageRef)arg1 requiresBGRA:(BOOL)arg2 downsampleFactor:(double)arg3 layerCustomizer:(/*^block*/id)arg4 ;
+(id)renderTreatedWallpaperImage:(CGImageRef)arg1 needsLuminanceTreatment:(BOOL)arg2 needsDimmingTreatment:(BOOL)arg3 downsampleFactor:(double)arg4 averageColor:(id)arg5 ;
+(id)renderMaterialImage:(CGImageRef)arg1 recipeName:(id)arg2 containingBundle:(id)arg3 weighting:(double)arg4 downsampleFactor:(double)arg5 ;
@end

