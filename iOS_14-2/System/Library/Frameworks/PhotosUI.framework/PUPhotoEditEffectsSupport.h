/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@interface PUPhotoEditEffectsSupport : NSObject
+(id)identifierForLightingType:(long long)arg1 lightingVersion:(long long)arg2 ;
+(void)updateCompositionController:(id)arg1 withLightingIdentifier:(id)arg2 portraitInfo:(id)arg3 spillMatteAllowed:(id)arg4 ;
+(void)updateCompositionController:(id)arg1 withDepthEnabled:(BOOL)arg2 ;
+(void)updateCompositionController:(id)arg1 withEffect:(id)arg2 updateVersion:(BOOL)arg3 ;
+(void)updateCompositionController:(id)arg1 withEffect:(id)arg2 intensity:(double)arg3 updateVersion:(BOOL)arg4 ;
+(id)lightingEffectTypesByIdentifier;
+(void)_setEffectFilterName:(id)arg1 withIntensity:(double)arg2 withVersion:(unsigned long long)arg3 forCompositionController:(id)arg4 ;
+(void)_setPortraitEffectFilterName:(id)arg1 withVersion:(unsigned long long)arg2 forCompositionController:(id)arg3 portraitInfo:(id)arg4 spillMatteAllowed:(id)arg5 ;
+(void)_setPortraitEffectEnabled:(BOOL)arg1 forCompositionController:(id)arg2 ;
+(void)_clearStandardEffectsWithCompositionController:(id)arg1 ;
+(void)_clearPortraitEffectsWithCompositionController:(id)arg1 ;
+(long long)lightingEffectTypeForIdentifier:(id)arg1 ;
@end

