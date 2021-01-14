/*
* Generated on Thursday, January 14, 2021 at 2:23:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/


@class NSXPCConnection;

@interface _LTTranslator : NSObject {

	NSXPCConnection* _connection;

}
+(void)initialize;
+(void)_clearCaches;
+(void)setInterruptionHandler:(/*^block*/id)arg1 ;
+(void)_getServiceProxyWithDelegate:(id)arg1 errorHandler:(/*^block*/id)arg2 block:(/*^block*/id)arg3 ;
+(void)_getSyncServiceProxyWithDelegate:(id)arg1 errorHandler:(/*^block*/id)arg2 block:(/*^block*/id)arg3 ;
+(void)_offlineLanguageStatus:(/*^block*/id)arg1 ;
+(void)_downloadAssetForLanguagePair:(id)arg1 userInitiated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
+(void)_purgeAllAssets:(/*^block*/id)arg1 ;
+(void)_purgeAssetForLanguagePair:(id)arg1 userInitiated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
+(void)_updateAllAssets:(/*^block*/id)arg1 ;
+(void)_getAssetSize:(/*^block*/id)arg1 ;
+(void)availableLocalePairsForTask:(long long)arg1 completion:(/*^block*/id)arg2 ;
+(void)additionalLikelyPreferredLocalesForLocale:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)configInfoForLocale:(id)arg1 otherLocale:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)task:(long long)arg1 isSupportedInCountry:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)languageForText:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)languagesForText:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)installOfflineLocales:(id)arg1 completion:(/*^block*/id)arg2 ;
+(void)taskIsSupportedInCurrentRegion:(long long)arg1 completion:(/*^block*/id)arg2 ;
+(void)installedLocales:(/*^block*/id)arg1 ;
+(/*^block*/id)interruptionHandler;
-(void)translate:(id)arg1 ;
-(void)cleanup;
-(void)preheatForRequestSync:(id)arg1 ;
-(void)preheatForRequest:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)startTranslationSession;
-(void)log:(id)arg1 ;
@end

