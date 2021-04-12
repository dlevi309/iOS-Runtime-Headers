/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class HFAccessorySettingManagedConfigurationAdapter, HFAccessorySettingSiriLanguageAdapter, HFAccessorySettingAdapter, NSSet;

@interface HFAccessorySettingDefaultAdapterCollection : NSObject {

	HFAccessorySettingManagedConfigurationAdapter* _managedConfigurationAdapter;
	HFAccessorySettingSiriLanguageAdapter* _siriLanguageAdapter;
	HFAccessorySettingAdapter* _mobileTimerAdapter;

}

@property (nonatomic,retain) HFAccessorySettingManagedConfigurationAdapter * managedConfigurationAdapter;              //@synthesize managedConfigurationAdapter=_managedConfigurationAdapter - In the implementation block
@property (nonatomic,retain) HFAccessorySettingAdapter * mobileTimerAdapter;                                           //@synthesize mobileTimerAdapter=_mobileTimerAdapter - In the implementation block
@property (nonatomic,retain) HFAccessorySettingSiriLanguageAdapter * siriLanguageAdapter;                              //@synthesize siriLanguageAdapter=_siriLanguageAdapter - In the implementation block
@property (nonatomic,readonly) NSSet * allAdapters; 
-(HFAccessorySettingManagedConfigurationAdapter *)managedConfigurationAdapter;
-(HFAccessorySettingAdapter *)mobileTimerAdapter;
-(HFAccessorySettingSiriLanguageAdapter *)siriLanguageAdapter;
-(NSSet *)allAdapters;
-(void)setManagedConfigurationAdapter:(HFAccessorySettingManagedConfigurationAdapter *)arg1 ;
-(void)setSiriLanguageAdapter:(HFAccessorySettingSiriLanguageAdapter *)arg1 ;
-(void)setMobileTimerAdapter:(HFAccessorySettingAdapter *)arg1 ;
@end

