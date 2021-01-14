/*
* Generated on Thursday, January 14, 2021 at 2:20:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)_containsImagesInPath:(id)arg1 ;
-(NSArray *)imagePaths;
-(id)imageWithConfiguration:(id)arg1 ;
-(void)setImagePaths:(NSArray *)arg1 ;
-(void)_clearResolvedImageResources;
-(void)setHaveCGCacheImages:(BOOL)arg1 ;
-(BOOL)haveCGCacheImages;
@end

