/*
* Generated on Thursday, January 14, 2021 at 2:22:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/_PXPhotoKitAdjustedUIMediaRequest.h>

@class PLPhotoEditRenderer, PHImageRequestOptions, NSString;

@interface _PXPhotoKitAdjustedImageURLRequest : _PXPhotoKitAdjustedUIMediaRequest {

	PLPhotoEditRenderer* _renderer;
	PHImageRequestOptions* _options;
	NSString* _pairingIdentifier;
	/*^block*/id _resultHandler;

}

@property (nonatomic,readonly) PHImageRequestOptions * options;                //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) NSString * pairingIdentifier;              //@synthesize pairingIdentifier=_pairingIdentifier - In the implementation block
@property (nonatomic,copy,readonly) id resultHandler;                          //@synthesize resultHandler=_resultHandler - In the implementation block
-(id)resultHandler;
-(NSString *)pairingIdentifier;
-(void)start;
-(PHImageRequestOptions *)options;
-(void)editSourceDidChange;
-(void)progressDidChange;
-(void)_renderIfNeeded;
-(id)initWithRenderQueue:(id)arg1 asset:(id)arg2 pairingIdentifier:(id)arg3 imageManager:(id)arg4 options:(id)arg5 resultHandler:(/*^block*/id)arg6 ;
-(void)_handleExportFinished:(id)arg1 ;
@end

