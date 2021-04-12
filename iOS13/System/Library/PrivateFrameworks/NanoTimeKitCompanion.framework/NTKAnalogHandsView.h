/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/NTKTimeView.h>

@class NTKColoringImageView, NSNumber, NSTimer, CALayer, CLKDevice, NTKHandView, NSDate, NSCalendar, UIColor, NSTimeZone, UIView, NSString;

@interface NTKAnalogHandsView : UIView <NTKTimeView> {

	NTKColoringImageView* _colorTransitionSecondHandLowerView;
	NTKColoringImageView* _colorTransitionSecondHandUpperView;
	NTKColoringImageView* _colorTransitionSecondHandSmallCircleView;
	NTKColoringImageView* _colorTransitionSecondHandLargeCircleView;
	BOOL _animatingToNewDate;
	NSNumber* _displayLinkToken;
	NSTimer* _animationUpdateTimer;
	double _timeOffset;
	CALayer* _minuteHandTransitionBodyLayer;
	CALayer* _minuteHandTransitionStemLayer;
	CALayer* _minuteHandTransitionPegLayer;
	CALayer* _hourHandTransitionBodyLayer;
	CALayer* _hourHandTransitionStemLayer;
	unsigned long long _style;
	BOOL _timeScrubbing;
	BOOL _frozen;
	BOOL _showDebugClientSideHands;
	BOOL _shouldRestoreSecondHandAfterScrubbing;
	CLKDevice* _device;
	NTKHandView* _hourHandView;
	NTKHandView* _minuteHandView;
	NTKHandView* _secondHandView;
	NSDate* _overrideDate;
	NSCalendar* _calendar;
	long long _dataMode;
	UIColor* _inlayColor;
	NTKHandView* _hourHandView_clientSide;
	NTKHandView* _minuteHandView_clientSide;
	NTKHandView* _secondHandView_clientSide;
	NSTimeZone* _timeZone;

}

@property (nonatomic,readonly) NTKHandView * hourHandView_clientSide;                 //@synthesize hourHandView_clientSide=_hourHandView_clientSide - In the implementation block
@property (nonatomic,readonly) NTKHandView * minuteHandView_clientSide;               //@synthesize minuteHandView_clientSide=_minuteHandView_clientSide - In the implementation block
@property (nonatomic,readonly) NTKHandView * secondHandView_clientSide;               //@synthesize secondHandView_clientSide=_secondHandView_clientSide - In the implementation block
@property (assign,nonatomic) BOOL showDebugClientSideHands;                           //@synthesize showDebugClientSideHands=_showDebugClientSideHands - In the implementation block
@property (nonatomic,retain) NTKHandView * hourHandView;                              //@synthesize hourHandView=_hourHandView - In the implementation block
@property (nonatomic,retain) NTKHandView * minuteHandView;                            //@synthesize minuteHandView=_minuteHandView - In the implementation block
@property (nonatomic,retain) NTKHandView * secondHandView;                            //@synthesize secondHandView=_secondHandView - In the implementation block
@property (assign,nonatomic) BOOL shouldRestoreSecondHandAfterScrubbing;              //@synthesize shouldRestoreSecondHandAfterScrubbing=_shouldRestoreSecondHandAfterScrubbing - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone;                                   //@synthesize timeZone=_timeZone - In the implementation block
@property (nonatomic,readonly) CLKDevice * device;                                    //@synthesize device=_device - In the implementation block
@property (nonatomic,readonly) UIView * secondHandDot; 
@property (nonatomic,readonly) UIView * minuteHandDot; 
@property (nonatomic,readonly) NSDate * overrideDate;                                 //@synthesize overrideDate=_overrideDate - In the implementation block
@property (nonatomic,readonly) NSCalendar * calendar;                                 //@synthesize calendar=_calendar - In the implementation block
@property (nonatomic,readonly) BOOL timeScrubbing;                                    //@synthesize timeScrubbing=_timeScrubbing - In the implementation block
@property (assign,nonatomic) long long dataMode;                                      //@synthesize dataMode=_dataMode - In the implementation block
@property (assign,getter=isFrozen,nonatomic) BOOL frozen;                             //@synthesize frozen=_frozen - In the implementation block
@property (nonatomic,retain) UIColor * inlayColor;                                    //@synthesize inlayColor=_inlayColor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(long long)preferredCountOfInstancesToCache;
-(void)dealloc;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(NSCalendar *)calendar;
-(NSTimeZone *)timeZone;
-(CLKDevice *)device;
-(BOOL)isFrozen;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)didMoveToWindow;
-(void)setTimeOffset:(double)arg1 ;
-(void)setFrozen:(BOOL)arg1 ;
-(long long)dataMode;
-(void)setDataMode:(long long)arg1 ;
-(NSDate *)overrideDate;
-(void)_handleDisplayLink;
-(void)setOverrideDate:(id)arg1 duration:(double)arg2 ;
-(id)displayTime;
-(id)initForDevice:(id)arg1 ;
-(BOOL)timeScrubbing;
-(void)endScrubbingAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(NTKHandView *)minuteHandView;
-(void)setInlayColor:(UIColor *)arg1 ;
-(NTKHandView *)hourHandView;
-(NTKHandView *)secondHandView;
-(void)applySecondHandColor:(id)arg1 ;
-(UIColor *)inlayColor;
-(void)setHourHandView:(NTKHandView *)arg1 ;
-(void)setMinuteHandView:(NTKHandView *)arg1 ;
-(void)setSecondHandView:(NTKHandView *)arg1 ;
-(void)applyHourMinuteHandsTransitionFraction:(double)arg1 fromStrokeColor:(id)arg2 fromFillColor:(id)arg3 toStrokeColor:(id)arg4 toFillColor:(id)arg5 ;
-(void)applySecondHandTransitionFraction:(double)arg1 fromColor:(id)arg2 toColor:(id)arg3 ;
-(double)_minuteHandDotDiameter;
-(id)initForDevice:(id)arg1 withStyle:(unsigned long long)arg2 ;
-(void)_significantTimeChanged;
-(UIView *)minuteHandDot;
-(UIView *)secondHandDot;
-(void)_deregisterFromDisplayLinkManager;
-(void)_enumerateHandViews:(/*^block*/id)arg1 ;
-(void)_startNewTimeAnimation;
-(void)_stopTimeAnimation;
-(void)_repointDebugHandsToCurrentTime;
-(BOOL)_canRunTimeAnimation;
-(double)_timeAnimationFramesPerSecondForDevice:(id)arg1 ;
-(void)scrubToDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)_enumerateSecondHandViewsWithBlock:(/*^block*/id)arg1 ;
-(BOOL)shouldRestoreSecondHandAfterScrubbing;
-(void)_removeHourMinuteHandsTransitionLayers;
-(void)_addHourMinuteHandsTransitionLayers;
-(void)_removeColorTransitionViews;
-(BOOL)_dontRepointDebugHands;
-(void)startScrubbingAnimated:(BOOL)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)applyHourMinuteHandsStrokeColor:(id)arg1 fillColor:(id)arg2 ;
-(void)_accessibilityInvalidateElements;
-(NTKHandView *)hourHandView_clientSide;
-(NTKHandView *)minuteHandView_clientSide;
-(NTKHandView *)secondHandView_clientSide;
-(BOOL)showDebugClientSideHands;
-(void)setShowDebugClientSideHands:(BOOL)arg1 ;
-(void)setShouldRestoreSecondHandAfterScrubbing:(BOOL)arg1 ;
@end

