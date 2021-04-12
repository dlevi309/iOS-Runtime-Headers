/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <SpringBoardServices/SpringBoardServices-Structs.h>
#import <FrontBoardServices/FBSServiceFacilityClient.h>

@interface SBSWallpaperClient : FBSServiceFacilityClient
-(id)initWithCalloutQueue:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 calloutQueue:(id)arg2 ;
-(void)fetchOriginalVideoURLForVariant:(unsigned)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchThumbnailForVariant:(unsigned)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)restoreDefaultWallpaperWithCompletion:(/*^block*/id)arg1 ;
-(BOOL)setWallpaperColor:(id)arg1 darkColor:(id)arg2 forVariants:(unsigned long long)arg3 ;
-(void)fetchOriginalImageForVariant:(unsigned)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)fetchContentCutoutBoundsForVariant:(unsigned)arg1 orientation:(unsigned)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)setWallpaperGradient:(id)arg1 forVariants:(unsigned long long)arg2 ;
-(BOOL)setWallpaperColorName:(id)arg1 forVariants:(unsigned long long)arg2 ;
-(BOOL)setWallpaperWithVideoWithWallpaperMode:(id)arg1 cropRect:(CGRect)arg2 wallpaperMode:(unsigned char)arg3 ;
@end

