/*
* Generated on Thursday, January 14, 2021 at 2:23:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardFoundation.framework/SpringBoardFoundation
*/

#import <libobjc.A.dylib/SBFWallpaperDataStore.h>
#import <libobjc.A.dylib/BSDescriptionProviding.h>

@class NSURL, NSDictionary, NSString;

@interface SBFWallpaperDirectoryDataStore : NSObject <SBFWallpaperDataStore, BSDescriptionProviding> {

	BOOL _supportsWallpaperOptions;
	NSURL* _directoryURL;

}

@property (nonatomic,copy,readonly) NSDictionary * directoryCreationAttributes; 
@property (nonatomic,copy,readonly) NSURL * directoryURL;                                    //@synthesize directoryURL=_directoryURL - In the implementation block
@property (assign,nonatomic) BOOL supportsWallpaperOptions;                                  //@synthesize supportsWallpaperOptions=_supportsWallpaperOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultDirectoryURL;
-(id)succinctDescription;
-(id)wallpaperImageForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(BOOL)setWallpaperImage:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3 ;
-(id)wallpaperColorNameForVariant:(long long)arg1 ;
-(NSDictionary *)directoryCreationAttributes;
-(BOOL)hasWallpaperImageForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(id)init;
-(id)wallpaperThumbnailURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(void)removeWallpaperGradientForVariants:(long long)arg1 ;
-(id)verifiedVideoURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)setProceduralWallpaperInfo:(id)arg1 forVariants:(long long)arg2 ;
-(void)removeWallpaperImageHashDataForVariants:(long long)arg1 ;
-(id)wallpaperOptionsForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(id)wallpaperVideoURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(BOOL)setWallpaperImageHashData:(id)arg1 forVariants:(long long)arg2 wallpaperMode:(long long)arg3 ;
-(BOOL)setVideoURL:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3 ;
-(id)wallpaperColorForVariant:(long long)arg1 ;
-(void)removeWallpaperOptionsForVariants:(long long)arg1 ;
-(id)wallpaperOriginalImageForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(BOOL)supportsWallpaperOptions;
-(NSString *)description;
-(void)removeWallpaperColorForVariants:(long long)arg1 ;
-(id)wallpaperOriginalVideoURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(id)wallpaperImageHashDataForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(BOOL)setWallpaperOptions:(id)arg1 forVariants:(long long)arg2 wallpaperMode:(long long)arg3 ;
-(id)wallpaperOptionsURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(id)wallpaperImageURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(BOOL)setOriginalVideoURL:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3 ;
-(void)didWriteFileToURL:(id)arg1 ;
-(id)wallpaperGradientForVariant:(long long)arg1 ;
-(id)initWithDirectoryURL:(id)arg1 ;
-(id)wallpaperOriginalImageURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(BOOL)setWallpaperGradient:(id)arg1 forVariants:(long long)arg2 ;
-(BOOL)setWallpaperColorName:(id)arg1 forVariants:(long long)arg2 ;
-(void)moveWallpaperImageDataTypes:(unsigned long long)arg1 fromVariant:(long long)arg2 toVariant:(long long)arg3 ;
-(void)setSupportsWallpaperOptions:(BOOL)arg1 ;
-(void)createDirectory;
-(NSURL *)directoryURL;
-(BOOL)setWallpaperThumbnailData:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3 ;
-(id)proceduralWallpaperInfoForVariant:(long long)arg1 ;
-(BOOL)setWallpaperColor:(id)arg1 forVariants:(long long)arg2 ;
-(id)descriptionWithMultilinePrefix:(id)arg1 ;
-(void)removeVideoForVariant:(long long)arg1 ;
-(id)wallpaperThumbnailDataForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(BOOL)setWallpaperOriginalImage:(id)arg1 forVariant:(long long)arg2 wallpaperMode:(long long)arg3 ;
-(id)succinctDescriptionBuilder;
-(BOOL)copyVideoAtURL:(id)arg1 toURL:(id)arg2 ;
-(id)unverifiedVideoURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(void)removeWallpaperImageDataTypes:(unsigned long long)arg1 forVariants:(long long)arg2 ;
-(id)verifiedOriginalVideoURLForVariant:(long long)arg1 wallpaperMode:(long long)arg2 ;
-(void)removeProceduralWallpaperForVariants:(long long)arg1 ;
@end

