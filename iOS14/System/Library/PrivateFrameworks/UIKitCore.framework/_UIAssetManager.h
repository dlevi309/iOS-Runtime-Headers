/*
* Generated on Thursday, January 14, 2021 at 2:20:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class _UICache, CUICatalog, NSString, NSBundle, NSMapTable, CUIMutableCatalog, UITraitCollection;

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
+(void)_dropResourceReferencesForURL:(id)arg1 ;
+(id)sharedRuntimeCatalog;
+(void)_convertTraitCollection:(id)arg1 toCUIScale:(double*)arg2 CUIIdiom:(long long*)arg3 UIKitIdiom:(long long*)arg4 UIKitUserInterfaceStyle:(long long*)arg5 subtype:(unsigned long long*)arg6 CUIDisplayGamut:(long long*)arg7 UIKitLayoutDirection:(long long*)arg8 CUILayoutDirection:(unsigned long long*)arg9 ;
+(id)assetManagerForBundle:(id)arg1 ;
+(void)_executeUnitTestWithAssetManagerCache:(/*^block*/id)arg1 ;
+(id)sharedRuntimeAssetMap;
+(id)newAssetNamed:(id)arg1 fromBundle:(id)arg2 ;
+(void)clearSharedRuntimeAssetMapForUnitTests;
+(long long)_userInterfaceIdiomForDeviceClass:(unsigned long long)arg1 ;
+(id)_sharedRuntimeAssetMapKeyForAssetName:(id)arg1 fromFilesInBundle:(id)arg2 ;
+(void)_clearAllCachedImagesAndAssets;
+(id)_sharedRuntimeAssetMapKeyForAssetName:(id)arg1 inAssetManager:(id)arg2 ;
+(void)_saveAssetManager:(id)arg1 forBundle:(id)arg2 lock:(BOOL)arg3 ;
+(id)_assetManagerCache;
+(double)_watchScreenScale;
-(NSBundle *)bundle;
-(id)imageNamed:(id)arg1 ;
-(NSString *)carFileName;
-(void)setNextAssetManager:(_UIAssetManager *)arg1 ;
-(id)colorNamed:(id)arg1 withTraitCollection:(id)arg2 ;
-(id)initManagerWithoutCatalogWithName:(id)arg1 ;
-(id)_insertAssetIntoMap:(id)arg1 forName:(id)arg2 ;
-(void)_clearCachedResources;
-(BOOL)_isSystemAssetManager;
-(BOOL)_imageIsSystemImage:(id)arg1 ;
-(id)_insertAssetIntoMap:(id)arg1 forName:(id)arg2 lock:(BOOL)arg3 ;
-(CUIMutableCatalog *)runtimeCatalog;
-(void)disableCacheFlushing;
-(id)initWithURL:(id)arg1 idiom:(long long)arg2 error:(id*)arg3 ;
-(id)_assetFromMapForName:(id)arg1 lock:(BOOL)arg2 ;
-(id)imageNamed:(id)arg1 scale:(double)arg2 idiom:(long long)arg3 subtype:(unsigned long long)arg4 ;
-(void)_disconnectImageAssets;
-(id)imageNamed:(id)arg1 configuration:(id)arg2 cachingOptions:(unsigned long long)arg3 attachCatalogImage:(BOOL)arg4 ;
-(id)_translateAppearanceNameToNative:(id)arg1 ;
-(id)description;
-(id)_assetFromMapForName:(id)arg1 ;
-(id)_initWithName:(id)arg1 inBundle:(id)arg2 idiom:(long long)arg3 lock:(BOOL)arg4 allowMissingCatalog:(BOOL)arg5 ;
-(void)_performBlockWithAssetLock:(/*^block*/id)arg1 ;
-(id)imageNamed:(id)arg1 idiom:(long long)arg2 ;
-(id)_catalog;
-(id)_defaultAppearanceNames;
-(double)preferredScale;
-(id)_appearanceNames;
-(BOOL)_managingCoreGlyphs;
-(id)imageNamed:(id)arg1 idiom:(long long)arg2 subtype:(unsigned long long)arg3 ;
-(id)_starkAssetManager;
-(BOOL)_imageBelongsToUIKit:(id)arg1 ;
-(void)_clearCachedResources:(id)arg1 ;
-(void)setPreferredTraitCollection:(UITraitCollection *)arg1 ;
-(id)imageNamed:(id)arg1 configuration:(id)arg2 ;
-(BOOL)_hasMultipleAppearances;
-(_UIAssetManager *)nextAssetManager;
-(void)setPreferredScale:(double)arg1 ;
-(id)initWithName:(id)arg1 inBundle:(id)arg2 idiom:(long long)arg3 ;
-(BOOL)_imageBelongsToCoreGlyphs:(id)arg1 ;
-(id)dataNamed:(id)arg1 ;
-(id)resolvedColorNamed:(id)arg1 withTraitCollection:(id)arg2 ;
-(id)_assetForName:(id)arg1 ;
-(id)_lookUpObjectForTraitCollection:(id)arg1 withAccessorWithAppearanceName:(/*^block*/id)arg2 ;
-(UITraitCollection *)preferredTraitCollection;
-(id)imageNamed:(id)arg1 withTrait:(id)arg2 ;
-(BOOL)_managingUIKitAssets;
-(void)dealloc;
-(id)_allImageNames;
@end

