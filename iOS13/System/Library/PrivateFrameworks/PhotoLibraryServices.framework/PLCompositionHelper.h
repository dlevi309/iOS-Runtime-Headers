/*
* Generated on Monday, March 1, 2021 at 2:30:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
@interface PLCompositionHelper : NSObject
+(void)compositionController:(id)arg1 setEffectFilterName:(id)arg2 version:(long long)arg3 ;
+(id)adjustmentConstants;
+(id)newIdentityCompositionController;
+(id)validatedCompositionCopyFor:(id)arg1 ;
+(id)validatedCompositionCopyFor:(id)arg1 mediaType:(long long)arg2 ;
+(id)photosSchema;
+(BOOL)isIdentityCompositionController:(id)arg1 ;
+(BOOL)isIdentityCompositionController:(id)arg1 forKeys:(id)arg2 ;
+(id)defaultValueForAdjustmentKey:(id)arg1 settingKey:(id)arg2 ;
+(id)identityValueForAdjustmentKey:(id)arg1 settingKey:(id)arg2 ;
+(id)minMaxValueForAdjustmentKey:(id)arg1 settingKey:(id)arg2 ;
+(id)minValueForAdjustmentKey:(id)arg1 settingKey:(id)arg2 ;
+(id)maxValueForAdjustmentKey:(id)arg1 settingKey:(id)arg2 ;
+(id)valueForType:(long long)arg1 adjustmentKey:(id)arg2 settingKey:(id)arg3 ;
+(id)valueForCompositionController:(id)arg1 adjustmentKey:(id)arg2 settingKey:(id)arg3 ;
+(BOOL)compositionControllerHasAnyAutoEnhancement:(id)arg1 ;
+(id)activeEffectAdjustmentForCompositionController:(id)arg1 ;
+(BOOL)compositionController:(id)arg1 isCropConstraintEqualToCompositionController:(id)arg2 ;
+(BOOL)compositionController:(id)arg1 isEffectFilterEqualToCompositionController:(id)arg2 ;
+(BOOL)compositionController:(id)arg1 isEffectFilterIntensityEqualToCompositionController:(id)arg2 ;
+(BOOL)compositionController:(id)arg1 isPortraitEqualToCompositionController:(id)arg2 ;
+(BOOL)compositionController:(id)arg1 isPortraitIntensityEqualToCompositionController:(id)arg2 ;
+(BOOL)compositionController:(id)arg1 isDepthIntensityEqualToCompositionController:(id)arg2 ;
+(BOOL)compositionController:(id)arg1 isGeometryEqualToCompositionController:(id)arg2 ;
+(CGSize)synchronousInputSizeForCompositionController:(id)arg1 ;
+(BOOL)compositionHasOvercaptureSourceSelection:(id)arg1 ;
+(id)updateReframeStateForAdjustmentData:(id)arg1 formatIdentifier:(id)arg2 formatVersion:(id)arg3 outFormatIdentifier:(id*)arg4 outFormatVersion:(id*)arg5 isReframed:(BOOL)arg6 ;
@end

