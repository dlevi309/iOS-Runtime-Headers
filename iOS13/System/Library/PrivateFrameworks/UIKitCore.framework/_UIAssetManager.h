/*
* Generated on Monday, March 1, 2021 at 2:30:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class _UICache, CUICatalog, NSString, NSBundle, NSMapTable, NSDictionary, CUIMutableCatalog, UITraitCollection;

@interface _UIAssetManager : NSObject {

	_UICache* _imageCache;
	CUICatalog* _catalog;
	NSString* _assetManagerName;
	long long _preferredIdiom;
	double _preferredScale;
	unsigned long long _preferredIdiomSubtype;
	long long _preferredGamut;
	long long _preferredLayoutDirectionTrait;
	NSBundle* _bundle;
	NSMapTable* _assetMap;
	NSDictionary* _systemSymbolNameAliases;
	CUIMutableCatalog* _runtimeCatalog;
	os_unfair_lock_s _runtimeCatalogCreationLock;
	UITraitCollection* _preferredTraitCollection;
	os_unfair_lock_s _assetMapLock;
	struct {
		unsigned isStarkAssetManager : 1;
		unsigned isStandaloneAssetManager : 1;
		unsigned isUIKitAssetsManager : 1;
		unsigned isCoreGlyphsManager : 1;
	}  _assetManagerFlags;
	_UIAssetManager* _nextAssetManager;

}

@property (nonatomic,retain) _UIAssetManager * nextAssetManager;                                  //@synthesize nextAssetManager=_nextAssetManager - In the implementation block
@property (assign,nonatomic) double preferredScale;                                               //@synthesize preferredScale=_preferredScale - In the implementation block
@property (nonatomic,retain) UITraitCollection * preferredTraitCollection;                        //@synthesize preferredTraitCollection=_preferredTraitCollection - In the implementation block
@property (nonatomic,readonly) NSString * carFileName; 
@property (nonatomic,readonly) CUIMutableCatalog * runtimeCatalog; 
@property (nonatomic,readonly) NSBundle * bundle;                                                 //@synthesize bundle=_bundle - In the implementation block
@property (getter=_managingUIKitAssets,nonatomic,readonly) BOOL managingUIKitAssets; 
@property (getter=_managingCoreGlyphs,nonatomic,readonly) BOOL managingCoreGlyphs; 
+(id)assetManagerForBundle:(id)arg1 ;
+(id)newAssetNamed:(id)arg1 fromBundle:(id)arg2 ;
+(void)_dropResourceReferencesForURL:(id)arg1 ;
+(long long)_userInterfaceIdiomForDeviceClass:(unsigned long long)arg1 ;
+(void)_convertTraitCollection:(id)arg1 toCUIScale:(double*)arg2 CUIIdiom:(long long*)arg3 UIKitIdiom:(long long*)arg4 UIKitUserInterfaceStyle:(long long*)arg5 subtype:(unsigned long long*)arg6 CUIDisplayGamut:(long long*)arg7 UIKitLayoutDirection:(long long*)arg8 CUILayoutDirection:(unsigned long long*)arg9 ;
+(id)sharedRuntimeCatalog;
+(void)_saveAssetManager:(id)arg1 forBundle:(id)arg2 lock:(BOOL)arg3 ;
+(id)_assetManagerCache;
+(id)sharedRuntimeAssetMap;
+(id)_sharedRuntimeAssetMapKeyForAssetName:(id)arg1 inAssetManager:(id)arg2 ;
+(id)_sharedRuntimeAssetMapKeyForAssetName:(id)arg1 fromFilesInBundle:(id)arg2 ;
+(void)_executeUnitTestWithAssetManagerCache:(/*^block*/id)arg1 ;
+(void)clearSharedRuntimeAssetMapForUnitTests;
+(void)_clearAllCachedImagesAndAssets;
+(double)_watchScreenScale;
-(void)dealloc;
-(id)description;
-(NSBundle *)bundle;
-(id)_catalog;
-(UITraitCollection *)preferredTraitCollection;
-(void)setPreferredTraitCollection:(UITraitCollection *)arg1 ;
-(id)dataNamed:(id)arg1 ;
-(id)colorNamed:(id)arg1 withTraitCollection:(id)arg2 ;
-(id)resolvedColorNamed:(id)arg1 withTraitCollection:(id)arg2 ;
-(id)initWithName:(id)arg1 inBundle:(id)arg2 idiom:(long long)arg3 ;
-(id)initManagerWithoutCatalogWithName:(id)arg1 ;
-(id)imageNamed:(id)arg1 configuration:(id)arg2 ;
-(id)imageNamed:(id)arg1 ;
-(id)_allImageNames;
-(BOOL)_managingCoreGlyphs;
-(id)_assetFromMapForName:(id)arg1 ;
-(id)_insertAssetIntoMap:(id)arg1 forName:(id)arg2 ;
-(BOOL)_managingUIKitAssets;
-(id)imageNamed:(id)arg1 configuration:(id)arg2 cachingOptions:(unsigned long long)arg3 attachCatalogImage:(BOOL)arg4 ;
-(NSString *)carFileName;
-(CUIMutableCatalog *)runtimeCatalog;
-(id)_initWithName:(id)arg1 inBundle:(id)arg2 idiom:(long long)arg3 lock:(BOOL)arg4 allowMissingCatalog:(BOOL)arg5 ;
-(void)_clearCachedResources:(id)arg1 ;
-(void)_disconnectImageAssets;
-(void)disableCacheFlushing;
-(double)preferredScale;
-(void)setPreferredScale:(double)arg1 ;
-(id)_starkAssetManager;
-(id)_symbolNameAliasForName:(id)arg1 ;
-(id)_assetForName:(id)arg1 ;
-(id)_lookUpObjectForTraitCollection:(id)arg1 withAccessorWithAppearanceName:(/*^block*/id)arg2 ;
-(BOOL)_isSystemAssetManager;
-(id)imageNamed:(id)arg1 scale:(double)arg2 idiom:(long long)arg3 subtype:(unsigned long long)arg4 ;
-(id)imageNamed:(id)arg1 idiom:(long long)arg2 subtype:(unsigned long long)arg3 ;
-(id)imageNamed:(id)arg1 idiom:(long long)arg2 ;
-(BOOL)_hasMultipleAppearances;
-(id)_assetFromMapForName:(id)arg1 lock:(BOOL)arg2 ;
-(void)_performBlockWithAssetLock:(/*^block*/id)arg1 ;
-(id)_insertAssetIntoMap:(id)arg1 forName:(id)arg2 lock:(BOOL)arg3 ;
-(void)_clearCachedResources;
-(BOOL)_imageBelongsToUIKit:(id)arg1 ;
-(BOOL)_imageBelongsToCoreGlyphs:(id)arg1 ;
-(id)_defaultAppearanceNames;
-(id)_appearanceNames;
-(id)_translateAppearanceNameToNative:(id)arg1 ;
-(id)initWithURL:(id)arg1 idiom:(long long)arg2 error:(id*)arg3 ;
-(id)imageNamed:(id)arg1 withTrait:(id)arg2 ;
-(BOOL)_imageIsSystemImage:(id)arg1 ;
-(_UIAssetManager *)nextAssetManager;
-(void)setNextAssetManager:(_UIAssetManager *)arg1 ;
@end

