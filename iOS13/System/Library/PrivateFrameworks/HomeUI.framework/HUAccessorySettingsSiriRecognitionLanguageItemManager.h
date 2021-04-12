/*
* Generated on Monday, March 1, 2021 at 2:34:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <Home/HFItemManager.h>
#import <libobjc.A.dylib/HFAccessorySettingSiriLanguageAdapterObserver.h>

@class HFAccessorySettingSiriLanguageAdapter, HUSiriLanguageOptionItemProvider, HFAccessorySettingGroupItem, NSString;

@interface HUAccessorySettingsSiriRecognitionLanguageItemManager : HFItemManager <HFAccessorySettingSiriLanguageAdapterObserver> {

	HFAccessorySettingSiriLanguageAdapter* _adapter;
	HUSiriLanguageOptionItemProvider* _optionItemProvider;

}

@property (nonatomic,retain) HUSiriLanguageOptionItemProvider * optionItemProvider;              //@synthesize optionItemProvider=_optionItemProvider - In the implementation block
@property (nonatomic,copy,readonly) HFAccessorySettingGroupItem * groupItem; 
@property (nonatomic,readonly) HFAccessorySettingSiriLanguageAdapter * adapter;                  //@synthesize adapter=_adapter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDelegate:(id)arg1 ;
-(HFAccessorySettingSiriLanguageAdapter *)adapter;
-(HFAccessorySettingGroupItem *)groupItem;
-(void)siriLanguageAdapter:(id)arg1 availableLanguageOptionsDidChange:(id)arg2 ;
-(void)siriLanguageAdapter:(id)arg1 selectedLanguageOptionDidChange:(id)arg2 ;
-(id)initWithDelegate:(id)arg1 sourceItem:(id)arg2 ;
-(void)_registerForExternalUpdates;
-(void)_unregisterForExternalUpdates;
-(id)_buildItemProvidersForHome:(id)arg1 ;
-(id)_buildSectionsWithDisplayedItems:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 groupItem:(id)arg2 ;
-(id)updateSelectionWithOptionItem:(id)arg1 ;
-(void)setOptionItemProvider:(HUSiriLanguageOptionItemProvider *)arg1 ;
-(HUSiriLanguageOptionItemProvider *)optionItemProvider;
@end

