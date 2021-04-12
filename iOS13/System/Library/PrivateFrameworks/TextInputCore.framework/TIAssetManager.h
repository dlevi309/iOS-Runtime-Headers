/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <libobjc.A.dylib/DDSAssetCenterDelegate.h>
#import <libobjc.A.dylib/TIAssetManaging.h>

@protocol OS_dispatch_queue, TIMobileAssetMediator, TIInputModePreferenceProvider;
@class NSMutableArray, NSObject, NSMutableDictionary, NSArray, TIMobileAssetTimer, TIRequestedInputModes, NSString;

@interface TIAssetManager : NSObject <DDSAssetCenterDelegate, TIAssetManaging> {

	NSMutableArray* _notificationTokens;
	BOOL _assetDownloadingEnabled;
	/*^block*/id _enabledInputModeIdentifiersProviderBlock;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	id<TIMobileAssetMediator> _mobileAssetMediator;
	NSMutableDictionary* _assetsByInputMode;
	NSMutableDictionary* _assetsByInputModeLevel;
	NSArray* _requestedInputModes_mainThreadCache;
	id<TIInputModePreferenceProvider> _inputModePreferenceProvider;
	TIMobileAssetTimer* _timer;
	NSArray* _currentActiveRegions;
	NSArray* _currentNormalizedActiveRegions;
	TIRequestedInputModes* _requestedInputModes;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> dispatchQueue;                                 //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,readonly) id<TIMobileAssetMediator> mobileAssetMediator;                              //@synthesize mobileAssetMediator=_mobileAssetMediator - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * assetsByInputMode;                                    //@synthesize assetsByInputMode=_assetsByInputMode - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * assetsByInputModeLevel;                               //@synthesize assetsByInputModeLevel=_assetsByInputModeLevel - In the implementation block
@property (nonatomic,copy) NSArray * requestedInputModes_mainThreadCache;                                  //@synthesize requestedInputModes_mainThreadCache=_requestedInputModes_mainThreadCache - In the implementation block
@property (nonatomic,readonly) id<TIInputModePreferenceProvider> inputModePreferenceProvider;              //@synthesize inputModePreferenceProvider=_inputModePreferenceProvider - In the implementation block
@property (nonatomic,retain) TIMobileAssetTimer * timer;                                                   //@synthesize timer=_timer - In the implementation block
@property (nonatomic,readonly) BOOL assetDownloadingEnabled;                                               //@synthesize assetDownloadingEnabled=_assetDownloadingEnabled - In the implementation block
@property (nonatomic,retain) NSArray * currentActiveRegions;                                               //@synthesize currentActiveRegions=_currentActiveRegions - In the implementation block
@property (nonatomic,retain) NSArray * currentNormalizedActiveRegions;                                     //@synthesize currentNormalizedActiveRegions=_currentNormalizedActiveRegions - In the implementation block
@property (nonatomic,readonly) double requestExpirationInterval; 
@property (nonatomic,readonly) TIRequestedInputModes * requestedInputModes;                                //@synthesize requestedInputModes=_requestedInputModes - In the implementation block
@property (nonatomic,copy) id enabledInputModeIdentifiersProviderBlock;                                    //@synthesize enabledInputModeIdentifiersProviderBlock=_enabledInputModeIdentifiersProviderBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedAssetManager;
+(id)_addressFromRegion:(id)arg1 ;
+(id)sharedAssetManagerWithEnabledInputModesProvider:(/*^block*/id)arg1 ;
+(id)singletonInstanceWithEnabledInputModesProvider:(/*^block*/id)arg1 ;
+(id)_regionFromAddress:(id)arg1 ;
+(void)setSharedAssetManager:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(TIMobileAssetTimer *)timer;
-(void)setTimer:(TIMobileAssetTimer *)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(id)recursiveDescription;
-(id)activeInputModes;
-(id)enabledInputModes;
-(void)registerForNotifications;
-(void)addAssets:(id)arg1 ;
-(void)unregisterForNotifications;
-(void)performMaintenance;
-(BOOL)purgeAsset:(id)arg1 ;
-(id)assetContentItemsWithContentType:(id)arg1 inputMode:(id)arg2 ;
-(id)ddsAssetContentItemsWithContentType:(id)arg1 inputMode:(id)arg2 filteredWithRegion:(BOOL)arg3 ;
-(void)requestAssetDownloadForLanguage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)topActiveRegions;
-(id)enabledInputModeIdentifiersProviderBlock;
-(void)setEnabledInputModeIdentifiersProviderBlock:(id)arg1 ;
-(void)didUpdateAssetsWithType:(id)arg1 ;
-(id)initWithMobileAssetMediator:(id)arg1 requestedInputModes:(id)arg2 inputModePreferenceProvider:(id)arg3 enabledInputModesProvider:(/*^block*/id)arg4 ;
-(double)requestExpirationInterval;
-(void)appleKeyboardsInternalSettingsChanged:(id)arg1 ;
-(void)appleKeyboardsPreferencesChanged:(id)arg1 ;
-(id)ddsLanguageIdentifierFromInputMode:(id)arg1 ;
-(id)ddsAssertionIDFromLanguageIdentifier:(id)arg1 ;
-(void)updateAssertionsForInputModes:(id)arg1 ;
-(void)removeUnnecessaryAssertionsForInputModes:(id)arg1 ;
-(void)addAssertionsForInputModes:(id)arg1 ;
-(void)newAssetInstalled:(id)arg1 ;
-(void)didUpdateAssets;
-(id)levelsForInputMode:(id)arg1 ;
-(id)defaultEnabledInputModes;
-(id)activeInputModeLevels;
-(id)updatedActiveRegions;
-(void)updateAssetDownloadingEnabled;
-(void)updateInstalledAssets;
-(void)startDownloadingUninstalledAssetsForInputModeLevels:(id)arg1 regions:(id)arg2 ;
-(void)scheduleNextDownload;
-(void)gatherStatistics:(id)arg1 ;
-(void)submitStatistics:(id)arg1 ;
-(void)updateInputModesAndLevels;
-(id)purgeableAssets;
-(void)registerCacheDeleteCallbacks;
-(long long)amountOfPurgeableAssetsWithUrgency:(int)arg1 ;
-(long long)tryToPurgeAssetAmount:(long long)arg1 urgency:(int)arg2 ;
-(id<TIMobileAssetMediator>)mobileAssetMediator;
-(NSMutableDictionary *)assetsByInputMode;
-(NSMutableDictionary *)assetsByInputModeLevel;
-(NSArray *)requestedInputModes_mainThreadCache;
-(void)setRequestedInputModes_mainThreadCache:(NSArray *)arg1 ;
-(id<TIInputModePreferenceProvider>)inputModePreferenceProvider;
-(BOOL)assetDownloadingEnabled;
-(NSArray *)currentActiveRegions;
-(void)setCurrentActiveRegions:(NSArray *)arg1 ;
-(NSArray *)currentNormalizedActiveRegions;
-(void)setCurrentNormalizedActiveRegions:(NSArray *)arg1 ;
-(TIRequestedInputModes *)requestedInputModes;
-(id)initForTestingWithMobileAssetMediator:(id)arg1 requestedInputModes:(id)arg2 inputModePreferenceProvider:(id)arg3 enabledInputModesProvider:(/*^block*/id)arg4 ;
@end

