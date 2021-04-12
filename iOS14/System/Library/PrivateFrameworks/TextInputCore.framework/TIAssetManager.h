/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInputCore.framework/TextInputCore
*/

#import <libobjc.A.dylib/DDSAssetCenterDelegate.h>
#import <libobjc.A.dylib/TIAssetManaging.h>

@protocol OS_dispatch_queue, TIMobileAssetMediator, TIInputModePreferenceProvider;
@class NSMutableArray, NSMutableSet, NSObject, NSMutableDictionary, NSArray, TIMobileAssetTimer, NSTimer, TIRequestedInputModes, NSString;

@interface TIAssetManager : NSObject <DDSAssetCenterDelegate, TIAssetManaging> {

	NSMutableArray* _notificationTokens;
	NSMutableSet* _languagesWithWarmedAssets;
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
	NSTimer* _didUpdateAssetsTimer;
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
@property (nonatomic,retain) NSTimer * didUpdateAssetsTimer;                                               //@synthesize didUpdateAssetsTimer=_didUpdateAssetsTimer - In the implementation block
@property (nonatomic,readonly) NSMutableSet * languagesWithWarmedAssets; 
@property (nonatomic,readonly) TIRequestedInputModes * requestedInputModes;                                //@synthesize requestedInputModes=_requestedInputModes - In the implementation block
@property (nonatomic,copy) id enabledInputModeIdentifiersProviderBlock;                                    //@synthesize enabledInputModeIdentifiersProviderBlock=_enabledInputModeIdentifiersProviderBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedAssetManagerWithEnabledInputModesProvider:(/*^block*/id)arg1 ;
+(id)_regionFromAddress:(id)arg1 ;
+(id)_addressFromRegion:(id)arg1 ;
+(id)sharedAssetManager;
+(id)singletonInstanceWithEnabledInputModesProvider:(/*^block*/id)arg1 ;
+(void)setSharedAssetManager:(id)arg1 ;
-(void)submitStatistics:(id)arg1 ;
-(void)normalizedRegionsForGeoCodedAddresses:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(TIMobileAssetTimer *)timer;
-(void)addLinguisticAssetsAssertionForLanguage:(id)arg1 assertionID:(id)arg2 region:(id)arg3 clientID:(id)arg4 withHandler:(/*^block*/id)arg5 ;
-(id)initForTestingWithMobileAssetMediator:(id)arg1 requestedInputModes:(id)arg2 inputModePreferenceProvider:(id)arg3 enabledInputModesProvider:(/*^block*/id)arg4 ;
-(void)setTimer:(TIMobileAssetTimer *)arg1 ;
-(void)removeLinguisticAssetsAssertionWithIdentifier:(id)arg1 forClientID:(id)arg2 withHandler:(/*^block*/id)arg3 ;
-(void)setCurrentActiveRegions:(NSArray *)arg1 ;
-(id)init;
-(void)startDownloadingUninstalledAssetsForInputModeLevels:(id)arg1 regions:(id)arg2 ;
-(void)didUpdateAssets;
-(id)_ddsContentItemsFromAssets:(id)arg1 contentType:(id)arg2 filteredWithRegion:(BOOL)arg3 ;
-(NSMutableSet *)languagesWithWarmedAssets;
-(void)updateAssertionsForInputModes:(id)arg1 ;
-(void)requestAssetDownloadForLanguage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)activeInputModeLevels;
-(id)ddsAssertionIDFromInputMode:(id)arg1 withPotentialRegions:(id)arg2 ;
-(id)recursiveDescription;
-(id)topActiveRegions;
-(void)setRequestedInputModes_mainThreadCache:(NSArray *)arg1 ;
-(void)scheduleAssetsDidChangeNotificationWithDelay:(double)arg1 ;
-(void)scheduleNextDownload;
-(void)updateInstalledAssets;
-(void)_warmAssetQueryForLanguage:(id)arg1 ;
-(double)requestExpirationInterval;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)ddsAssetContentItemsWithContentType:(id)arg1 inputMode:(id)arg2 filteredWithRegion:(BOOL)arg3 completion:(/*^block*/id)arg4 ;
-(NSArray *)currentActiveRegions;
-(void)appleKeyboardsPreferencesChanged:(id)arg1 ;
-(BOOL)purgeAsset:(id)arg1 ;
-(id)initWithMobileAssetMediator:(id)arg1 requestedInputModes:(id)arg2 inputModePreferenceProvider:(id)arg3 enabledInputModesProvider:(/*^block*/id)arg4 ;
-(id)enabledInputModeIdentifiersProviderBlock;
-(long long)amountOfPurgeableAssetsWithUrgency:(int)arg1 ;
-(BOOL)assetDownloadingEnabled;
-(id)enabledInputModes;
-(void)_warmAssetQueriesForInputModes:(id)arg1 ;
-(void)setDidUpdateAssetsTimer:(NSTimer *)arg1 ;
-(void)addAssets:(id)arg1 ;
-(void)registerForNotifications;
-(id)defaultEnabledInputModes;
-(id<TIInputModePreferenceProvider>)inputModePreferenceProvider;
-(void)setCurrentNormalizedActiveRegions:(NSArray *)arg1 ;
-(id)updatedActiveRegions;
-(id<TIMobileAssetMediator>)mobileAssetMediator;
-(id)activeInputModes;
-(void)performMaintenance;
-(void)registerCacheDeleteCallbacks;
-(void)setEnabledInputModeIdentifiersProviderBlock:(id)arg1 ;
-(id)assetContentItemsWithContentType:(id)arg1 inputMode:(id)arg2 ;
-(void)gatherStatistics:(id)arg1 ;
-(NSArray *)currentNormalizedActiveRegions;
-(void)updateInputModesAndLevels;
-(NSMutableDictionary *)assetsByInputMode;
-(id)levelsForInputMode:(id)arg1 ;
-(void)appleKeyboardsInternalSettingsChanged:(id)arg1 ;
-(id)ddsAssetContentItemsWithContentType:(id)arg1 inputMode:(id)arg2 filteredWithRegion:(BOOL)arg3 ;
-(NSMutableDictionary *)assetsByInputModeLevel;
-(void)didUpdateAssetsWithType:(id)arg1 ;
-(void)getActiveRegionsWithCompletion:(/*^block*/id)arg1 ;
-(long long)tryToPurgeAssetAmount:(long long)arg1 urgency:(int)arg2 ;
-(id)purgeableAssets;
-(void)updateAssetDownloadingEnabled;
-(NSTimer *)didUpdateAssetsTimer;
-(id)_ddsAssetsForLanguageIdentifier:(id)arg1 cachedOnly:(BOOL)arg2 ;
-(NSArray *)requestedInputModes_mainThreadCache;
-(TIRequestedInputModes *)requestedInputModes;
-(void)updatedActiveRegionsWithCompletionWithCompletion:(/*^block*/id)arg1 ;
-(void)unregisterForNotifications;
-(id)ddsLanguageIdentifierFromInputMode:(id)arg1 ;
-(void)dealloc;
-(void)addAssertionWithInputMode:(id)arg1 assertionID:(id)arg2 potentialRegions:(id)arg3 ;
-(void)newAssetInstalled:(id)arg1 ;
-(BOOL)inputModeHasRegions:(id)arg1 ;
@end

