/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFItemModule.h>
#import <libobjc.A.dylib/HFAccessorySettingMobileTimerAdapterObserver.h>

@protocol HFMediaProfileContainer;
@class NSSet, HFHomePodAlarmItemProvider, HFAccessorySettingMobileTimerAdapter, NSString;

@interface HFHomePodAlarmItemModule : HFItemModule <HFAccessorySettingMobileTimerAdapterObserver> {

	NSSet* _itemProviders;
	id<HFMediaProfileContainer> _mediaProfileContainer;
	HFHomePodAlarmItemProvider* _alarmItemProvider;

}

@property (nonatomic,readonly) NSSet * itemProviders;                                                  //@synthesize itemProviders=_itemProviders - In the implementation block
@property (nonatomic,readonly) HFHomePodAlarmItemProvider * alarmItemProvider;                         //@synthesize alarmItemProvider=_alarmItemProvider - In the implementation block
@property (nonatomic,readonly) id<HFMediaProfileContainer> mediaProfileContainer;                      //@synthesize mediaProfileContainer=_mediaProfileContainer - In the implementation block
@property (nonatomic,readonly) HFAccessorySettingMobileTimerAdapter * mobileTimerAdapter; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSSet *)itemProviders;
-(id)initWithItemUpdater:(id)arg1 mediaProfileContainer:(id)arg2 ;
-(id)buildSectionsWithDisplayedItems:(id)arg1 ;
-(id<HFMediaProfileContainer>)mediaProfileContainer;
-(HFAccessorySettingMobileTimerAdapter *)mobileTimerAdapter;
-(void)registerForExternalUpdates;
-(void)unregisterForExternalUpdates;
-(void)mobileTimerAdapter:(id)arg1 didUpdateAlarms:(id)arg2 ;
-(HFHomePodAlarmItemProvider *)alarmItemProvider;
@end

