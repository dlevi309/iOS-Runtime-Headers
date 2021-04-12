/*
* Generated on Thursday, January 14, 2021 at 2:27:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MobileTimerUI.framework/MobileTimerUI
*/

#import <MobileTimerUI/MobileTimerUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/MTClock.h>

@class UIImage, UIImageView, UIView, NSDate, NSCalendar, NSTimeZone;

@interface MTUIAnalogClockView : UIView <MTClock> {

	long long _runMode;
	UIImage* _faceDayImage;
	UIImage* _faceNightImage;
	UIImageView* _faceView;
	UIView* _dayHands[3];
	UIView* _nightHands[3];
	UIImageView* _middleDotDay;
	UIImageView* _middleDotNight;
	UIImageView* _middleRedDot;
	NSDate* _time;
	BOOL _nighttime;
	double _seconds;
	int _flutterIndex;
	BOOL _isRenderStateStale;
	NSCalendar* _calendar;
	BOOL _minuteHourAnimationTriggered;

}

@property (assign,nonatomic) long long runMode;                                //@synthesize runMode=_runMode - In the implementation block
@property (nonatomic,readonly) long long style; 
@property (nonatomic,readonly) UIImageView * faceView;                         //@synthesize faceView=_faceView - In the implementation block
@property (nonatomic,readonly) long long hour; 
@property (nonatomic,readonly) long long minute; 
@property (nonatomic,retain) NSDate * time;                                    //@synthesize time=_time - In the implementation block
@property (nonatomic,retain) NSTimeZone * timeZone; 
@property (getter=isNighttime,nonatomic,readonly) BOOL nighttime;              //@synthesize nighttime=_nighttime - In the implementation block
@property (getter=isStarted,nonatomic,readonly) BOOL started; 
+(void)initialize;
+(id)makeClockHand:(long long)arg1 daytime:(BOOL)arg2 ;
+(double)faceRadius;
+(id)nightTimeHourHandColor;
+(void)unregisterTickingClock:(id)arg1 ;
+(void)registerTickingClock:(id)arg1 ;
+(id)imageInBundleForName:(id)arg1 ;
+(id)overHourHandDotForDayTime:(BOOL)arg1 ;
+(id)dayTimeMinuteHandColor;
+(id)overSecondHandDotImage;
+(double)secondHandWidth;
+(id)numeralFont;
+(id)makeClockFaceForDaytime:(BOOL)arg1 ;
+(id)resourcePath;
+(id)dayTimeFaceColor;
+(id)dayTimeSecondHandColor;
+(double)secondHandOverhangLength;
+(id)nightTimeSecondHandColor;
+(id)imageForType:(int)arg1 dayTime:(BOOL)arg2 generation:(/*^block*/id)arg3 ignoreCache:(BOOL)arg4 ;
+(double)secondHandLength;
+(double)numeralInset;
+(double)overHourHandDotSize;
+(double)hourHandLength;
+(void)adjustNumberalCenter:(CGPoint*)arg1 forNumeralIndex:(long long)arg2 ;
+(void)registerClock:(id)arg1 ;
+(void)updateTimeForAllTicking;
+(id)cacheVersionHash;
+(void)updateFlutterForAllTicking;
+(id)shadowInfoAtIndex:(unsigned long long)arg1 ;
+(id)makeOverSecondHandDotImage;
+(double)minuteHandLength;
+(id)nightTimeFaceColor;
+(id)nightTimeOverHourHandDotColor;
+(BOOL)doesFaceHaveShadow;
+(CGPoint)handRotationalCenterForHand:(long long)arg1 ;
+(id)imageForType:(int)arg1 dayTime:(BOOL)arg2 generation:(/*^block*/id)arg3 ;
+(UIEdgeInsets)insetsForStyle:(long long)arg1 ;
+(id)makeDotImageSize:(double)arg1 color:(id)arg2 ;
+(double)minuteHandWidth;
+(id)imageCacheNameForType:(int)arg1 daytime:(BOOL)arg2 ;
+(BOOL)isClockRegistered:(id)arg1 ;
+(id)overSecondHandDotColor;
+(BOOL)shouldCacheImageOnDiskForType:(int)arg1 dayTime:(BOOL)arg2 ;
+(double)antialiasPaddingRatio;
+(CGSize)clockSize;
+(BOOL)hasOverSecondHandDot;
+(BOOL)hasOverHourHandDot;
+(id)nightTimeTextColor;
+(double)hourHandWidth;
+(CGSize)sizeForStyle:(long long)arg1 ;
+(id)analogClockWithStyle:(long long)arg1 ;
+(id)dayTimeOverHourHandDotColor;
+(CGPoint)shadowRotationalCenterForHand:(long long)arg1 ;
+(id)dayTimeHourHandColor;
+(id)clockHand:(long long)arg1 daytime:(BOOL)arg2 ;
+(id)clockFaceForDaytime:(BOOL)arg1 ignoreCache:(BOOL)arg2 ;
+(double)overSecondHandDotSize;
+(void)registerSweepingClock:(id)arg1 ;
+(id)cacheVersionedPath;
+(Class)classForStyle:(long long)arg1 ;
+(id)clockFaceForDaytime:(BOOL)arg1 ;
+(id)overHourHandDotImageForDaytime:(BOOL)arg1 ;
+(void)updateTimeForAllSweeping;
+(void)unregisterSweepingClock:(id)arg1 ;
+(long long)style;
+(UIEdgeInsets)shadowInsets;
+(double)secondHandMainLength;
+(id)dayTimeTextColor;
+(id)cacheTopLevelPath;
+(id)nightTimeMinuteHandColor;
+(void)unregisterClock:(id)arg1 ;
-(long long)hour;
-(void)updateTime;
-(double)updateInterval;
-(NSTimeZone *)timeZone;
-(NSDate *)time;
-(void)setTime:(NSDate *)arg1 ;
-(CGSize)intrinsicContentSize;
-(double)coarseUpdateInterval;
-(void)setTimeZone:(NSTimeZone *)arg1 ;
-(id)init;
-(long long)minute;
-(BOOL)isStarted;
-(void)start;
-(long long)runMode;
-(void)stop;
-(void)setFrame:(CGRect)arg1 ;
-(void)handleLocaleChange;
-(void)updateTimeContinuously:(long long)arg1 ;
-(long long)style;
-(void)setRunMode:(long long)arg1 ;
-(UIImageView *)faceView;
-(void)updateFlutter;
-(void)setHandTransformForHandIndex:(long long)arg1 ;
-(void)setHandAngle:(double)arg1 forHandIndex:(long long)arg2 ;
-(void)updateTimeAnimated:(BOOL)arg1 ;
-(void)setTime:(id)arg1 animated:(BOOL)arg2 ;
-(void)setNighttime:(BOOL)arg1 ;
-(BOOL)isNighttime;
@end

