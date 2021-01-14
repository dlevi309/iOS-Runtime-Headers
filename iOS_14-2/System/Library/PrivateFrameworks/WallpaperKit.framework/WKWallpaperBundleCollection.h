/*
* Generated on Thursday, January 14, 2021 at 2:25:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WallpaperKit.framework/WallpaperKit
*/


@class NSString, WKWallpaperBundle, NSMutableArray, NSMutableDictionary;

@interface WKWallpaperBundleCollection : NSObject {

	unsigned long long _wallpaperType;
	NSString* _displayName;
	WKWallpaperBundle* _previewBundle;
	NSMutableArray* __wallpaperBundles;
	NSMutableDictionary* __wallpaperLookup;

}

@property (assign,nonatomic) unsigned long long wallpaperType;                    //@synthesize wallpaperType=_wallpaperType - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) WKWallpaperBundle * previewBundle;                   //@synthesize previewBundle=_previewBundle - In the implementation block
@property (nonatomic,retain) NSMutableArray * _wallpaperBundles;                  //@synthesize _wallpaperBundles=__wallpaperBundles - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * _wallpaperLookup;              //@synthesize _wallpaperLookup=__wallpaperLookup - In the implementation block
@property (nonatomic,readonly) long long numberOfItems; 
-(long long)numberOfItems;
-(unsigned long long)wallpaperType;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)displayName;
-(NSMutableArray *)_wallpaperBundles;
-(id)wallpaperBundleAtIndex:(long long)arg1 ;
-(void)set_wallpaperBundles:(NSMutableArray *)arg1 ;
-(NSMutableDictionary *)_wallpaperLookup;
-(id)initWithWallpaperType:(unsigned long long)arg1 previewBundle:(id)arg2 ;
-(id)wallpaperBundleWithIdentifier:(long long)arg1 ;
-(void)appendWallpaperBundle:(id)arg1 ;
-(void)setWallpaperType:(unsigned long long)arg1 ;
-(WKWallpaperBundle *)previewBundle;
-(void)setPreviewBundle:(WKWallpaperBundle *)arg1 ;
-(void)set_wallpaperLookup:(NSMutableDictionary *)arg1 ;
@end

