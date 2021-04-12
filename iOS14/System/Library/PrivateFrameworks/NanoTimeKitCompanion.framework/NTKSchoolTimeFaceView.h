/*
* Generated on Thursday, January 14, 2021 at 2:26:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <NanoTimeKitCompanion/NTKFaceView.h>

@class NTKSchoolTimeDialView, NTKAnalogHandsView, NTKDigitalTimeLabel, UILabel, NTKCurvedColoringLabel, CLKClockTimer, CLKClockTimerToken, NSDateFormatter;

@interface NTKSchoolTimeFaceView : NTKFaceView {

	NTKSchoolTimeDialView* _dialView;
	NTKAnalogHandsView* _handsView;
	NTKDigitalTimeLabel* _digitalTimeLabel;
	UILabel* _dateLabel;
	UILabel* _nameLabel;
	NTKCurvedColoringLabel* _curvedNameLabel;
	CLKClockTimer* _clockTimer;
	CLKClockTimerToken* _clockTimerToken;
	NSDateFormatter* _formatter;

}
+(id)secondHandColor;
+(id)schoolTimeColor;
-(void)_setupNotifications;
-(void)setupUI;
-(void)_setDate:(id)arg1 ;
-(void)layoutSubviews;
-(void)_stopObserving;
-(void)setName:(id)arg1 ;
-(void)_startObserving;
-(void)dealloc;
-(id)initWithFaceStyle:(long long)arg1 forDevice:(id)arg2 clientIdentifier:(id)arg3 ;
-(void)_loadSnapshotContentViews;
-(void)_unloadSnapshotContentViews;
-(void)_applyDataMode;
-(void)_applyFrozen;
-(void)_startClockUpdates;
-(void)_stopClockUpdates;
-(void)_setupNameLabel;
-(void)_updateTimeAndDate:(id)arg1 animated:(BOOL)arg2 ;
-(void)_layoutCurvedNameLabel;
-(void)_timeDidUpdate:(id)arg1 ;
-(void)_handleChangeNotification;
-(void)_tearDownUI;
@end

