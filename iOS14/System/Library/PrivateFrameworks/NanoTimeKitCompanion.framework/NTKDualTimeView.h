/*
* Generated on Thursday, January 14, 2021 at 2:26:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NTKTimeView.h>

@class NSDate, NSCalendar, CLKClockTimerToken, CAReplicatorLayer, CALayer, NSArray, NTKDigitalTimeLabelStyle, CLKFont, CLKDevice, UIView, NTKAnalogHandsView, NTKDigitalTimeLabel, NSString;

@interface NTKDualTimeView : UIView <NTKTimeView> {

	NSDate* _overrideDate;
	NSCalendar* _calendar;
	CLKClockTimerToken* _clockTimerToken;
	CAReplicatorLayer* _hourTickReplicatorLayer;
	CAReplicatorLayer* _minuteTickReplicatorLayer;
	CALayer* _digitalTicksContainer;
	NSArray* _digitalTicks;
	NTKDigitalTimeLabelStyle* _digitalStyle;
	CLKFont* _digitalLabelFont;
	BOOL _frozen;
	BOOL _editing;
	BOOL _hideActiveTicks;
	BOOL _useMonospacedDigitalNumbers;
	CLKDevice* _device;
	unsigned long long _style;
	unsigned long long _color;
	UIView* _dialBackgroundView;
	NTKAnalogHandsView* _analogHandsView;
	NTKDigitalTimeLabel* _digitalTimeLabel;
	UIView* _digitalContainerView;
	UIView* _dialContainerView;
	UIView* _analogContainerView;
	UIView* _analogTickContainerView;

}

@property (nonatomic,retain) UIView * dialContainerView;                            //@synthesize dialContainerView=_dialContainerView - In the implementation block
@property (nonatomic,retain) UIView * dialBackgroundView;                           //@synthesize dialBackgroundView=_dialBackgroundView - In the implementation block
@property (nonatomic,retain) UIView * analogContainerView;                          //@synthesize analogContainerView=_analogContainerView - In the implementation block
@property (nonatomic,retain) UIView * analogTickContainerView;                      //@synthesize analogTickContainerView=_analogTickContainerView - In the implementation block
@property (nonatomic,retain) NTKAnalogHandsView * analogHandsView;                  //@synthesize analogHandsView=_analogHandsView - In the implementation block
@property (nonatomic,retain) CLKDevice * device;                                    //@synthesize device=_device - In the implementation block
@property (assign,getter=isFrozen,nonatomic) BOOL frozen;                           //@synthesize frozen=_frozen - In the implementation block
@property (assign,nonatomic) BOOL editing;                                          //@synthesize editing=_editing - In the implementation block
@property (assign,nonatomic) BOOL hideActiveTicks;                                  //@synthesize hideActiveTicks=_hideActiveTicks - In the implementation block
@property (assign,nonatomic) BOOL useMonospacedDigitalNumbers;                      //@synthesize useMonospacedDigitalNumbers=_useMonospacedDigitalNumbers - In the implementation block
@property (assign,nonatomic) unsigned long long style;                              //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) unsigned long long color;                              //@synthesize color=_color - In the implementation block
@property (nonatomic,readonly) NTKDigitalTimeLabel * digitalTimeLabel;              //@synthesize digitalTimeLabel=_digitalTimeLabel - In the implementation block
@property (nonatomic,readonly) UIView * digitalContainerView;                       //@synthesize digitalContainerView=_digitalContainerView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setFrozen:(BOOL)arg1 ;
-(unsigned long long)color;
-(void)setTimeOffset:(double)arg1 ;
-(CLKDevice *)device;
-(void)layoutSubviews;
-(void)setColor:(unsigned long long)arg1 ;
-(void)setEditing:(BOOL)arg1 ;
-(void)setDevice:(CLKDevice *)arg1 ;
-(void)setStyle:(unsigned long long)arg1 ;
-(BOOL)editing;
-(unsigned long long)style;
-(BOOL)isFrozen;
-(void)dealloc;
-(void)applyTransitionFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3 ;
-(void)applyTransitionFraction:(double)arg1 fromColor:(unsigned long long)arg2 toColor:(unsigned long long)arg3 ;
-(void)setOverrideDate:(id)arg1 duration:(double)arg2 ;
-(void)setAnalogHandsView:(NTKAnalogHandsView *)arg1 ;
-(NTKAnalogHandsView *)analogHandsView;
-(void)_setupDigitalTimeViews;
-(UIView *)analogTickContainerView;
-(id)_secondTickActiveColorForColor:(unsigned long long)arg1 ;
-(void)_setupAnalogHandsView;
-(void)_didFinishTimeViewSetup;
-(BOOL)shouldUseCustomDialBackground;
-(id)_customDialBackgroundView;
-(double)_analogTickInset;
-(CGSize)_hourTickSize;
-(CGSize)_minuteTickSize;
-(unsigned long long)_hourTickCount;
-(unsigned long long)_minuteTickCount;
-(id)_hourTickColorForColor:(unsigned long long)arg1 ;
-(id)_minuteTickColorForColor:(unsigned long long)arg1 ;
-(id)_hourMinuteHandFillColorForColor:(unsigned long long)arg1 ;
-(id)_hourMinuteHandStrokeColorForColor:(unsigned long long)arg1 ;
-(CGSize)_secondTickSize;
-(double)_digitalTimeLabelFontSize;
-(id)_digitalTimeLabelColorForColor:(unsigned long long)arg1 ;
-(id)_secondTickInactiveColorForColor:(unsigned long long)arg1 ;
-(id)initWithFrame:(CGRect)arg1 style:(unsigned long long)arg2 andDevice:(id)arg3 ;
-(id)_secondHandColorForColor:(unsigned long long)arg1 ;
-(void)setUseMonospacedDigitalNumbers:(BOOL)arg1 ;
-(void)setSecondsHidden:(BOOL)arg1 animated:(BOOL)arg2 ;
-(UIView *)dialBackgroundView;
-(void)_setupDial;
-(void)setupTimeViews;
-(void)_endDigitalTicksTimer;
-(void)_tearDownAnalogContainerView;
-(void)_tearDownDigitalContainerView;
-(void)_setupAnalogTimeViews;
-(void)_setupAnalogTicks;
-(id)_digitalLabelFont;
-(void)_setupDigitalTicks;
-(void)_startDigitalTicksTimer;
-(double)_digitalTickInset;
-(void)_refreshDigitalTicksWithNow:(id)arg1 secondFraction:(double)arg2 ;
-(void)_refreshDigitalTicks;
-(void)_colorizeDigitalTicksWithActiveColor:(id)arg1 inactiveColor:(id)arg2 now:(id)arg3 secondFraction:(double)arg4 ;
-(void)_updateDigitalLabelFont;
-(id)_dialColorForColor:(unsigned long long)arg1 ;
-(void)_applyColorToAnalogHands;
-(void)_colorizeAnalogTicksWithHourColor:(id)arg1 minuteColor:(id)arg2 ;
-(void)applyTransitionFraction:(double)arg1 fromColor:(unsigned long long)arg2 toColor:(unsigned long long)arg3 ignoreTimeView:(BOOL)arg4 ;
-(void)setHideActiveTicks:(BOOL)arg1 ;
-(id)_activeTimeView;
-(BOOL)hideActiveTicks;
-(BOOL)useMonospacedDigitalNumbers;
-(void)setDialBackgroundView:(UIView *)arg1 ;
-(NTKDigitalTimeLabel *)digitalTimeLabel;
-(UIView *)digitalContainerView;
-(UIView *)dialContainerView;
-(void)setDialContainerView:(UIView *)arg1 ;
-(UIView *)analogContainerView;
-(void)setAnalogContainerView:(UIView *)arg1 ;
-(void)setAnalogTickContainerView:(UIView *)arg1 ;
@end
