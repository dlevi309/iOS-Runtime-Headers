/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXGImageRequestPerformer;
#import <PhotosUICore/PhotosUICore-Structs.h>
@interface PXGImageRequestQueue : NSObject {

	PXGImageRequest* _requests;
	long long _capacity;
	long long _count;
	id<PXGImageRequestPerformer> _imageRequestPerformer;

}

@property (assign,nonatomic) long long count;                                                        //@synthesize count=_count - In the implementation block
@property (assign,nonatomic,__weak) id<PXGImageRequestPerformer> imageRequestPerformer;              //@synthesize imageRequestPerformer=_imageRequestPerformer - In the implementation block
-(void)setCount:(long long)arg1 ;
-(void)cancelTextureRequests:(id)arg1 ;
-(void)_discardIndexes:(id)arg1 ;
-(long long)count;
-(id<PXGImageRequestPerformer>)imageRequestPerformer;
-(void)enqueueRequestsWithSpriteIndexRange:(PXGSpriteIndexRange)arg1 textureRequestIDs:(NSRange)arg2 displayAssetFetchResult:(id)arg3 observer:(id)arg4 presentationStyles:(unsigned long long)arg5 targetSize:(CGSize)arg6 screenScale:(double)arg7 ;
-(void)setImageRequestPerformer:(id<PXGImageRequestPerformer>)arg1 ;
-(void)performRequestsWithAllowedIDs:(id)arg1 ;
-(void)dealloc;
-(void)_removeAllRequests;
@end

