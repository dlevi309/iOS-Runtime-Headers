/*
* Generated on Monday, March 1, 2021 at 2:35:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol PICompositionControllerDelegate;
@class NUComposition, NSDictionary, PIAdjustmentConstants;

@interface PICompositionController : NSObject <NSCopying> {

	NUComposition* _composition;
	struct {
		BOOL hasDidAdd;
		BOOL hasDidRemove;
		BOOL hasDidModify;
		BOOL hasDidModifyMultiple;
		BOOL hasClassForController;
	}  _delegateFlags;
	NSDictionary* _identifierMap;
	id<PICompositionControllerDelegate> _changeDelegate;
	long long _mediaType;
	long long _imageOrientation;

}

@property (nonatomic,readonly) PIAdjustmentConstants * adjustmentConstants; 
@property (nonatomic,copy,readonly) NUComposition * composition; 
@property (assign,nonatomic,__weak) id<PICompositionControllerDelegate> changeDelegate;              //@synthesize changeDelegate=_changeDelegate - In the implementation block
@property (assign,nonatomic) long long mediaType;                                                    //@synthesize mediaType=_mediaType - In the implementation block
@property (assign,nonatomic) long long imageOrientation;                                             //@synthesize imageOrientation=_imageOrientation - In the implementation block
@property (assign,nonatomic) long long sourceSelection; 
+(id)photosSchema;
+(id)settingForAdjustmentKey:(id)arg1 settingKey:(id)arg2 ;
+(Class)adjustmentControllerClassForKey:(id)arg1 ;
+(id)_keyToIdentifierMap;
+(id)schemaForKey:(id)arg1 ;
-(id)debugDescription;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)imageOrientation;
-(void)setImageOrientation:(long long)arg1 ;
-(long long)mediaType;
-(id)availableKeys;
-(void)setMediaType:(long long)arg1 ;
-(NUComposition *)composition;
-(id)portraitAdjustmentController;
-(void)modifyAdjustmentWithKey:(id)arg1 modificationBlock:(/*^block*/id)arg2 ;
-(id)depthAdjustmentController;
-(PIAdjustmentConstants *)adjustmentConstants;
-(long long)userOrientation;
-(long long)sourceSelection;
-(void)setSourceSelection:(long long)arg1 ;
-(id)sourceSelectAdjustmentController;
-(id)videoReframeAdjustmentController;
-(id)cropAdjustmentController;
-(id)initWithComposition:(id)arg1 ;
-(void)applyChangesFromCompositionController:(id)arg1 ;
-(void)removeAdjustmentWithKey:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 forKeys:(id)arg2 visualChangesOnly:(BOOL)arg3 ;
-(id)effect3DAdjustmentController;
-(id)effectAdjustmentController;
-(BOOL)isEqual:(id)arg1 forKeys:(id)arg2 comparisonBlock:(/*^block*/id)arg3 ;
-(id)definitionAdjustmentController;
-(id)noiseReductionAdjustmentController;
-(id)whiteBalanceAdjustmentController;
-(id)sharpenAdjustmentController;
-(id)smartBWAdjustmentController;
-(id)rawNoiseReductionAdjustmentController;
-(id)smartColorAdjustmentController;
-(id)smartToneAdjustmentController;
-(id)adjustmentControllerForKey:(id)arg1 ;
-(id)orientationAdjustmentController;
-(void)setOvercaptureSource:(id)arg1 ;
-(void)setSource:(id)arg1 mediaType:(long long)arg2 ;
-(void)setChangeDelegate:(id<PICompositionControllerDelegate>)arg1 ;
-(id)trimAdjustmentController;
-(id)compositionKeys;
-(id)redEyeAdjustmentController;
-(BOOL)isEqual:(id)arg1 visualChangesOnly:(BOOL)arg2 ;
-(id)autoLoopAdjustmentController;
-(id)orientationAdjustmentControllerCreatingIfNecessary:(BOOL)arg1 ;
-(id)cropAdjustmentControllerCreatingIfNecessary:(BOOL)arg1 ;
-(id)slomoAdjustmentController;
-(id)smartToneAdjustmentControllerCreatingIfNecessary:(BOOL)arg1 ;
-(id)videoPosterFrameAdjustmentController;
-(id)livePhotoKeyFrameAdjustmentController;
-(void)addAdjustmentWithKey:(id)arg1 ;
-(void)replaceAdjustment:(id)arg1 withKey:(id)arg2 ;
-(id)differingAdjustmentsWithComposition:(id)arg1 ;
-(Class)_adjustmentControllerClassForKey:(id)arg1 ;
-(id<PICompositionControllerDelegate>)changeDelegate;
-(id)highResFusionAdjustmentController;
-(id)vignetteAdjustmentController;
-(id)_adjustmentControllerForKey:(id)arg1 creatingIfNecessary:(BOOL)arg2 expectedClass:(Class)arg3 ;
-(id)smartColorAdjustmentControllerCreatingIfNecessary:(BOOL)arg1 ;
-(id)smartBWAdjustmentControllerCreatingIfNecessary:(BOOL)arg1 ;
-(id)redEyeAdjustmentControllerCreatingIfNecessary:(BOOL)arg1 ;
-(id)livePhotoKeyFrameAdjustmentControllerCreatingIfNecessary:(BOOL)arg1 ;
-(id)videoPosterFrameAdjustmentControllerCreatingIfNecessary:(BOOL)arg1 ;
-(id)depthAdjustmentControllerCreatingIfNecessary:(BOOL)arg1 ;
-(id)trimAdjustmentControllerCreatingIfNecessary:(BOOL)arg1 ;
-(id)slomoAdjustmentControllerCreatingIfNecessary:(BOOL)arg1 ;
-(id)effectAdjustmentControllerCreatingIfNecessary:(BOOL)arg1 ;
-(id)effect3DAdjustmentControllerCreatingIfNecessary:(BOOL)arg1 ;
-(id)portraitAdjustmentControllerCreatingIfNecessary:(BOOL)arg1 ;
-(id)autoLoopAdjustmentControllerCreatingIfNecessary:(BOOL)arg1 ;
-(id)highResFusionAdjustmentControllerCreatingIfNecessary:(BOOL)arg1 ;
-(id)rawNoiseReductionAdjustmentControllerCreatingIfNecessary:(BOOL)arg1 ;
-(id)sharpenAdjustmentControllerCreatingIfNecessary:(BOOL)arg1 ;
-(id)whiteBalanceAdjustmentControllerCreatingIfNecessary:(BOOL)arg1 ;
-(id)noiseReductionAdjustmentControllerCreatingIfNecessary:(BOOL)arg1 ;
-(id)definitionAdjustmentControllerCreatingIfNecessary:(BOOL)arg1 ;
-(id)vignetteAdjustmentControllerCreatingIfNecessary:(BOOL)arg1 ;
-(id)videoReframeAdjustmentControllerCreatingIfNecessary:(BOOL)arg1 ;
-(id)sourceSelectAdjustmentControllerCreatingIfNecessary:(BOOL)arg1 ;
@end

