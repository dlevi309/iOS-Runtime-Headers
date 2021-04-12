/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/_PXPhotoKitAdjustedUIMediaRequest.h>

@class PLPhotoEditRenderer, PHVideoRequestOptions;

@interface _PXPhotoKitAdjustedVideoRequest : _PXPhotoKitAdjustedUIMediaRequest {

	PLPhotoEditRenderer* _renderer;
	PHVideoRequestOptions* _options;
	/*^block*/id _resultHandler;

}

@property (nonatomic,readonly) PHVideoRequestOptions * options;              //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) id resultHandler;                        //@synthesize resultHandler=_resultHandler - In the implementation block
-(id)resultHandler;
-(void)start;
-(PHVideoRequestOptions *)options;
-(void)editSourceDidChange;
-(id)initWithRenderQueue:(id)arg1 asset:(id)arg2 imageManager:(id)arg3 options:(id)arg4 resultHandler:(/*^block*/id)arg5 ;
-(void)progressDidChange;
-(void)_renderIfNeeded;
-(void)_handlePlayerItem:(id)arg1 error:(id)arg2 ;
@end

