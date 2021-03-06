/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Settings/WallpaperSettings.framework/WallpaperSettings
*/


#import <WallpaperSettings/WallpaperSettings-Structs.h>
@class PUPhotosGridViewControllerSpec;

@interface WallpaperAlbumViewControllerSpec : NSObject {

	PUPhotosGridViewControllerSpec* _gridSpec;

}

@property (nonatomic,readonly) PUPhotosGridViewControllerSpec * gridSpec;              //@synthesize gridSpec=_gridSpec - In the implementation block
+(Class)gridSpecClass;
-(id)init;
-(PUPhotosGridViewControllerSpec *)gridSpec;
-(void)configureCollectionViewGridLayout:(id)arg1 forWidth:(double)arg2 safeAreaInsets:(UIEdgeInsets)arg3 ;
-(void)configureFactoryGridLayout:(id)arg1 forWidth:(double)arg2 andThumbnailSize:(CGSize)arg3 ;
@end

