/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit
*/


@class NSDictionary, WKWallpaperCollectionsManager, WKWallpaperCollection, WKWallpaperBundle;

@interface WKDefaultWallpaperManager : NSObject {

	NSDictionary* __defaultWallpaperLookup;
	WKWallpaperCollectionsManager* __collectionsManager;
	WKWallpaperCollection* __defaultWallpaperCollection;
	WKWallpaperBundle* __defaultWallpaperBundle;

}

@property (nonatomic,retain) NSDictionary * _defaultWallpaperLookup;                           //@synthesize _defaultWallpaperLookup=__defaultWallpaperLookup - In the implementation block
@property (nonatomic,retain) WKWallpaperCollectionsManager * _collectionsManager;              //@synthesize _collectionsManager=__collectionsManager - In the implementation block
@property (nonatomic,retain) WKWallpaperCollection * _defaultWallpaperCollection;              //@synthesize _defaultWallpaperCollection=__defaultWallpaperCollection - In the implementation block
@property (nonatomic,retain) WKWallpaperBundle * _defaultWallpaperBundle;                      //@synthesize _defaultWallpaperBundle=__defaultWallpaperBundle - In the implementation block
+(id)defaultWallpaperManager;
+(id)defaultWallpaperLookupURL;
-(id)deviceEnclosureColor;
-(id)deviceProductType;
-(id)defaultWallpaperBundle;
-(id)deviceColor;
-(void)_loadDefaultWallpaperFile;
-(void)_loadDefaultWallpaperInformation;
-(id)initWithCollectionsManager:(id)arg1 ;
-(void)set_defaultWallpaperLookup:(NSDictionary *)arg1 ;
-(NSDictionary *)_defaultWallpaperLookup;
-(WKWallpaperCollectionsManager *)_collectionsManager;
-(WKWallpaperBundle *)_defaultWallpaperBundle;
-(WKWallpaperCollection *)_defaultWallpaperCollection;
-(id)defaultWallpaperCollection;
-(id)deviceLogicalScreenClass;
-(void)set_collectionsManager:(WKWallpaperCollectionsManager *)arg1 ;
-(void)set_defaultWallpaperCollection:(WKWallpaperCollection *)arg1 ;
-(void)set_defaultWallpaperBundle:(WKWallpaperBundle *)arg1 ;
@end

