/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit
*/

#import <WallpaperKit/WKWallpaperCollection.h>

@class NSURL, NSString, NSUUID, NSBundle;

@interface _WKSystemWallpaperCollection : WKWallpaperCollection {

	BOOL _legacyContent;
	NSURL* _wallpaperCollectionURL;
	NSString* _displayNameKey;
	NSUUID* __identifier;
	NSBundle* __bundleForLocalizationResources;

}

@property (getter=isLegacyContent,nonatomic,readonly) BOOL legacyContent;              //@synthesize legacyContent=_legacyContent - In the implementation block
@property (nonatomic,copy) NSUUID * _identifier;                                       //@synthesize _identifier=__identifier - In the implementation block
@property (nonatomic,retain) NSBundle * _bundleForLocalizationResources;               //@synthesize _bundleForLocalizationResources=__bundleForLocalizationResources - In the implementation block
@property (nonatomic,copy) NSString * displayNameKey;                                  //@synthesize displayNameKey=_displayNameKey - In the implementation block
@property (nonatomic,readonly) NSURL * wallpaperCollectionURL;                         //@synthesize wallpaperCollectionURL=_wallpaperCollectionURL - In the implementation block
+(id)dynamicWallpaperCollection;
+(id)_createTemporaryWallpaperCollectionWithImage:(id)arg1 videoAssetURL:(id)arg2 wallpaperOptions:(id)arg3 error:(id*)arg4 ;
+(BOOL)shouldLoadWallpaperCollectionAtURL:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(NSUUID *)_identifier;
-(void)set_identifier:(NSUUID *)arg1 ;
-(id)identifier;
-(id)displayName;
-(NSString *)displayNameKey;
-(long long)numberOfWallpapers;
-(void)_raiseInvalidMetadataExceptionForMetadataKeypath:(id)arg1 ;
-(NSURL *)wallpaperCollectionURL;
-(void)_loadCollectionContents;
-(void)set_bundleForLocalizationResources:(NSBundle *)arg1 ;
-(void)setDisplayNameKey:(NSString *)arg1 ;
-(BOOL)isLegacyContent;
-(void)_loadSystemContentForCollectionWithMetadata:(id)arg1 isLegacyContent:(BOOL)arg2 ;
-(NSBundle *)_bundleForLocalizationResources;
-(BOOL)isDynamicCollection;
-(id)wallpaperBundleAtIndex:(long long)arg1 ;
-(BOOL)containsWallpaperRepresentingWithIdentifier:(id)arg1 ;
-(id)wallpaperRepresentingWithIdentifier:(id)arg1 ;
@end

