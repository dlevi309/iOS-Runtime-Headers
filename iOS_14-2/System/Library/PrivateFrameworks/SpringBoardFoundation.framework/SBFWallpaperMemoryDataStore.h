/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <libobjc.A.dylib/SBFWallpaperDataStore.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSMutableDictionary, NSString;

@interface SBFWallpaperMemoryDataStore : NSObject <SBFWallpaperDataStore, BSDescriptionProviding> {

	NSMutableDictionary* _images;
	NSMutableDictionary* _originalImages;
	NSMutableDictionary* _thumbnails;
	NSMutableDictionary* _hashes;
	NSMutableDictionary* _proceduralInfo;
	NSMutableDictionary* _videoURLs;
	NSMutableDictionary* _originalVideoURLs;
	NSMutableDictionary* _wallpaperOptions;
	NSMutableDictionary* _colors;
	NSMutableDictionary* _colorNames;
	NSMutableDictionary* _gradients;

}

@property (nonatomic,readonly) unsigned long long numberOfStoredImages; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)succinctDescription;
-(id)wallpaperImageForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(BOOL)setWallpaperImage:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3 ;
-(id)wallpaperColorNameForVariant:(long long)arg1 ;
-(BOOL)hasWallpaperImageForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(id)init;
-(void)removeWallpaperGradientForVariants:(long long)arg1 ;
-(id)verifiedVideoURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)setProceduralWallpaperInfo:(id)arg1 forVariants:(long long)arg2 ;
-(void)removeWallpaperImageHashDataForVariants:(long long)arg1 ;
-(id)wallpaperOptionsForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(BOOL)setWallpaperImageHashData:(id)arg1 forVariants:(long long)arg2 wallpaperMode:(long long)arg3 ;
-(BOOL)setVideoURL:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3 ;
-(id)wallpaperColorForVariant:(long long)arg1 ;
-(void)removeWallpaperOptionsForVariants:(long long)arg1 ;
-(id)wallpaperOriginalImageForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(NSString *)description;
-(void)removeWallpaperColorForVariants:(long long)arg1 ;
-(id)wallpaperImageHashDataForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(BOOL)setWallpaperOptions:(id)arg1 forVariants:(long long)arg2 wallpaperMode:(long long)arg3 ;
-(BOOL)setOriginalVideoURL:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3 ;
-(id)wallpaperGradientForVariant:(long long)arg1 ;
-(BOOL)setWallpaperGradient:(id)arg1 forVariants:(long long)arg2 ;
-(BOOL)setWallpaperColorName:(id)arg1 forVariants:(long long)arg2 ;
-(void)moveWallpaperImageDataTypes:(unsigned long long)arg1 fromVariant:(long long)arg2 toVariant:(long long)arg3 ;
-(unsigned long long)numberOfStoredImages;
-(BOOL)setWallpaperThumbnailData:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3 ;
-(id)proceduralWallpaperInfoForVariant:(long long)arg1 ;
-(BOOL)setWallpaperColor:(id)arg1 forVariants:(long long)arg2 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)removeVideoForVariant:(long long)arg1 ;
-(id)wallpaperThumbnailDataForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(BOOL)setWallpaperOriginalImage:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3 ;
-(id)succinctDescriptionBuilder;
-(id)unverifiedVideoURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(void)removeWallpaperImageDataTypes:(unsigned long long)arg1 forVariants:(long long)arg2 ;
-(id)verifiedOriginalVideoURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(void)removeProceduralWallpaperForVariants:(long long)arg1 ;
@end

