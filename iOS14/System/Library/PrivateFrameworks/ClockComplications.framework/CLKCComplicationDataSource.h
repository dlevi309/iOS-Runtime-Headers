/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(BOOL)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2 ;
+(long long)tritiumUpdatePriority;
+(BOOL)hasSensitiveUI;
+(BOOL)wantsToSkipPauseWhenEnteringTritium;
-(id<CLKCComplicationDataSourceDelegate>)delegate;
-(void)pause;
-(CLKDevice *)device;
-(long long)family;
-(void)setDelegate:(id<CLKCComplicationDataSourceDelegate>)arg1 ;
-(void)becomeActive;
-(void)pauseAnimations;
-(void)resumeAnimations;
-(void)resume;
-(CLKCComplication *)complication;
-(void)getTimelineEndDateWithHandler:(/*^block*/id)arg1 ;
-(void)getCurrentTimelineEntryWithHandler:(/*^block*/id)arg1 ;
-(id)alwaysOnTemplate;
-(void)getTimelineEntriesAfterDate:(id)arg1 limit:(unsigned long long)arg2 withHandler:(/*^block*/id)arg3 ;
-(id)initWithComplication:(id)arg1 family:(long long)arg2 forDevice:(id)arg3 ;
-(id)currentSwitcherTemplate;
-(id)sampleTemplate;
-(id)complicationApplicationIdentifier;
-(BOOL)supportsTapAction;
-(BOOL)alwaysShowIdealizedTemplateInSwitcher;
-(id)lockedTemplate;
-(void)getLaunchURLForTimelineEntryDate:(id)arg1 timeTravelDate:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(unsigned long long)timelineAnimationBehavior;
-(void)becomeInactive;
-(void)didTouchDownInView:(id)arg1 ;
-(void)didTouchUpInsideView:(id)arg1 ;
-(id)privacyTemplate;
-(void)getSupportedTimeTravelDirectionsWithHandler:(/*^block*/id)arg1 ;
-(void)getTimelineStartDateWithHandler:(/*^block*/id)arg1 ;
-(void)getTimelineEntriesBeforeDate:(id)arg1 limit:(unsigned long long)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)getDesiredUpdateIntervalWithHandler:(/*^block*/id)arg1 ;
@end

