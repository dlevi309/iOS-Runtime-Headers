/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/_PXPhotoKitAdjustedUIMediaRequest.h>

@class PLPhotoEditRenderer, NSString, PHImageRequestOptions;

@interface _PXPhotoKitAdjustedUIImageRequest : _PXPhotoKitAdjustedUIMediaRequest {

	PLPhotoEditRenderer* _renderer;
	BOOL _hasReturnedAdjustedResult;
	int _currentVersionRequestID;
	NSString* _uniqueContentIdentifier;
	CGSize _targetSize;
	long long _contentMode;
	PHImageRequestOptions* _options;
	/*^block*/id _resultHandler;

}

@property (nonatomic,readonly) CGSize targetSize;                            //@synthesize targetSize=_targetSize - In the implementation block
@property (nonatomic,readonly) long long contentMode;                        //@synthesize contentMode=_contentMode - In the implementation block
@property (nonatomic,readonly) PHImageRequestOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) id resultHandler;                        //@synthesize resultHandler=_resultHandler - In the implementation block
+(id)memoryCache;
-(id)resultHandler;
-(CGSize)targetSize;
-(long long)contentMode;
-(void)start;
-(PHImageRequestOptions *)options;
-(void)cancel;
-(void)editSourceDidChange;
-(void)progressDidChange;
-(void)_renderIfNeeded;
-(id)initWithRenderQueue:(id)arg1 asset:(id)arg2 contentMode:(long long)arg3 imageManager:(id)arg4 options:(id)arg5 resultHandler:(/*^block*/id)arg6 ;
-(id)memoryCachedImage;
-(void)cacheImageInMemory:(id)arg1 ;
-(id)_cachedImageURL;
-(id)_unscaledCachedImageURL;
-(id)_existingCachedImageURL;
-(id)memoryCacheKey;
-(BOOL)_deliverCachedImageIfPossible;
-(BOOL)_deliverCachedUnscaledImageIfPossible;
-(void)_handleCurrentVersionImageResult:(id)arg1 info:(id)arg2 ;
-(void)_handleImageWasCached;
-(void)_handleRenderedImage:(id)arg1 error:(id)arg2 ;
-(void)_handleRenderingFinishedWithData:(id)arg1 destinationURL:(id)arg2 targetSize:(CGSize)arg3 ;
@end

