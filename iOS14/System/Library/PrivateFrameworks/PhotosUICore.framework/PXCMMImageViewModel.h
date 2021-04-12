/*
* Generated on Thursday, January 14, 2021 at 2:22:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXObservable.h>

@protocol PXDisplayAsset, PXUIImageProvider;
@interface PXCMMImageViewModel : PXObservable {

	BOOL _highlighted;
	id<PXDisplayAsset> _asset;
	id<PXUIImageProvider> _mediaProvider;

}

@property (nonatomic,readonly) id<PXDisplayAsset> asset;                           //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) id<PXUIImageProvider> mediaProvider;                //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (getter=isHighlighted,nonatomic,readonly) BOOL highlighted;              //@synthesize highlighted=_highlighted - In the implementation block
-(void)setMediaProvider:(id<PXUIImageProvider>)arg1 ;
-(void)setAsset:(id<PXDisplayAsset>)arg1 ;
-(id<PXUIImageProvider>)mediaProvider;
-(id<PXDisplayAsset>)asset;
-(BOOL)isHighlighted;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
@end

