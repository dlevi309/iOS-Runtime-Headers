/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NUAnimationObserver.h>
#import <libobjc.A.dylib/NUViewDelegate.h>

@protocol NTKAstronomyVistaViewObserver;
@class NUView, NSMutableSet, CLKDevice, NUScene, CLKUIQuadView, NSString;

@interface NTKAstronomyVistaView : UIView <NUAnimationObserver, NUViewDelegate> {

	NUView* _viewer;
	NSMutableSet* _activeContentsAnimations;
	unsigned long long _vista;
	unsigned _isSupplemental : 1;
	unsigned _isDisplayOn : 1;
	unsigned _isAnimating : 1;
	CLKDevice* _device;
	id<NTKAstronomyVistaViewObserver> _observer;

}

@property (nonatomic,readonly) CLKDevice * device;                                           //@synthesize device=_device - In the implementation block
@property (assign,nonatomic,__weak) id<NTKAstronomyVistaViewObserver> observer;              //@synthesize observer=_observer - In the implementation block
@property (nonatomic,retain) NUScene * scene; 
@property (nonatomic,readonly) CLKUIQuadView * quadView; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setOpaque:(BOOL)arg1 ;
-(NUScene *)scene;
-(void)setScene:(NUScene *)arg1 ;
-(void)startAnimation;
-(void)setObserver:(id<NTKAstronomyVistaViewObserver>)arg1 ;
-(id<NTKAstronomyVistaViewObserver>)observer;
-(unsigned long long)vista;
-(CLKDevice *)device;
-(void)layoutSubviews;
-(id)snapshotImage;
-(void)stopAnimation;
-(void)dealloc;
-(void)renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1 inGroup:(id)arg2 ;
-(id)initWithFrame:(CGRect)arg1 forDevice:(id)arg2 ;
-(CLKUIQuadView *)quadView;
-(void)setMinFrameInterval:(int)arg1 ;
-(void)updateSunLocationAnimated:(BOOL)arg1 ;
-(void)_updateAnimation;
-(void)_setVista:(unsigned long long)arg1 scene:(id)arg2 ;
-(void)universeAnimationFinished:(id)arg1 ;
-(void)viewWillDisplay:(id)arg1 forTime:(double)arg2 ;
-(id)rotatable:(unsigned long long)arg1 ;
-(void)showSupplemental:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)generateAnimationArrayFromVista:(unsigned long long)arg1 toVista:(unsigned long long)arg2 ;
-(void)setVista:(unsigned long long)arg1 ;
-(void)setZoomFraction:(float)arg1 targetDiameter:(float)arg2 ;
@end

