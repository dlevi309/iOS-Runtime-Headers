/*
* Generated on Thursday, January 14, 2021 at 2:26:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NTKAstronomyVistaViewObserver.h>
#import <libobjc.A.dylib/NTKTimeTravel.h>

@class NTKAstronomyVistaView, NTKAstronomyLocationDot, CLKDevice, NSDate, NTKDelayedBlock, CLLocation, CLKUIQuadView;

@interface NTKAstronomyRichComplicationContentView : UIView <NTKAstronomyVistaViewObserver, NTKTimeTravel> {

	NTKAstronomyVistaView* _astronomyVistaView;
	NTKAstronomyLocationDot* _locationDot;
	CLKDevice* _device;
	long long _family;
	NSDate* _timelineDate;
	NSDate* _timeTravelDate;
	unsigned _isPaused : 1;
	unsigned _isAnimating : 1;
	unsigned _isRenderOneFrame : 1;
	NTKDelayedBlock* _stopAnimationDelayedBlock;
	CLLocation* _currentLocation;

}

@property (nonatomic,readonly) CLKUIQuadView * quadView; 
-(void)layoutSubviews;
-(void)_stopAnimating;
-(void)_startAnimating;
-(void)renderSynchronouslyWithImageQueueDiscard:(BOOL)arg1 inGroup:(id)arg2 ;
-(void)prepareWristRaiseAnimation;
-(void)setTimeTravelDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)handleWristRaiseScreenWake;
-(void)handleOrdinaryScreenWake;
-(CLKUIQuadView *)quadView;
-(void)astronomyVistaViewContentsAnimationFinished:(id)arg1 ;
-(void)astronomyVistaViewWillDisplay:(id)arg1 forTime:(double)arg2 ;
-(BOOL)_shouldAnimateWithTemplateUpdateReason:(long long)arg1 ;
-(id)initForDevice:(id)arg1 family:(long long)arg2 diameter:(double)arg3 ;
-(void)applyPausedUpdate:(BOOL)arg1 ;
-(void)handleTemplateMetadata:(id)arg1 reason:(long long)arg2 ;
-(void)_showLocationDot;
-(void)_hideLocationDot;
@end

