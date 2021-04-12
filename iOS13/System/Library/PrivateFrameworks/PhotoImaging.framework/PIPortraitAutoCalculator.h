/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoImaging.framework/PhotoImaging
*/

#import <PhotoImaging/PhotoImaging-Structs.h>
#import <NeutrinoCore/NUAutoCalculator.h>
#import <libobjc.A.dylib/PIFaceObservingAutoCalculator.h>

@class PIFaceObservationCache, NSString;

@interface PIPortraitAutoCalculator : NUAutoCalculator <PIFaceObservingAutoCalculator> {

	PIFaceObservationCache* _faceObservationCache;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) PIFaceObservationCache * faceObservationCache;              //@synthesize faceObservationCache=_faceObservationCache - In the implementation block
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

