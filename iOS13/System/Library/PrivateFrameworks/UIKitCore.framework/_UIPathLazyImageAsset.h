/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIImageAsset.h>

@class NSArray;

@interface _UIPathLazyImageAsset : UIImageAsset {

	BOOL _imagesHaveBeenLoaded;
	BOOL _haveCGCacheImages;
	NSArray* _imagePaths;

}

@property (nonatomic,copy) NSArray * imagePaths;                  //@synthesize imagePaths=_imagePaths - In the implementation block
@property (assign,nonatomic) BOOL haveCGCacheImages;              //@synthesize haveCGCacheImages=_haveCGCacheImages - In the implementation block
-(id)imageWithConfiguration:(id)arg1 ;
-(void)_clearResolvedImageResources;
-(BOOL)_containsImagesInPath:(id)arg1 ;
-(NSArray *)imagePaths;
-(void)setImagePaths:(NSArray *)arg1 ;
-(BOOL)haveCGCacheImages;
-(void)setHaveCGCacheImages:(BOOL)arg1 ;
@end

