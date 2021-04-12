/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/


@class NTKOlympusTimeView, CLKClockTimerToken, NTKFaceView, NSDate;

@interface NTKOlympusController : NSObject {

	NTKOlympusTimeView* _olympusView;
	CLKClockTimerToken* _clockTimerToken;
	NTKFaceView* _faceView;
	NSDate* _date;
	unsigned long long _hour;
	unsigned long long _minute;
	unsigned long long _second;

}

@property (nonatomic,retain) CLKClockTimerToken * clockTimerToken;                 //@synthesize clockTimerToken=_clockTimerToken - In the implementation block
@property (assign,nonatomic,__weak) NTKFaceView * faceView;                        //@synthesize faceView=_faceView - In the implementation block
@property (nonatomic,retain) NSDate * date;                                        //@synthesize date=_date - In the implementation block
@property (assign,nonatomic) unsigned long long hour;                              //@synthesize hour=_hour - In the implementation block
@property (assign,nonatomic) unsigned long long minute;                            //@synthesize minute=_minute - In the implementation block
@property (assign,nonatomic) unsigned long long second;                            //@synthesize second=_second - In the implementation block
@property (assign,nonatomic,__weak) NTKOlympusTimeView * olympusView;              //@synthesize olympusView=_olympusView - In the implementation block
-(unsigned long long)hour;
-(unsigned long long)second;
-(void)setHour:(unsigned long long)arg1 ;
-(unsigned long long)minute;
-(void)setDate:(NSDate *)arg1 ;
-(void)setMinute:(unsigned long long)arg1 ;
-(NSDate *)date;
-(void)setSecond:(unsigned long long)arg1 ;
-(void)dealloc;
-(void)_handleSignificantTimeChanged;
-(void)setOverrideDate:(id)arg1 duration:(double)arg2 ;
-(void)setFaceView:(NTKFaceView *)arg1 ;
-(BOOL)_hasWindrunnerWedge;
-(void)_startClockUpdates;
-(void)_stopClockUpdates;
-(void)_animateClockHandsFromDate:(id)arg1 toDate:(id)arg2 duration:(double)arg3 ;
-(void)_updateHourComponentsWithDate:(id)arg1 ;
-(void)_applyWindrunnerMask;
-(NTKOlympusTimeView *)olympusView;
-(NTKFaceView *)faceView;
-(id)initWithFaceView:(id)arg1 olympusView:(id)arg2 ;
-(void)applyDataMode:(long long)arg1 ;
-(void)setOlympusView:(NTKOlympusTimeView *)arg1 ;
-(CLKClockTimerToken *)clockTimerToken;
-(void)setClockTimerToken:(CLKClockTimerToken *)arg1 ;
@end

