/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXVideoProcessingOperationSpec.h>

@class PXVideoStabilizationRecipeSource;

@interface PXVideoStabilizeOperationSpec : PXVideoProcessingOperationSpec {

	BOOL _performStabilization;
	BOOL _abortIfStabilizationFails;
	PXVideoStabilizationRecipeSource* _recipeSource;
	SCD_Struct_PX8 _startTime;
	SCD_Struct_PX8 _crossfadeDuration;
	SCD_Struct_PX9 _timeRange;

}

@property (nonatomic,retain) PXVideoStabilizationRecipeSource * recipeSource;              //@synthesize recipeSource=_recipeSource - In the implementation block
@property (assign,nonatomic) SCD_Struct_PX8 startTime;                                     //@synthesize startTime=_startTime - In the implementation block
@property (assign,nonatomic) SCD_Struct_PX9 timeRange;                                     //@synthesize timeRange=_timeRange - In the implementation block
@property (assign,nonatomic) SCD_Struct_PX8 crossfadeDuration;                             //@synthesize crossfadeDuration=_crossfadeDuration - In the implementation block
@property (assign,nonatomic) BOOL performStabilization;                                    //@synthesize performStabilization=_performStabilization - In the implementation block
@property (assign,nonatomic) BOOL abortIfStabilizationFails;                               //@synthesize abortIfStabilizationFails=_abortIfStabilizationFails - In the implementation block
-(void)setTimeRange:(SCD_Struct_PX9)arg1 ;
-(SCD_Struct_PX9)timeRange;
-(void)setStartTime:(SCD_Struct_PX8)arg1 ;
-(PXVideoStabilizationRecipeSource *)recipeSource;
-(void)setCrossfadeDuration:(SCD_Struct_PX8)arg1 ;
-(SCD_Struct_PX8)crossfadeDuration;
-(BOOL)abortIfStabilizationFails;
-(BOOL)performStabilization;
-(void)setRecipeSource:(PXVideoStabilizationRecipeSource *)arg1 ;
-(void)setPerformStabilization:(BOOL)arg1 ;
-(void)setAbortIfStabilizationFails:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(SCD_Struct_PX8)startTime;
@end

