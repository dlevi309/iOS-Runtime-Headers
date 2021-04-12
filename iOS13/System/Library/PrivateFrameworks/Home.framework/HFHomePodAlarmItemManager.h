/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFItemManager.h>

@protocol HFMediaProfileContainer;
@class HFHomePodAlarmItemModule, HFAccessorySettingMobileTimerAdapter;

@interface HFHomePodAlarmItemManager : HFItemManager {

	id<HFMediaProfileContainer> _mediaProfileContainer;
	HFHomePodAlarmItemModule* _alarmItemModule;

}

@property (nonatomic,readonly) id<HFMediaProfileContainer> mediaProfileContainer;                      //@synthesize mediaProfileContainer=_mediaProfileContainer - In the implementation block
@property (nonatomic,readonly) HFAccessorySettingMobileTimerAdapter * mobileTimerAdapter; 
@property (nonatomic,readonly) HFHomePodAlarmItemModule * alarmItemModule;                             //@synthesize alarmItemModule=_alarmItemModule - In the implementation block
-(id<HFMediaProfileContainer>)mediaProfileContainer;
-(HFAccessorySettingMobileTimerAdapter *)mobileTimerAdapter;
-(HFHomePodAlarmItemModule *)alarmItemModule;
-(void)_registerForExternalUpdates;
-(void)_unregisterForExternalUpdates;
-(id)initWithDelegate:(id)arg1 mediaProfileContainer:(id)arg2 ;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
@end

