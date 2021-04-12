/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUMediaProvider.h>

@class NSMapTable, NSMutableArray;

@interface PUJoiningMediaProvider : PUMediaProvider {

	NSMapTable* __mediaProviderByClass;
	NSMutableArray* __mediaProviderPredicateRecords;

}

@property (nonatomic,readonly) NSMapTable * _mediaProviderByClass;                           //@synthesize _mediaProviderByClass=__mediaProviderByClass - In the implementation block
@property (nonatomic,readonly) NSMutableArray * _mediaProviderPredicateRecords;              //@synthesize _mediaProviderPredicateRecords=__mediaProviderPredicateRecords - In the implementation block
-(id)init;
-(void)registerMediaProvider:(id)arg1 forAssetClass:(Class)arg2 ;
-(void)registerMediaProvider:(id)arg1 forAssetPassingTest:(/*^block*/id)arg2 ;
-(int)requestLivePhotoForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(int)requestImageURLForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(id)_mediaProviderForAsset:(id)arg1 requestType:(long long)arg2 ;
-(NSMapTable *)_mediaProviderByClass;
-(NSMutableArray *)_mediaProviderPredicateRecords;
-(int)requestAnimatedImageForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(int)requestImageDataForAsset:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(int)requestPlayerItemForVideo:(id)arg1 options:(id)arg2 resultHandler:(/*^block*/id)arg3 ;
-(int)requestImageForAsset:(id)arg1 targetSize:(CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(void)cancelImageRequest:(int)arg1 ;
@end

