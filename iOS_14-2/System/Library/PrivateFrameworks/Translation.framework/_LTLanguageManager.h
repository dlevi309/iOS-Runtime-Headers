/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/


@protocol OS_dispatch_queue;
@class _LTOfflineAssetManager, NSMutableDictionary, NSArray, NSObject;

@interface _LTLanguageManager : NSObject {

	_LTOfflineAssetManager* _assetManager;
	NSMutableDictionary* _assetStatusDictionary;
	NSArray* _localeIdentifierList;
	/*^block*/id _completionHandler;
	NSObject*<OS_dispatch_queue> _queue;
	BOOL _useCellular;

}
+(void)initialize;
+(id)sharedInstance;
-(id)init;
-(id)description;
-(void)updateProgress;
-(id)identifiersInIdentifiers:(id)arg1 forLanguageName:(id)arg2 ;
-(id)languageToStatusDictionary;
-(id)installationStatusArray;
-(void)_setInstalledLocales:(id)arg1 ;
-(id)pairNamesForLocales:(id)arg1 ;
-(void)installedLocales:(/*^block*/id)arg1 ;
-(id)assetNamesForPairNames:(id)arg1 ;
-(id)assetWithName:(id)arg1 inAssets:(id)arg2 ;
-(id)identifiersInIdentifiers:(id)arg1 forAssetName:(id)arg2 ;
-(void)downloadAsset:(id)arg1 withStatus:(id)arg2 ;
-(id)assetsNamesForLocale:(id)arg1 ;
-(void)setInstalledLocales:(id)arg1 useCellular:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
@end

