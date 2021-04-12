/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFAccessorySettingAdapter.h>
#import <libobjc.A.dylib/HFAccessorySettingAdapterDisplayArbitrating.h>

@class NSSet, HFSiriLanguageOption, NSHashTable, NAFuture, NSString;

@interface HFAccessorySettingSiriLanguageAdapter : HFAccessorySettingAdapter <HFAccessorySettingAdapterDisplayArbitrating> {

	NSSet* _availableLanguageOptions;
	HFSiriLanguageOption* _selectedLanguageOption;
	NSHashTable* _observers;

}

@property (nonatomic,readonly) NSHashTable * observers;                                  //@synthesize observers=_observers - In the implementation block
@property (nonatomic,copy) NSSet * availableLanguageOptions;                             //@synthesize availableLanguageOptions=_availableLanguageOptions - In the implementation block
@property (nonatomic,retain) HFSiriLanguageOption * selectedLanguageOption;              //@synthesize selectedLanguageOption=_selectedLanguageOption - In the implementation block
@property (nonatomic,readonly) NAFuture * languageSettingFuture; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSHashTable *)observers;
-(NSSet *)availableLanguageOptions;
-(void)setAvailableLanguageOptions:(NSSet *)arg1 ;
-(id)initWithHomeKitSettingsVendor:(id)arg1 keyPaths:(id)arg2 mode:(unsigned long long)arg3 updateHandler:(/*^block*/id)arg4 ;
-(BOOL)shouldShowSettingsEntity:(id)arg1 ;
-(id)initWithHomeKitSettingsVendor:(id)arg1 mode:(unsigned long long)arg2 ;
-(id)initWithHomeKitSettingsVendor:(id)arg1 keyPaths:(id)arg2 updateHandler:(/*^block*/id)arg3 ;
-(id)_reloadLanguagesFromHomeKitNotifyingObservers:(BOOL)arg1 ;
-(NAFuture *)languageSettingFuture;
-(void)_dumpAvailableLanguageOptionsWithReason:(id)arg1 ;
-(HFSiriLanguageOption *)selectedLanguageOption;
-(void)setSelectedLanguageOption:(HFSiriLanguageOption *)arg1 ;
-(id)preferredRecognitionLanguageOptions;
-(id)preferredOutputVoiceGenderOptionsForSelectedOption:(id)arg1 ;
-(id)preferredOutputVoiceAccentOptionsForSelectedOption:(id)arg1 ;
-(void)homeKitSettingWasUpdated:(id)arg1 value:(id)arg2 ;
-(id)updateAvailableLanguageOptions:(id)arg1 ;
-(id)updateSelectedLanguageOption:(id)arg1 ;
-(id)_beginMonitoringSettingsKeyPath:(id)arg1 ;
@end

