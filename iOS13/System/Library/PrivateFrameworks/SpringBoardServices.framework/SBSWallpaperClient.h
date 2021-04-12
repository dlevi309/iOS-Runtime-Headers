/*
* Generated on Monday, March 1, 2021 at 2:30:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardServices.framework/SpringBoardServices
*/

#import <SpringBoardServices/SpringBoardServices-Structs.h>
#import <FrontBoardServices/FBSServiceFacilityClient.h>

@interface SBSWallpaperClient : FBSServiceFacilityClient
-(id)initWithCalloutQueue:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 calloutQueue:(id)arg2 ;
-(void)fetchThumbnailForVariant:(unsigned)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)setWallpaperWithVideoWithWallpaperMode:(id)arg1 cropRect:(CGRect)arg2 wallpaperMode:(unsigned char)arg3 ;
-(BOOL)setWallpaperColorName:(id)arg1 forVariants:(unsigned long long)arg2 ;
-(BOOL)setWallpaperGradient:(id)arg1 forVariants:(unsigned long long)arg2 ;
-(void)restoreDefaultWallpaperWithCompletion:(/*^block*/id)arg1 ;
@end

