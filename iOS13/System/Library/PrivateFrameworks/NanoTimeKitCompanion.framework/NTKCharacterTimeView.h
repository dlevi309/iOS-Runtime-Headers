/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NTKTimeView.h>

@class CLKDevice, NTKCharacterResourceLoader, NTKCharacterQuad, CLKUIQuadView, NTKCharacterRenderer, NSString;

@interface NTKCharacterTimeView : UIView <NTKTimeView> {

	CLKDevice* _device;
	NTKCharacterResourceLoader* _loader;
	NTKCharacterQuad* _characterQuad;
	CLKUIQuadView* _characterQuadView;
	NTKCharacterRenderer* _renderers[2];
	NTKCharacterRenderer* _renderer;
	unsigned long long _character;
	unsigned _isRenderOneFrameRequested : 1;
	unsigned _isAnimating : 1;
	unsigned _isBackgrounded : 1;
	unsigned _renderWasIgnored : 1;
	unsigned _layoutWasIgnored : 1;
	BOOL _frozen;

}

@property (nonatomic,readonly) CLKUIQuadView * quadView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (assign,getter=isFrozen,nonatomic) BOOL frozen;              //@synthesize frozen=_frozen - In the implementation block
-(void)dealloc;
-(BOOL)isFrozen;
-(void)layoutSubviews;
-(void)_stopAnimation;
-(void)setTimeOffset:(double)arg1 ;
-(void)setFrozen:(BOOL)arg1 ;
-(void)setAnimationFrameInterval:(long long)arg1 ;
-(void)_endScrubbing;
-(void)_willEnterForeground;
-(void)_didEnterBackground;
-(void)setCharacter:(unsigned long long)arg1 ;
-(void)_startAnimation;
-(void)setOverrideDate:(id)arg1 ;
-(id)initWithFrame:(CGRect)arg1 forDevice:(id)arg2 ;
-(void)renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1 inGroup:(id)arg2 ;
-(CLKUIQuadView *)quadView;
-(void)setOverrideDate:(id)arg1 duration:(double)arg2 ;
-(void)_configureForEditMode:(long long)arg1 ;
-(void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(void)endScrubbingAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)prepareToZoom;
-(void)cleanupAfterZoom;
-(void)setClothingColor:(id)arg1 andDesaturation:(double)arg2 ;
-(void)setZoomFraction:(double)arg1 diameter:(double)arg2 ;
-(void)scrubToDate:(id)arg1 ;
-(void)startScrubbingAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)_layoutRenderer;
-(void)setOverrideDate:(id)arg1 animated:(BOOL)arg2 enteringOrb:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(void)enumarateRenderers:(/*^block*/id)arg1 ;
-(void)renderOneFrame;
-(void)setClothingColor:(id)arg1 andDesaturation:(double)arg2 forCharacter:(unsigned long long)arg3 ;
-(void)_renderOneFrame;
-(void)setOverrideDate:(id)arg1 animated:(BOOL)arg2 enteringOrb:(BOOL)arg3 ;
-(void)applyCharacterTransition:(double)arg1 fromCharacter:(unsigned long long)arg2 toCharacter:(unsigned long long)arg3 ;
@end

