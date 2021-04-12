/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit
*/


@class NSDictionary, WKWallpaperBundleImporter;

@interface WKDefaultWallpaperManager : NSObject {

	NSDictionary* __defaultWallpaperLookup;
	WKWallpaperBundleImporter* __defaultWallpaperBundleImporter;

}

@property (nonatomic,retain) NSDictionary * _defaultWallpaperLookup;                                   //@synthesize _defaultWallpaperLookup=__defaultWallpaperLookup - In the implementation block
@property (nonatomic,retain) WKWallpaperBundleImporter * _defaultWallpaperBundleImporter;              //@synthesize _defaultWallpaperBundleImporter=__defaultWallpaperBundleImporter - In the implementation block
+(id)deviceColor;
+(id)deviceEnclosureColor;
+(id)defaultWallpaperManager;
+(id)deviceProductType;
+(id)defaultWallpaperLookupURL;
+(id)_pathForStillWallpapers;
+(id)deviceLogicalScreenClass;
-(id)init;
-(id)defaultWallpaperBundle;
-(void)_loadDefaultWallpaperFile;
-(void)set_defaultWallpaperLookup:(NSDictionary *)arg1 ;
-(WKWallpaperBundleImporter *)_defaultWallpaperBundleImporter;
-(NSDictionary *)_defaultWallpaperLookup;
-(void)set_defaultWallpaperBundleImporter:(WKWallpaperBundleImporter *)arg1 ;
@end

