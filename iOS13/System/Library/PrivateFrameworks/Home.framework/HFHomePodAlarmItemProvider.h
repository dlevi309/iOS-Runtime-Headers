/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFItemProvider.h>

@protocol HFHomePodAlarmItemProviderDelegate, HFMediaProfileContainer;
@class HFAccessorySettingMobileTimerAdapter, NSMutableDictionary, NSMutableSet;

@interface HFHomePodAlarmItemProvider : HFItemProvider {

	HFAccessorySettingMobileTimerAdapter* _mobileTimerAdapter;
	id<HFHomePodAlarmItemProviderDelegate> _delegate;
	id<HFMediaProfileContainer> _mediaProfileContainer;
	NSMutableDictionary* _alarmIDToItemMap;
	NSMutableSet* _alarmItems;

}

@property (nonatomic,readonly) id<HFMediaProfileContainer> mediaProfileContainer;                      //@synthesize mediaProfileContainer=_mediaProfileContainer - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * alarmIDToItemMap;                                 //@synthesize alarmIDToItemMap=_alarmIDToItemMap - In the implementation block
@property (nonatomic,readonly) NSMutableSet * alarmItems;                                              //@synthesize alarmItems=_alarmItems - In the implementation block
@property (nonatomic,readonly) HFAccessorySettingMobileTimerAdapter * mobileTimerAdapter;              //@synthesize mobileTimerAdapter=_mobileTimerAdapter - In the implementation block
@property (assign,nonatomic,__weak) id<HFHomePodAlarmItemProviderDelegate> delegate;                   //@synthesize delegate=_delegate - In the implementation block
-(id<HFHomePodAlarmItemProviderDelegate>)delegate;
-(void)setDelegate:(id<HFHomePodAlarmItemProviderDelegate>)arg1 ;
-(id)items;
-(id)reloadItems;
-(id)initWithMediaProfileContainer:(id)arg1 ;
-(id<HFMediaProfileContainer>)mediaProfileContainer;
-(HFAccessorySettingMobileTimerAdapter *)mobileTimerAdapter;
-(NSMutableSet *)alarmItems;
-(NSMutableDictionary *)alarmIDToItemMap;
@end

