/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <NeutrinoCore/NUAutoCalculator.h>
#import <libobjc.A.dylib/PIFaceObservingAutoCalculator.h>

@class PIFaceObservationCache, NSString;

@interface PIPortraitAutoCalculator : NUAutoCalculator <PIFaceObservingAutoCalculator> {

	PIFaceObservationCache* _faceObservationCache;

}

@property (nonatomic,retain) PIFaceObservationCache * faceObservationCache;              //@synthesize faceObservationCache=_faceObservationCache - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)portraitInfoDictionaryFromCameraMetadata:(id)arg1 ;
+(id)portraitInfoDictionaryFromFaceObservations:(id)arg1 metadata:(id)arg2 orientation:(long long)arg3 valuesAtCapture:(id)arg4 ;
+(BOOL)isStillImageDisparity:(id)arg1 ;
+(id)focusRectDictionaryFromMetadata:(id)arg1 ;
+(id)focusRectDictionaryFromRect:(CGRect)arg1 ;
+(BOOL)canApplyPortraitEffectsWithMetadata:(id)arg1 ;
+(id)depthEffectInfoDictionaryFromFaceObservations:(id)arg1 metadata:(id)arg2 orientation:(long long)arg3 valuesAtCapture:(id)arg4 ;
+(id)depthEffectInfoDictionaryFromFaceObservations:(id)arg1 focus:(id)arg2 valuesAtCapture:(id)arg3 lumaNoiseScale:(float)arg4 orientation:(long long)arg5 ;
+(id)portraitEffectInfoDictionaryFromFaceObservations:(id)arg1 orientation:(long long)arg2 valuesAtCapture:(id)arg3 ;
-(void)submit:(/*^block*/id)arg1 ;
-(void)setFaceObservationCache:(PIFaceObservationCache *)arg1 ;
-(PIFaceObservationCache *)faceObservationCache;
-(void)_calculateWithImageProperties:(id)arg1 valuesAtCapture:(id)arg2 completion:(/*^block*/id)arg3 ;
@end

