/*
* Generated on Thursday, January 14, 2021 at 2:27:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PreferenceBundles/KeyboardSettings.bundle/KeyboardSettings
*/

#import <Preferences/PSListController.h>
#import <libobjc.A.dylib/DictationOfflineStatusObserverDelegate.h>

@class NSDictionary, DictationOfflineStatusObserver, NSMutableDictionary, NSMutableSet, NSString;

@interface TIDictationLanguageListController : PSListController <DictationOfflineStatusObserverDelegate> {

	NSDictionary* _offlineStatusForLanguage;
	DictationOfflineStatusObserver* _dictaionOfflineStatusObserver;
	NSMutableDictionary* _assetIdToLanguages;
	NSMutableSet* _trackingDownloadStatusForAssetsIDs;
	NSMutableSet* _onDeviceLocalesDownloading;

}

@property (nonatomic,copy) NSDictionary * offlineStatusForLanguage;                                       //@synthesize offlineStatusForLanguage=_offlineStatusForLanguage - In the implementation block
@property (nonatomic,retain) DictationOfflineStatusObserver * dictaionOfflineStatusObserver;              //@synthesize dictaionOfflineStatusObserver=_dictaionOfflineStatusObserver - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * assetIdToLanguages;                                    //@synthesize assetIdToLanguages=_assetIdToLanguages - In the implementation block
@property (nonatomic,retain) NSMutableSet * trackingDownloadStatusForAssetsIDs;                           //@synthesize trackingDownloadStatusForAssetsIDs=_trackingDownloadStatusForAssetsIDs - In the implementation block
@property (nonatomic,retain) NSMutableSet * onDeviceLocalesDownloading;                                   //@synthesize onDeviceLocalesDownloading=_onDeviceLocalesDownloading - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)isSmartLanguageSelectionEnabled;
+(long long)numberOfEnabledEntries:(id)arg1 ;
-(id)specifiers;
-(id)init;
-(void)viewDidLoad;
-(BOOL)shouldReloadSpecifiersOnResume;
-(id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2 ;
-(void)dealloc;
-(void)offlineDictationStatusUpdated:(id)arg1 ;
-(NSDictionary *)offlineStatusForLanguage;
-(void)presentPrivacySheet:(id)arg1 ;
-(void)setOfflineStatusForLanguage:(NSDictionary *)arg1 ;
-(void)setDictaionOfflineStatusObserver:(DictationOfflineStatusObserver *)arg1 ;
-(void)setAssetIdToLanguages:(NSMutableDictionary *)arg1 ;
-(void)setTrackingDownloadStatusForAssetsIDs:(NSMutableSet *)arg1 ;
-(void)setOnDeviceLocalesDownloading:(NSMutableSet *)arg1 ;
-(void)toggleDictationLanguage:(id)arg1 ;
-(id)dictationFooterText;
-(void)toggleSLSEnabled:(id)arg1 ;
-(void)setSLSEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)isSLSEnabled:(id)arg1 ;
-(NSMutableSet *)onDeviceLocalesDownloading;
-(NSMutableSet *)trackingDownloadStatusForAssetsIDs;
-(NSMutableDictionary *)assetIdToLanguages;
-(void)updateDownloadingProgressForDictationLanguage:(id)arg1 stalled:(BOOL)arg2 ;
-(void)updateDownloadingStateForAsset:(id)arg1 downloadResult:(long long)arg2 ;
-(id)slsDictationLanguagesSpecifiers;
-(id)onDeviceDictationLanguagesSpecifiers;
-(id)onDeviceNotCapableDictationLanguagesSpecifiers;
-(id)tableView:(id)arg1 classicDictationCellForRowAtIndexPath:(id)arg2 ;
-(id)tableView:(id)arg1 enhancedDictationCellForRowAtIndexPath:(id)arg2 ;
-(void)handleSmartLanguageSelectionOnDictationLanguageToggle:(BOOL)arg1 enabledDictationLanguages:(id)arg2 specifier:(id)arg3 ;
-(id)dictationLanguagesSpecifiers;
-(DictationOfflineStatusObserver *)dictaionOfflineStatusObserver;
@end

