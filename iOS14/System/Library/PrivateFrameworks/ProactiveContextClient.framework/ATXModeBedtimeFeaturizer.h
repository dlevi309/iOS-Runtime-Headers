/*
* Generated on Thursday, January 14, 2021 at 2:28:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ProactiveContextClient.framework/ProactiveContextClient
*/

#import <libobjc.A.dylib/ATXModeFeaturizer.h>

@protocol ATXModeFeaturizerDelegate;
@class MTAlarmManager, MTAlarm, NSTimer, NSString;

@interface ATXModeBedtimeFeaturizer : NSObject <ATXModeFeaturizer> {

	MTAlarmManager* _alarmManager;
	MTAlarm* _sleepAlarm;
	NSTimer* _timer;
	int _significantTimeToken;
	id<ATXModeFeaturizerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<ATXModeFeaturizerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)stopListening;
-(id<ATXModeFeaturizerDelegate>)delegate;
-(void)beginListening;
-(void)setDelegate:(id<ATXModeFeaturizerDelegate>)arg1 ;
-(id)provideFeatures;
-(void)_fetchSleepAlarmIfNecessary;
-(void)_updateFeatures;
-(void)_scheduleTimerForAlarm:(id)arg1 ;
-(void)_alarmsDidChange:(id)arg1 ;
@end

