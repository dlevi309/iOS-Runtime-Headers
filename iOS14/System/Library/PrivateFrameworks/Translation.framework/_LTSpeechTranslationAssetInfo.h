/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/


@class _LTOfflineAssetManager, _LTLocalePair, NSDictionary, MAAsset, NSArray, NSURL;

@interface _LTSpeechTranslationAssetInfo : NSObject {

	_LTOfflineAssetManager* _assetManager;
	_LTLocalePair* _localePair;
	NSDictionary* _pairDictionary;
	MAAsset* _sourceASRModel;
	MAAsset* _targetASRModel;
	NSArray* _allAssets;
	NSArray* _mtAssets;
	NSArray* _missingAssets;
	NSArray* _missingMTAssets;
	BOOL _needsUpdate;
	NSURL* _modelURL;

}
+(void)initialize;
-(id)_getTranslationConfig;
-(void)referenceAssets:(id)arg1 catalogAssets:(id)arg2 ;
-(BOOL)updateAvailableInAssets:(id)arg1 ;
-(BOOL)_validateSymlinksForAssets:(id)arg1 ;
-(void)_createSymlinkDirectoryForAssets:(id)arg1 ;
-(unsigned long long)_mtModelOfflineState;
-(id)_languagePairDirectory;
-(id)initWithInstalledAssets:(id)arg1 catalogAssets:(id)arg2 localePair:(id)arg3 configInfo:(id)arg4 assetManager:(id)arg5 ;
-(void)createSymlinkDirectoryForMTAssets;
-(id)speechModelURLForLocale:(id)arg1 ;
-(id)speechModelVersionForLocale:(id)arg1 ;
-(id)translationModelURL;
-(BOOL)isCompletePasshtroughModel;
-(BOOL)isCompleteBidirectionalModel;
-(id)availabilityInfo;
-(void)downloadAssetsUserInitiated:(BOOL)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)purgeAssetUserInitiated:(BOOL)arg1 queue:(id)arg2 completion:(/*^block*/id)arg3 ;
-(id)description;
@end

