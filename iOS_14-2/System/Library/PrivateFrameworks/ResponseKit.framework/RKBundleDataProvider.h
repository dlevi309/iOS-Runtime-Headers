/*
* Generated on Thursday, January 14, 2021 at 2:26:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
*/

#import <libobjc.A.dylib/RKDisplayStringsProvider.h>
#import <libobjc.A.dylib/RKPolarityDataProvider.h>

@class NSBundle, RKAssets, NSURL, NSMutableDictionary;

@interface RKBundleDataProvider : NSObject <RKDisplayStringsProvider, RKPolarityDataProvider> {

	NSBundle* _bundle;
	RKAssets* _assets;
	NSURL* _assetPlistURL;
	NSMutableDictionary* _displayStringsByPlatformByLanguage;
	NSMutableDictionary* _polarityMapsByLanguageID;
	NSMutableDictionary* _localizationsByLanguageID;

}

@property (readonly) NSBundle * bundle;                                                     //@synthesize bundle=_bundle - In the implementation block
@property (readonly) RKAssets * assets;                                                     //@synthesize assets=_assets - In the implementation block
@property (readonly) NSURL * assetPlistURL;                                                 //@synthesize assetPlistURL=_assetPlistURL - In the implementation block
@property (readonly) NSMutableDictionary * displayStringsByPlatformByLanguage;              //@synthesize displayStringsByPlatformByLanguage=_displayStringsByPlatformByLanguage - In the implementation block
@property (readonly) NSMutableDictionary * polarityMapsByLanguageID;                        //@synthesize polarityMapsByLanguageID=_polarityMapsByLanguageID - In the implementation block
@property (retain) NSMutableDictionary * localizationsByLanguageID;                         //@synthesize localizationsByLanguageID=_localizationsByLanguageID - In the implementation block
-(NSBundle *)bundle;
-(RKAssets *)assets;
-(id)initWithBundle:(id)arg1 ;
-(id)init;
-(id)displayStringsForPlatform:(id)arg1 languageID:(id)arg2 ;
-(id)initWithAssetPlist:(id)arg1 ;
-(NSMutableDictionary *)polarityMapsByLanguageID;
-(NSMutableDictionary *)displayStringsByPlatformByLanguage;
-(id)stringsFromTable:(id)arg1 forLanguageIdentifier:(id)arg2 ;
-(NSURL *)assetPlistURL;
-(NSMutableDictionary *)localizationsByLanguageID;
-(void)setLocalizationsByLanguageID:(NSMutableDictionary *)arg1 ;
@end

