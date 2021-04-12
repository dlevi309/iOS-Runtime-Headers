/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NanoTimeKitCompanion-Structs.h>
#import <NanoTimeKitCompanion/NTKRichComplicationCircularBaseView.h>

@class NTKRichComplicationDialView, UILabel, NTKWorldClockRichComplicationHandsView, WorldClockCity, NSNumber, UIColor;

@interface NTKWorldClockRichComplicationCircularView : NTKRichComplicationCircularBaseView {

	SCD_Struct_NT7 _constants;
	NTKRichComplicationDialView* _dialView;
	UILabel* _cityNameLabel;
	NTKWorldClockRichComplicationHandsView* _handsView;
	WorldClockCity* _city;
	NSNumber* _clockTimerToken;
	BOOL _positionLabelNorthSide;
	UIColor* _daytimeBackgroundColor;
	UIColor* _daytimeHandsColor;
	UIColor* _daytimeHandsDotColor;
	UIColor* _nighttimeBackgroundColor;
	UIColor* _nighttimeHandsColor;
	UIColor* _nighttimeHandsDotColor;

}

@property (nonatomic,retain) UIColor * daytimeBackgroundColor;                //@synthesize daytimeBackgroundColor=_daytimeBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * daytimeHandsColor;                     //@synthesize daytimeHandsColor=_daytimeHandsColor - In the implementation block
@property (nonatomic,retain) UIColor * daytimeHandsDotColor;                  //@synthesize daytimeHandsDotColor=_daytimeHandsDotColor - In the implementation block
@property (nonatomic,retain) UIColor * nighttimeBackgroundColor;              //@synthesize nighttimeBackgroundColor=_nighttimeBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * nighttimeHandsColor;                   //@synthesize nighttimeHandsColor=_nighttimeHandsColor - In the implementation block
@property (nonatomic,retain) UIColor * nighttimeHandsDotColor;                //@synthesize nighttimeHandsDotColor=_nighttimeHandsDotColor - In the implementation block
-(id)init;
-(void)dealloc;
-(void)setPaused:(BOOL)arg1 ;
-(void)layoutSubviews;
-(void)_updateUI;
-(void)transitionToMonochromeWithFraction:(double)arg1 ;
-(void)updateMonochromeColor;
-(void)_handleTemplate:(id)arg1 reason:(long long)arg2 ;
-(UIColor *)daytimeHandsColor;
-(void)_stopClockUpdates;
-(BOOL)_shouldAnimateWithTemplateUpdateReason:(long long)arg1 ;
-(void)_startClockUpdates;
-(BOOL)_shouldUseDaytimeColoring;
-(UIColor *)daytimeBackgroundColor;
-(UIColor *)daytimeHandsDotColor;
-(UIColor *)nighttimeBackgroundColor;
-(UIColor *)nighttimeHandsColor;
-(UIColor *)nighttimeHandsDotColor;
-(void)_applyPausedUpdate;
-(void)setDaytimeBackgroundColor:(UIColor *)arg1 ;
-(void)setDaytimeHandsColor:(UIColor *)arg1 ;
-(void)setDaytimeHandsDotColor:(UIColor *)arg1 ;
-(void)setNighttimeBackgroundColor:(UIColor *)arg1 ;
-(void)setNighttimeHandsColor:(UIColor *)arg1 ;
-(void)setNighttimeHandsDotColor:(UIColor *)arg1 ;
@end

