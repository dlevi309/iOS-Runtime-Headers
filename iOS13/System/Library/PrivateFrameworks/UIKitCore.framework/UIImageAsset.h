/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class _UIAssetManager, NSBundle, UITraitCollection, CUINamedLayerStack, NSString;

@interface UIImageAsset : NSObject <NSSecureCoding> {

	_UIAssetManager* _assetManager;
	NSBundle* _containingBundle;
	BOOL _cacheContents;
	UITraitCollection* _defaultTraitCollection;
	struct {
		unsigned hasRegisteredImages : 1;
		unsigned supportsBlockGeneration : 1;
		unsigned disconnectedFromAssetManager : 1;
	}  _assetFlags;
	CUINamedLayerStack* _layerStack;
	id _unpinObserver;
	/*^block*/id _rebuildStackImage;
	/*^block*/id _creationBlock;
	NSString* _assetName;

}

@property (nonatomic,copy) id creationBlock;                                                       //@synthesize creationBlock=_creationBlock - In the implementation block
@property (assign,setter=_setUnpinObserver:,nonatomic,__weak) id _unpinObserver;                   //@synthesize unpinObserver=_unpinObserver - In the implementation block
@property (nonatomic,copy) NSString * assetName;                                                   //@synthesize assetName=_assetName - In the implementation block
@property (nonatomic,__weak,readonly) _UIAssetManager * _assetManager;                             //@synthesize assetManager=_assetManager - In the implementation block
@property (nonatomic,readonly) UITraitCollection * _defaultTraitCollection; 
@property (setter=_setRebuildStackImage:,nonatomic,copy) id _rebuildStackImage;                    //@synthesize rebuildStackImage=_rebuildStackImage - In the implementation block
@property (setter=_setLayerStack:,nonatomic,retain) CUINamedLayerStack * _layerStack;              //@synthesize layerStack=_layerStack - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_dynamicAssetNamed:(id)arg1 generator:(/*^block*/id)arg2 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UITraitCollection *)_defaultTraitCollection;
-(id)imageWithConfiguration:(id)arg1 ;
-(_UIAssetManager *)_assetManager;
-(id)imageWithTraitCollection:(id)arg1 ;
-(void)_registerImage:(id)arg1 withConfiguration:(id)arg2 ;
-(CUINamedLayerStack *)_layerStack;
-(NSString *)assetName;
-(void)_setLayerStack:(id)arg1 ;
-(id)_initWithAssetName:(id)arg1 forManager:(id)arg2 ;
-(void)setCreationBlock:(id)arg1 ;
-(id)_mutableCatalog;
-(id)_nameForStoringRuntimeRegisteredImagesInMutableCatalog;
-(id)_lookUpRegisteredObjectForTraitCollection:(id)arg1 withAccessorWithAppearanceName:(/*^block*/id)arg2 ;
-(id)_updateAssetFromBlockGenerationWithConfiguration:(id)arg1 resolvedCatalogImage:(id)arg2 ;
-(id)creationBlock;
-(id)_registeredAppearanceNames;
-(id)_renditionCache:(BOOL)arg1 ;
-(id)_initWithAssetName:(id)arg1 forFilesInBundle:(id)arg2 ;
-(id)_symbolConfiguration;
-(void)registerImage:(id)arg1 withTraitCollection:(id)arg2 ;
-(void)registerImage:(id)arg1 withConfiguration:(id)arg2 ;
-(void)unregisterImageWithConfiguration:(id)arg1 ;
-(void)unregisterImageWithTraitCollection:(id)arg1 ;
-(void)_registerImage:(id)arg1 withTraitCollection:(id)arg2 ;
-(void)_clearResolvedImageResources;
-(BOOL)_containsImagesInPath:(id)arg1 ;
-(void)_disconnectFromAssetManager;
-(void)_cacheRendition:(id)arg1 forSize:(CGSize)arg2 tintColor:(id)arg3 traitCollection:(id)arg4 bold:(BOOL)arg5 letterpress:(BOOL)arg6 drawMode:(unsigned)arg7 ;
-(id)_cachedRenditionWithSize:(CGSize)arg1 tintColor:(id)arg2 traitCollection:(id)arg3 bold:(BOOL)arg4 letterpress:(BOOL)arg5 drawMode:(unsigned)arg6 ;
-(id)_unpinObserver;
-(void)_setUnpinObserver:(id)arg1 ;
-(id)_rebuildStackImage;
-(void)_setRebuildStackImage:(/*^block*/id)arg1 ;
-(void)setAssetName:(NSString *)arg1 ;
@end

