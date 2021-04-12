/*
* Generated on Monday, March 1, 2021 at 2:35:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKAnalogFaceView.h>
#import <libobjc.A.dylib/NTKVictoryAnalogBackgroundViewDelegate.h>
#import <libobjc.A.dylib/NTKUtilityFlatComplicationViewDelegate.h>
#import <libobjc.A.dylib/NTKOlympusViewDelegate.h>

@class NTKOlympusTimeView, NTKVictoryAnalogBackgroundView, NTKCircularAnalogDialView, NTKRoundedCornerOverlayView, NSDate, NSNumber, NSString;

@interface NTKOlympusFaceView : NTKAnalogFaceView <NTKVictoryAnalogBackgroundViewDelegate, NTKUtilityFlatComplicationViewDelegate, NTKOlympusViewDelegate> {

	BOOL _contentLoaded;
	BOOL _trackSeconds;
	NTKOlympusTimeView* _olympusView;
	NTKVictoryAnalogBackgroundView* _analogBackgroundView;
	NTKCircularAnalogDialView* _dialView;
	NTKRoundedCornerOverlayView* _cornerView;
	unsigned long long _hour;
	unsigned long long _minute;
	unsigned long long _second;
	NSDate* _date;
	double _circleDiameter;
	unsigned long long _currentStyle;
	unsigned long long _currentDial;
	unsigned long long _currentColor;
	NSNumber* _clockTimerToken;

}

@property (nonatomic,retain) NTKOlympusTimeView * olympusView;                                   //@synthesize olympusView=_olympusView - In the implementation block
@property (nonatomic,retain) NTKVictoryAnalogBackgroundView * analogBackgroundView;              //@synthesize analogBackgroundView=_analogBackgroundView - In the implementation block
@property (nonatomic,retain) NTKCircularAnalogDialView * dialView;                               //@synthesize dialView=_dialView - In the implementation block
@property (nonatomic,retain) NTKRoundedCornerOverlayView * cornerView;                           //@synthesize cornerView=_cornerView - In the implementation block
@property (assign,nonatomic) BOOL contentLoaded;                                                 //@synthesize contentLoaded=_contentLoaded - In the implementation block
@property (assign,nonatomic) unsigned long long hour;                                            //@synthesize hour=_hour - In the implementation block
@property (assign,nonatomic) unsigned long long minute;                                          //@synthesize minute=_minute - In the implementation block
@property (assign,nonatomic) unsigned long long second;                                          //@synthesize second=_second - In the implementation block
@property (nonatomic,retain) NSDate * date;                                                      //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) BOOL trackSeconds;                                                  //@synthesize trackSeconds=_trackSeconds - In the implementation block
@property (assign,nonatomic) double circleDiameter;                                              //@synthesize circleDiameter=_circleDiameter - In the implementation block
@property (assign,nonatomic) unsigned long long currentStyle;                                    //@synthesize currentStyle=_currentStyle - In the implementation block
@property (assign,nonatomic) unsigned long long currentDial;                                     //@synthesize currentDial=_currentDial - In the implementation block
@property (assign,nonatomic) unsigned long long currentColor;                                    //@synthesize currentColor=_currentColor - In the implementation block
@property (nonatomic,retain) NSNumber * clockTimerToken;                                         //@synthesize clockTimerToken=_clockTimerToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_swatchImageForColorOption:(id)arg1 forDevice:(id)arg2 ;
+(id)_swatchForEditModeDependsOnOptions:(long long)arg1 forDevice:(id)arg2 ;
-(void)dealloc;
-(void)setHour:(unsigned long long)arg1 ;
-(void)setMinute:(unsigned long long)arg1 ;
-(void)setSecond:(unsigned long long)arg1 ;
-(NSDate *)date;
-(unsigned long long)hour;
-(unsigned long long)minute;
-(unsigned long long)second;
-(void)setDate:(NSDate *)arg1 ;
-(void)layoutSubviews;
-(void)setTimeOffset:(double)arg1 ;
-(void)setCurrentStyle:(unsigned long long)arg1 ;
-(unsigned long long)currentStyle;
-(void)_setupViews;
-(unsigned long long)currentColor;
-(void)setCurrentColor:(unsigned long long)arg1 ;
-(double)circleDiameter;
-(void)setCircleDiameter:(double)arg1 ;
-(void)setOverrideDate:(id)arg1 duration:(double)arg2 ;
-(id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3 ;
-(void)_loadSnapshotContentViews;
-(void)_unloadSnapshotContentViews;
-(id)_swatchImageForEditOption:(id)arg1 mode:(long long)arg2 withSelectedOptions:(id)arg3 ;
-(void)_configureForEditMode:(long long)arg1 ;
-(void)_configureForTransitionFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(void)_applyOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_applyTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 forCustomEditMode:(long long)arg4 slot:(id)arg5 ;
-(void)_cleanupAfterTransitionToOption:(id)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(id)_keylineViewForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(BOOL)_keylineLabelShouldShowIndividualOptionNamesForCustomEditMode:(long long)arg1 ;
-(void)_applyBreathingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(void)_applyRubberBandingFraction:(double)arg1 forCustomEditMode:(long long)arg2 slot:(id)arg3 ;
-(id)customEditOptionContainerViewForSlot:(id)arg1 ;
-(void)_configureComplicationView:(id)arg1 forSlot:(id)arg2 ;
-(void)_prepareForEditing;
-(void)_cleanupAfterEditing;
-(BOOL)_needsForegroundContainerView;
-(id)_additionalPrelaunchApplicationIdentifiers;
-(void)_applyDataMode;
-(void)_cleanupAfterTransitionComplicationSlot:(id)arg1 selectedComplication:(id)arg2 ;
-(NTKRoundedCornerOverlayView *)cornerView;
-(double)_editSpeedForCustomEditMode:(long long)arg1 slot:(id)arg2 ;
-(void)_prepareToZoomWithIconView:(id)arg1 minDiameter:(double)arg2 maxDiameter:(double)arg3 ;
-(void)_cleanupAfterZoom;
-(void)_configureTimeView:(id)arg1 ;
-(void)_updateDialTicksForBezelText;
-(void)_applyTransitionFraction:(double)arg1 fromColor:(unsigned long long)arg2 toColor:(unsigned long long)arg3 ;
-(void)_applyTransitionFraction:(double)arg1 fromStyle:(unsigned long long)arg2 toStyle:(unsigned long long)arg3 ;
-(double)_contentAlphaForEditMode:(long long)arg1 ;
-(double)_complicationAlphaForEditMode:(long long)arg1 ;
-(double)_dialAlphaForEditMode:(long long)arg1 ;
-(void)_applyTransitionFraction:(double)arg1 fromComplication:(id)arg2 toComplication:(id)arg3 slot:(id)arg4 ;
-(void)applyTransitionToCircularDialWithBezelFraction:(double)arg1 ;
-(double)bezelComplicationTextWidthInRadius;
-(id)utilityBezelComplicationView;
-(void)utilityComplicationView:(id)arg1 didChangeTextWidth:(double)arg2 ;
-(BOOL)_wantsStatusBarIconShadow;
-(void)applyToForegroundZoomFraction:(double)arg1 faceScale:(double)arg2 ;
-(id)_additonalViewsToApplyDesaturationDuringComplicationEditing;
-(void)createAndRemoveViewsForCurrentStateIfNeeded;
-(BOOL)_hasWindrunnerWedge;
-(double)_calculateDeviationBetweenHourAngle:(double)arg1 minuteAngle:(double)arg2 ;
-(void)applyWindrunnerMaskStartAngle:(double)arg1 endAngle:(double)arg2 ;
-(void)openVictoryAppFromRect:(CGRect)arg1 ;
-(void)olympusView:(id)arg1 didTapAppLogoFromRect:(CGRect)arg2 ;
-(void)setCurrentDial:(unsigned long long)arg1 ;
-(void)configureViewsForEditing;
-(void)animateClockHandsFromDate:(id)arg1 toDate:(id)arg2 duration:(double)arg3 ;
-(unsigned long long)currentDial;
-(void)logoTappedFromRect:(CGRect)arg1 ;
-(void)_stopClockUpdates;
-(void)_startClockUpdates;
-(double)_minimumBreathingScaleForComplicationSlot:(id)arg1 ;
-(void)_removeViews;
-(void)applyColorOnAnalogHands;
-(void)updateCircularMask;
-(void)_setupDialViewIfNeeded;
-(BOOL)isCircularDialWithBezel;
-(void)_updateDialBezelComplicationColor:(id)arg1 ;
-(void)setCircularMaskForCircularDialFraction:(double)arg1 circleDiameter:(double)arg2 ;
-(void)_applyTransitionFraction:(double)arg1 fromDial:(unsigned long long)arg2 toDial:(unsigned long long)arg3 ;
-(void)configureComplicationAlphaFraction:(double)arg1 fromEditMode:(long long)arg2 toEditMode:(long long)arg3 ;
-(NTKCircularAnalogDialView *)dialView;
-(double)_timeAlphaForEditMode:(long long)arg1 ;
-(double)_bezelUtilityComplicationAlphaForEditMode:(long long)arg1 ;
-(void)_setComplicationAlphaForTransitionFraction:(double)arg1 fromOption:(id)arg2 toOption:(id)arg3 customEditMode:(long long)arg4 slot:(id)arg5 ;
-(void)setCornerView:(NTKRoundedCornerOverlayView *)arg1 ;
-(void)setDialView:(NTKCircularAnalogDialView *)arg1 ;
-(void)_handleSignificantTimeChanged;
-(NTKOlympusTimeView *)olympusView;
-(void)_tearDownOlympusView;
-(void)_tearDownAnalogView;
-(void)tearDownDialView;
-(void)createOlympusViewIfNeeded;
-(void)_createAnalogBackgroundIfNeeded;
-(void)setupViewsForCurrentState;
-(double)contentViewScale;
-(void)_applyContentViewTranform:(CGAffineTransform)arg1 ;
-(void)updateHourComponentsWithDate:(id)arg1 ;
-(void)applyWindrunnerMask;
-(BOOL)_showAnalogHands;
-(NTKVictoryAnalogBackgroundView *)analogBackgroundView;
-(void)_applyTransitionFraction:(double)arg1 fromColorPalette:(id)arg2 toColorPalette:(id)arg3 animateElements:(BOOL)arg4 ;
-(void)setOlympusView:(NTKOlympusTimeView *)arg1 ;
-(void)setAnalogBackgroundView:(NTKVictoryAnalogBackgroundView *)arg1 ;
-(BOOL)contentLoaded;
-(void)setContentLoaded:(BOOL)arg1 ;
-(BOOL)trackSeconds;
-(void)setTrackSeconds:(BOOL)arg1 ;
-(NSNumber *)clockTimerToken;
-(void)setClockTimerToken:(NSNumber *)arg1 ;
@end

