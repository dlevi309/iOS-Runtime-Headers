/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Translation.framework/Translation
*/


@class MAAsset, _LTTranslationContext, NSString;

@interface _LTHybridEndpointerAssetInfo : NSObject {

	MAAsset* _spgAsset;
	MAAsset* _sourceLanguageAsset;
	MAAsset* _targetLanguageAsset;
	_LTTranslationContext* _context;
	NSString* _hybridepAssetFile;
	NSString* _spgAssetFile;

}

@property (nonatomic,readonly) NSString * hybridepAssetFile;              //@synthesize hybridepAssetFile=_hybridepAssetFile - In the implementation block
@property (nonatomic,readonly) NSString * spgAssetFile;                   //@synthesize spgAssetFile=_spgAssetFile - In the implementation block
-(id)selectAsset:(id)arg1 withLocale:(id)arg2 ;
-(id)getPreferredAsset:(id)arg1 orAsset:(id)arg2 withLocale:(id)arg3 ;
-(BOOL)isPremium:(id)arg1 ;
-(id)initWithAvailableAssets:(id)arg1 context:(id)arg2 ;
-(NSString *)hybridepAssetFile;
-(NSString *)spgAssetFile;
-(id)caesuraModelURL;
-(id)endpointerModelURL:(id)arg1 ;
-(BOOL)endpointerIsAvailableWithContext:(id)arg1 ;
@end

