/*
* Generated on Thursday, January 14, 2021 at 2:27:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CarPlayUIServices.framework/CarPlayUIServices
*/


@class NSString;

@interface CRSUIWallpaper : NSObject {

	BOOL _supportsDynamicAppearance;
	BOOL _supportsDashboardPlatterMaterials;
	BOOL _iconLabelsRequireBackground;
	NSString* _wallpaperIdentifier;
	NSString* _wallpaperAssetCatalogName;
	NSString* _thumbnailAssetCatalogName;

}

@property (nonatomic,retain) NSString * wallpaperAssetCatalogName;                  //@synthesize wallpaperAssetCatalogName=_wallpaperAssetCatalogName - In the implementation block
@property (nonatomic,retain) NSString * thumbnailAssetCatalogName;                  //@synthesize thumbnailAssetCatalogName=_thumbnailAssetCatalogName - In the implementation block
@property (nonatomic,copy,readonly) NSString * wallpaperIdentifier;                 //@synthesize wallpaperIdentifier=_wallpaperIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL supportsDynamicAppearance;                      //@synthesize supportsDynamicAppearance=_supportsDynamicAppearance - In the implementation block
@property (nonatomic,readonly) BOOL supportsDashboardPlatterMaterials;              //@synthesize supportsDashboardPlatterMaterials=_supportsDashboardPlatterMaterials - In the implementation block
@property (nonatomic,readonly) BOOL iconLabelsRequireBackground;                    //@synthesize iconLabelsRequireBackground=_iconLabelsRequireBackground - In the implementation block
+(id)_wallpaperInfo;
-(id)description;
-(NSString *)wallpaperIdentifier;
-(id)wallpaperColor;
-(NSString *)wallpaperAssetCatalogName;
-(NSString *)thumbnailAssetCatalogName;
-(BOOL)supportsDynamicAppearance;
-(BOOL)supportsDashboardPlatterMaterials;
-(BOOL)iconLabelsRequireBackground;
-(id)initWithWallpaperIdentifier:(id)arg1 ;
-(id)wallpaperImageCompatibleWithTraitCollection:(id)arg1 ;
-(id)thumbnailImageCompatibleWithTraitCollection:(id)arg1 ;
-(id)thumbnailColor;
-(void)setWallpaperAssetCatalogName:(NSString *)arg1 ;
-(void)setThumbnailAssetCatalogName:(NSString *)arg1 ;
@end

