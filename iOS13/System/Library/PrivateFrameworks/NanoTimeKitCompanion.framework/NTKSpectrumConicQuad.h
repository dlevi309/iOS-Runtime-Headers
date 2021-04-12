/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <ClockKitUI/CLKUIQuad.h>

@protocol MTLDevice, MTLBuffer;
@class NTKSpectrumResourceManager, CAMediaTimingFunction, NSCalendar, NSDate;

@interface NTKSpectrumConicQuad : CLKUIQuad {

	id<MTLDevice> _device;
	NTKSpectrumResourceManager* _resourceManager;
	id<MTLBuffer> _conicUniformsBuffers[3];
	CAMediaTimingFunction* _mediaTimingFunction;
	 _fromColor;
	 _toColor;
	 _midColor;
	double _screenScale;
	 _size;
	unsigned long long _frame;
	NSCalendar* _calendar;
	unsigned long long _style;
	double _startOverrideTime;
	double _endOverrideTime;
	float _startSecondAngle;
	float _startMinuteAngle;
	float _startHourAngle;
	float _endSecondAngle;
	float _endMinuteAngle;
	float _endHourAngle;
	unsigned _isAnimatingStyle : 1;
	unsigned long long _role;
	float _styleTransitionFraction;
	unsigned long long _toStyle;
	BOOL _masking;
	float _opacity;
	float _maskRadius;
	float _vignetteOpacity;
	float _overlayOpacity;
	NSDate* _overrideDate;

}

@property (nonatomic,readonly) NSCalendar * calendar;                    //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) NSDate * overrideDate;                    //@synthesize overrideDate=_overrideDate - In the implementation block
@property (assign,nonatomic) float opacity;                              //@synthesize opacity=_opacity - In the implementation block
@property (assign,nonatomic) float maskRadius;                           //@synthesize maskRadius=_maskRadius - In the implementation block
@property (assign,getter=isMasking,nonatomic) BOOL masking;              //@synthesize masking=_masking - In the implementation block
@property (assign,nonatomic) float vignetteOpacity;                      //@synthesize vignetteOpacity=_vignetteOpacity - In the implementation block
@property (assign,nonatomic) float overlayOpacity;                       //@synthesize overlayOpacity=_overlayOpacity - In the implementation block
-(void)dealloc;
-(NSCalendar *)calendar;
-(void)setStyle:(unsigned long long)arg1 ;
-(float)opacity;
-(void)setOpacity:(float)arg1 ;
-(NSDate *)overrideDate;
-(void)setupForQuadView:(id)arg1 ;
-(BOOL)prepareForTime:(double)arg1 ;
-(void)renderForDisplayWithEncoder:(id)arg1 ;
-(void)setOverrideDate:(id)arg1 duration:(double)arg2 ;
-(void)applyTransitionFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3 ;
-(float)overlayOpacity;
-(void)setOverrideDate:(id)arg1 duration:(double)arg2 completion:(/*^block*/id)arg3 ;
-(void)setFromColor:(id)arg1 toColor:(id)arg2 ;
-(void)setOverlayOpacity:(float)arg1 ;
-(void)setMasking:(BOOL)arg1 ;
-(void)setMaskRadius:(float)arg1 ;
-(id)initWithRole:(unsigned long long)arg1 screenScale:(double)arg2 ;
-(void)setOverrideDate:(id)arg1 hourRadians:(double)arg2 minuteRadians:(double)arg3 secondRadians:(double)arg4 ;
-(float)maskRadius;
-(BOOL)isMasking;
-(float)vignetteOpacity;
-(void)setVignetteOpacity:(float)arg1 ;
@end

