/*
* Generated on Thursday, January 14, 2021 at 2:22:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXChangeObserver.h>

@protocol PXDisplayAsset, PXUIImageProvider;
@class UIImage, PXImageRequester, NSString;

@interface PXImageRequesterHelper : PXObservable <PXChangeObserver> {

	id<PXDisplayAsset> _asset;
	id<PXUIImageProvider> _mediaProvider;
	double _scale;
	UIImage* _image;
	PXImageRequester* _imageRequester;
	CGSize _contentSize;
	CGRect _contentsRect;

}

@property (nonatomic,retain) PXImageRequester * imageRequester;                  //@synthesize imageRequester=_imageRequester - In the implementation block
@property (nonatomic,readonly) id<PXDisplayAsset> asset;                         //@synthesize asset=_asset - In the implementation block
@property (nonatomic,readonly) id<PXUIImageProvider> mediaProvider;              //@synthesize mediaProvider=_mediaProvider - In the implementation block
@property (nonatomic,readonly) CGSize contentSize;                               //@synthesize contentSize=_contentSize - In the implementation block
@property (nonatomic,readonly) CGRect contentsRect;                              //@synthesize contentsRect=_contentsRect - In the implementation block
@property (nonatomic,readonly) double scale;                                     //@synthesize scale=_scale - In the implementation block
@property (nonatomic,readonly) UIImage * image;                                  //@synthesize image=_image - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setMediaProvider:(id<PXUIImageProvider>)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(void)setAsset:(id<PXDisplayAsset>)arg1 ;
-(id<PXUIImageProvider>)mediaProvider;
-(void)setImage:(UIImage *)arg1 ;
-(CGRect)contentsRect;
-(id<PXDisplayAsset>)asset;
-(CGSize)contentSize;
-(double)scale;
-(PXImageRequester *)imageRequester;
-(void)setImageRequester:(PXImageRequester *)arg1 ;
-(void)_updateImageRequester;
-(UIImage *)image;
-(void)setContentsRect:(CGRect)arg1 ;
-(void)_updateImage;
-(void)_updateContentsRect;
-(void)setScale:(double)arg1 ;
-(void)didPublishChanges;
-(void)_updateAssetOrMediaProvider;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

