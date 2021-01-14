/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXMutableLivePhotoViewModulator.h>
#import <libobjc.A.dylib/ISBasePlayerUIViewChangeObserver.h>

@class ISLivePhotoUIView, PXImageLayerModulator, NSString;

@interface PXLivePhotoViewModulator : NSObject <PXMutableLivePhotoViewModulator, ISBasePlayerUIViewChangeObserver> {

	BOOL _isPerformingChanges;
	BOOL _isPerformingUpdates;
	SCD_Struct_PX59 _needsUpdateFlags;
	BOOL _revealsGainMapImage;
	BOOL _animateGainMapAppearance;
	BOOL _displayingVideoComplement;
	float _gainMapValue;
	ISLivePhotoUIView* _livePhotoView;
	CGImageRef _gainMapImage;
	PXImageLayerModulator* _imageModulator;
	PXImageLayerModulator* _videoModulator;

}

@property (assign,nonatomic) BOOL animateGainMapAppearance;                         //@synthesize animateGainMapAppearance=_animateGainMapAppearance - In the implementation block
@property (assign,nonatomic) BOOL displayingVideoComplement;                        //@synthesize displayingVideoComplement=_displayingVideoComplement - In the implementation block
@property (nonatomic,readonly) PXImageLayerModulator * imageModulator;              //@synthesize imageModulator=_imageModulator - In the implementation block
@property (nonatomic,readonly) PXImageLayerModulator * videoModulator;              //@synthesize videoModulator=_videoModulator - In the implementation block
@property (nonatomic,readonly) ISLivePhotoUIView * livePhotoView;                   //@synthesize livePhotoView=_livePhotoView - In the implementation block
@property (nonatomic,readonly) CGImageRef gainMapImage;                             //@synthesize gainMapImage=_gainMapImage - In the implementation block
@property (nonatomic,readonly) float gainMapValue;                                  //@synthesize gainMapValue=_gainMapValue - In the implementation block
@property (nonatomic,readonly) BOOL revealsGainMapImage;                            //@synthesize revealsGainMapImage=_revealsGainMapImage - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setGainMapImage:(CGImageRef)arg1 ;
-(CGImageRef)gainMapImage;
-(float)gainMapValue;
-(ISLivePhotoUIView *)livePhotoView;
-(id)init;
-(void)setAnimateGainMapAppearance:(BOOL)arg1 ;
-(void)_updateIfNeeded;
-(void)prepareForReuse;
-(void)setGainMapValue:(float)arg1 ;
-(BOOL)revealsGainMapImage;
-(BOOL)animateGainMapAppearance;
-(void)setGainMapImage:(CGImageRef)arg1 animated:(BOOL)arg2 ;
-(void)setLivePhotoView:(ISLivePhotoUIView *)arg1 ;
-(BOOL)_needsUpdate;
-(void)_setNeedsUpdate;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)_updateInput;
-(void)dealloc;
-(void)setRevealsGainMapImage:(BOOL)arg1 ;
-(void)basePlayerUIView:(id)arg1 didChange:(unsigned long long)arg2 withAnimationDuration:(double)arg3 ;
-(id)initWithImageModulator:(id)arg1 videoModulator:(id)arg2 ;
-(void)performChanges_Private:(/*^block*/id)arg1 ;
-(void)setDisplayingVideoComplement:(BOOL)arg1 ;
-(void)_invalidateInput;
-(void)_invalidateGainMapImage;
-(void)_updateGainMapImage;
-(BOOL)displayingVideoComplement;
-(PXImageLayerModulator *)imageModulator;
-(PXImageLayerModulator *)videoModulator;
@end

