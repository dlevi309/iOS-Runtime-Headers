/*
* Generated on Thursday, January 14, 2021 at 2:24:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>
#import <libobjc.A.dylib/HFAccessorySettingSiriLanguageAdapterObserver.h>

@class HFAccessorySettingSiriLanguageAdapter, HUSiriLanguageOptionItemProvider, HFAccessorySettingGroupItem, NSString;

@interface HUAccessorySettingsSiriOutputVoiceItemManager : HFItemManager <HFAccessorySettingSiriLanguageAdapterObserver> {

	HFAccessorySettingSiriLanguageAdapter* _adapter;
	HUSiriLanguageOptionItemProvider* _accentOptionItemProvider;
	HUSiriLanguageOptionItemProvider* _genderOptionItemProvider;

}

@property (nonatomic,retain) HUSiriLanguageOptionItemProvider * accentOptionItemProvider;              //@synthesize accentOptionItemProvider=_accentOptionItemProvider - In the implementation block
@property (nonatomic,retain) HUSiriLanguageOptionItemProvider * genderOptionItemProvider;              //@synthesize genderOptionItemProvider=_genderOptionItemProvider - In the implementation block
@property (nonatomic,copy,readonly) HFAccessorySettingGroupItem * groupItem; 
@property (nonatomic,readonly) HFAccessorySettingSiriLanguageAdapter * adapter;                        //@synthesize adapter=_adapter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDelegate:(id)arg1 groupItem:(id)arg2 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(HFAccessorySettingSiriLanguageAdapter *)adapter;
-(void)siriLanguageAdapter:(id)arg1 availableLanguageOptionsDidChange:(id)arg2 ;
-(void)siriLanguageAdapter:(id)arg1 selectedLanguageOptionDidChange:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(void)_registerForExternalUpdates;
-(void)_unregisterForExternalUpdates;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(HFAccessorySettingGroupItem *)groupItem;
-(id)updateSelectionWithOptionItem:(id)arg1 ;
-(void)setAccentOptionItemProvider:(HUSiriLanguageOptionItemProvider *)arg1 ;
-(void)setGenderOptionItemProvider:(HUSiriLanguageOptionItemProvider *)arg1 ;
-(HUSiriLanguageOptionItemProvider *)accentOptionItemProvider;
-(HUSiriLanguageOptionItemProvider *)genderOptionItemProvider;
@end

