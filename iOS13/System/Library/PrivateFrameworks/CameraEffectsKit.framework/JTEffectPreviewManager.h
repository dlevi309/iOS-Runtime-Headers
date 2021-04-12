/*
* Generated on Monday, March 1, 2021 at 2:34:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CameraEffectsKit.framework/CameraEffectsKit
*/

#import <CameraEffectsKit/CameraEffectsKit-Structs.h>
#import <libobjc.A.dylib/PVLivePlayerDelegate.h>

@protocol JTEffectPreviewManagerDelegate, OS_dispatch_queue;
@class NSArray, JTImage, NSObject, JTCacheDictionary, JTFrameRateCalculator, JTEffectPickerPreviewDiskCache, JTEffectsPreviewGenerator, PVLivePlayer, JTEffectContinousPreviewOptions, JTPixelRotationSession, NSString;

@interface JTEffectPreviewManager : NSObject <PVLivePlayerDelegate> {

	BOOL _allowCachingStaticPreviewsToDisk;
	BOOL _continouslyPreviewing;
	NSArray* _continousPreviewEffects;
	JTImage* _backgroundImage;
	id<JTEffectPreviewManagerDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _callbackQueue;
	JTCacheDictionary* _previewCache;
	JTFrameRateCalculator* _fpsCalc;
	JTEffectPickerPreviewDiskCache* _previewDiskCache;
	NSObject*<OS_dispatch_queue> _previewQueue;
	NSObject* _pickerPreviewingToken;
	JTEffectsPreviewGenerator* _staticPreviewGenerator;
	PVLivePlayer* _continousPreviewPlayer;
	JTEffectContinousPreviewOptions* _continousPreviewOptions;
	NSArray* _continousPreviewProVideoEffects;
	NSArray* _continousPreviewAnimojis;
	NSArray* _effectStackAppliedBeforeContinousPreview;
	JTPixelRotationSession* _pixelRotationSession;
	JTImage* _defaultPreviewImage;
	CGSize _previewRenderSize;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> callbackQueue;                           //@synthesize callbackQueue=_callbackQueue - In the implementation block
@property (nonatomic,readonly) JTCacheDictionary * previewCache;                                     //@synthesize previewCache=_previewCache - In the implementation block
@property (nonatomic,readonly) JTFrameRateCalculator * fpsCalc;                                      //@synthesize fpsCalc=_fpsCalc - In the implementation block
@property (nonatomic,readonly) JTEffectPickerPreviewDiskCache * previewDiskCache;                    //@synthesize previewDiskCache=_previewDiskCache - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> previewQueue;                            //@synthesize previewQueue=_previewQueue - In the implementation block
@property (nonatomic,retain) NSObject * pickerPreviewingToken;                                       //@synthesize pickerPreviewingToken=_pickerPreviewingToken - In the implementation block
@property (nonatomic,retain) JTEffectsPreviewGenerator * staticPreviewGenerator;                     //@synthesize staticPreviewGenerator=_staticPreviewGenerator - In the implementation block
@property (nonatomic,retain) PVLivePlayer * continousPreviewPlayer;                                  //@synthesize continousPreviewPlayer=_continousPreviewPlayer - In the implementation block
@property (nonatomic,retain) JTEffectContinousPreviewOptions * continousPreviewOptions;              //@synthesize continousPreviewOptions=_continousPreviewOptions - In the implementation block
@property (nonatomic,retain) NSArray * continousPreviewProVideoEffects;                              //@synthesize continousPreviewProVideoEffects=_continousPreviewProVideoEffects - In the implementation block
@property (nonatomic,retain) NSArray * continousPreviewAnimojis;                                     //@synthesize continousPreviewAnimojis=_continousPreviewAnimojis - In the implementation block
@property (nonatomic,retain) NSArray * effectStackAppliedBeforeContinousPreview;                     //@synthesize effectStackAppliedBeforeContinousPreview=_effectStackAppliedBeforeContinousPreview - In the implementation block
@property (nonatomic,retain) JTPixelRotationSession * pixelRotationSession;                          //@synthesize pixelRotationSession=_pixelRotationSession - In the implementation block
@property (assign,nonatomic) CGSize previewRenderSize;                                               //@synthesize previewRenderSize=_previewRenderSize - In the implementation block
@property (getter=isContinouslyPreviewing) BOOL continouslyPreviewing;                               //@synthesize continouslyPreviewing=_continouslyPreviewing - In the implementation block
@property (retain) JTImage * defaultPreviewImage;                                                    //@synthesize defaultPreviewImage=_defaultPreviewImage - In the implementation block
@property (assign,nonatomic) CGSize previewSize; 
@property (retain) JTImage * backgroundImage;                                                        //@synthesize backgroundImage=_backgroundImage - In the implementation block
@property (assign) BOOL allowCachingStaticPreviewsToDisk;                                            //@synthesize allowCachingStaticPreviewsToDisk=_allowCachingStaticPreviewsToDisk - In the implementation block
@property (nonatomic,copy) NSArray * continousPreviewEffects;                                        //@synthesize continousPreviewEffects=_continousPreviewEffects - In the implementation block
@property (assign,nonatomic,__weak) id<JTEffectPreviewManagerDelegate> delegate;                     //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(id<JTEffectPreviewManagerDelegate>)delegate;
-(void)setDelegate:(id<JTEffectPreviewManagerDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)callbackQueue;
-(JTImage *)backgroundImage;
-(void)setBackgroundImage:(JTImage *)arg1 ;
-(CGSize)previewSize;
-(void)setPreviewSize:(CGSize)arg1 ;
-(BOOL)highQualityRendering;
-(JTCacheDictionary *)previewCache;
-(NSObject*<OS_dispatch_queue>)previewQueue;
-(JTImage *)defaultPreviewImage;
-(JTFrameRateCalculator *)fpsCalc;
-(BOOL)isContinouslyPreviewing;
-(id)initWithPreviewSize:(CGSize)arg1 callbackQueue:(id)arg2 ;
-(void)startCachingPreviewsContinuouslyWithOptions:(id)arg1 ;
-(void)setContinousPreviewEffects:(NSArray *)arg1 ;
-(void)cachedPreviewForEffect:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)cachedPreviewForEffectIDs:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)JT_stopCachingPreviewsContinuously;
-(CGSize)previewRenderSize;
-(void)setPreviewRenderSize:(CGSize)arg1 ;
-(void)setContinousPreviewAnimojis:(NSArray *)arg1 ;
-(void)setContinousPreviewProVideoEffects:(NSArray *)arg1 ;
-(JTEffectContinousPreviewOptions *)continousPreviewOptions;
-(NSArray *)continousPreviewProVideoEffects;
-(void)setContinouslyPreviewing:(BOOL)arg1 ;
-(void)setContinousPreviewOptions:(JTEffectContinousPreviewOptions *)arg1 ;
-(void)setContinousPreviewPlayer:(PVLivePlayer *)arg1 ;
-(PVLivePlayer *)continousPreviewPlayer;
-(NSObject *)pickerPreviewingToken;
-(void)setDefaultPreviewImage:(JTImage *)arg1 ;
-(NSArray *)effectStackAppliedBeforeContinousPreview;
-(BOOL)rendersDefaultContinousPreviewImage;
-(void)adjustAnimationInfoForLiveCaptureRequest:(id)arg1 ;
-(BOOL)lowPriorityScheduling;
-(JTEffectsPreviewGenerator *)staticPreviewGenerator;
-(void)centerAnimationInfoForRequest:(id)arg1 ;
-(NSArray *)continousPreviewAnimojis;
-(BOOL)JT_canCacheEffectToDisk:(id)arg1 ;
-(JTEffectPickerPreviewDiskCache *)previewDiskCache;
-(void)JT_renderPreviewForEffect:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)allowCachingStaticPreviewsToDisk;
-(void)JT_dispatchBlockOnCallbackQueueImmediatelyWhenPossible:(/*^block*/id)arg1 ;
-(void)preparePreviewForEffect:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setStaticPreviewGenerator:(JTEffectsPreviewGenerator *)arg1 ;
-(id)buildRenderRequest:(id)arg1 time:(SCD_Struct_JT6)arg2 ;
-(void)renderRequestComplete:(id)arg1 results:(id)arg2 completedOutOfOrder:(BOOL)arg3 ;
-(NSArray *)continousPreviewEffects;
-(void)stopCachingPreviewsContinuously;
-(unsigned)preferredSchedulingQueueSize;
-(BOOL)hasCachedPreviewForEffectID:(id)arg1 ;
-(void)purgeCachedPreviewForEffectID:(id)arg1 ;
-(void)purgeCachedPreviewsForAllEffects;
-(void)setAllowCachingStaticPreviewsToDisk:(BOOL)arg1 ;
-(void)setPickerPreviewingToken:(NSObject *)arg1 ;
-(void)setEffectStackAppliedBeforeContinousPreview:(NSArray *)arg1 ;
-(JTPixelRotationSession *)pixelRotationSession;
-(void)setPixelRotationSession:(JTPixelRotationSession *)arg1 ;
@end

