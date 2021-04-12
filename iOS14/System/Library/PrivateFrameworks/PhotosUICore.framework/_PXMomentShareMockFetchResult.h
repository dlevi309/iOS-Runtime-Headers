/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <libobjc.A.dylib/PXDisplayAssetFetchResult.h>

@class NSArray, NSString;

@interface _PXMomentShareMockFetchResult : NSObject <PXDisplayAssetFetchResult> {

	NSArray* _assets;

}

@property (nonatomic,readonly) id<PXDisplayAsset> firstObject; 
@property (nonatomic,readonly) id<PXDisplayAsset> lastObject; 
@property (nonatomic,readonly) long long count; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)momentShareMockFetchResultWithPhotosCount:(unsigned long long)arg1 videosCount:(unsigned long long)arg2 ;
-(id)thumbnailAssetAtIndex:(unsigned long long)arg1 ;
-(id)objectsAtIndexes:(id)arg1 ;
-(long long)count;
-(unsigned long long)countOfAssetsWithMediaType:(long long)arg1 ;
-(id<PXDisplayAsset>)lastObject;
-(id<PXDisplayAsset>)firstObject;
-(BOOL)containsObject:(id)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(unsigned long long)cachedCountOfAssetsWithMediaType:(long long)arg1 ;
-(id)initWithAssets:(id)arg1 ;
@end

