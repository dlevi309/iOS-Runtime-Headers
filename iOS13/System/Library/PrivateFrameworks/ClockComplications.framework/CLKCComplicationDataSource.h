/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockComplications.framework/ClockComplications
*/


@protocol CLKCComplicationDataSourceDelegate;
@class CLKCComplication, CLKDevice;

@interface CLKCComplicationDataSource : NSObject {

	CLKCComplication* _complication;
	long long _family;
	CLKDevice* _device;
	id<CLKCComplicationDataSourceDelegate> _delegate;

}

@property (nonatomic,readonly) CLKCComplication * complication;                                   //@synthesize complication=_complication - In the implementation block
@property (nonatomic,readonly) long long family;                                                  //@synthesize family=_family - In the implementation block
@property (nonatomic,readonly) CLKDevice * device;                                                //@synthesize device=_device - In the implementation block
@property (assign,nonatomic,__weak) id<CLKCComplicationDataSourceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) unsigned long long timelineAnimationBehavior; 
@property (nonatomic,readonly) BOOL supportsTapAction; 
+(BOOL)hasSensitiveUI;
+(BOOL)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2 ;
+(BOOL)wantsToSkipPauseWhenEnteringTritium;
-(id<CLKCComplicationDataSourceDelegate>)delegate;
-(void)setDelegate:(id<CLKCComplicationDataSourceDelegate>)arg1 ;
-(void)pause;
-(void)resume;
-(long long)family;
-(CLKDevice *)device;
-(void)becomeActive;
-(void)pauseAnimations;
-(void)resumeAnimations;
-(id)complicationApplicationIdentifier;
-(void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3 ;
-(unsigned long long)timelineAnimationBehavior;
-(BOOL)supportsTapAction;
-(void)becomeInactive;
-(void)didTouchDownInView:(id)arg1 ;
-(void)didTouchUpInsideView:(id)arg1 ;
-(BOOL)alwaysShowIdealizedTemplateInSwitcher;
-(id)currentSwitcherTemplate;
-(id)lockedTemplate;
-(id)privacyTemplate;
-(id)alwaysOnTemplate;
-(void)getSupportedTimeTravelDirectionsWithHandler:(/*^block*/id)arg1 ;
-(void)getTimelineStartDateWithHandler:(/*^block*/id)arg1 ;
-(void)getTimelineEndDateWithHandler:(/*^block*/id)arg1 ;
-(void)getCurrentTimelineEntryWithHandler:(/*^block*/id)arg1 ;
-(void)getTimelineEntriesBeforeDate:(id)arg1 limit:(unsigned long long)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)getTimelineEntriesAfterDate:(id)arg1 limit:(unsigned long long)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)getDesiredUpdateIntervalWithHandler:(/*^block*/id)arg1 ;
-(CLKCComplication *)complication;
@end

