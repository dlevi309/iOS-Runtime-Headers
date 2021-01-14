/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PUAssetActionPerformer.h>

@protocol PUForYouSuggestionActionPerformerDelegate;
@class PXForYouSuggestionDisplayAsset, PXPhotoKitAdjustedUIMediaProvider;

@interface PUForYouSuggestionActionPerformer : PUAssetActionPerformer {

	PXForYouSuggestionDisplayAsset* _asset;
	PXPhotoKitAdjustedUIMediaProvider* _mediaProvider;
	id<PUForYouSuggestionActionPerformerDelegate> _statusDelegate;

}

@property (nonatomic,readonly) PXForYouSuggestionDisplayAsset * asset;                                         //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) PXPhotoKitAdjustedUIMediaProvider * mediaProvider;                              //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (assign,nonatomic,__weak) id<PUForYouSuggestionActionPerformerDelegate> statusDelegate;              //@synthesize statusDelegate=_statusDelegate - In the implementation block
-(PXPhotoKitAdjustedUIMediaProvider *)mediaProvider;
-(id)init;
-(PXForYouSuggestionDisplayAsset *)asset;
-(id)initWithAsset:(id)arg1 ;
-(void)setStatusDelegate:(id<PUForYouSuggestionActionPerformerDelegate>)arg1 ;
-(id<PUForYouSuggestionActionPerformerDelegate>)statusDelegate;
@end

