/*
* Generated on Monday, March 1, 2021 at 2:35:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(long long)numberOfItems;
-(unsigned long long)wallpaperType;
-(id)wallpaperBundleAtIndex:(unsigned long long)arg1 ;
-(WKWallpaperBundle *)previewBundle;
-(NSMutableArray *)_wallpaperBundles;
-(NSMutableDictionary *)_wallpaperLookup;
-(id)initWithWallpaperType:(unsigned long long)arg1 previewBundle:(id)arg2 ;
-(id)wallpaperBundleWithIdentifier:(unsigned long long)arg1 ;
-(void)appendWallpaperBundle:(id)arg1 ;
-(void)setWallpaperType:(unsigned long long)arg1 ;
-(void)setPreviewBundle:(WKWallpaperBundle *)arg1 ;
-(void)set_wallpaperBundles:(NSMutableArray *)arg1 ;
-(void)set_wallpaperLookup:(NSMutableDictionary *)arg1 ;
@end

