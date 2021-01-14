/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXMutableImageRequester <NSObject>
@property (nonatomic,retain) id<PXUIImageProvider> mediaProvider; 
@property (nonatomic,retain) id<PXDisplayAsset> asset; 
@property (assign,nonatomic) CGSize contentSize; 
@property (assign,nonatomic) CGRect cropRect; 
@property (assign,nonatomic) double scale; 
@property (assign,nonatomic) CGSize maximumRequestSize; 
@property (assign,nonatomic) CGRect desiredContentsRect; 
@property (assign,nonatomic) CGSize viewportSize; 
@required
-(void)setMediaProvider:(id)arg1;
-(CGRect)cropRect;
-(void)setContentSize:(CGSize)arg1;
-(void)setAsset:(id)arg1;
-(id<PXUIImageProvider>)mediaProvider;
-(void)setCropRect:(CGRect)arg1;
-(id<PXDisplayAsset>)asset;
-(CGSize)contentSize;
-(double)scale;
-(void)handlePreloadedImage:(id)arg1;
-(CGSize)viewportSize;
-(CGRect)desiredContentsRect;
-(void)setDesiredContentsRect:(CGRect)arg1;
-(void)setScale:(double)arg1;
-(void)handlePreloadedImageRequester:(id)arg1;
-(CGSize)maximumRequestSize;
-(void)setMaximumRequestSize:(CGSize)arg1;
-(void)setViewportSize:(CGSize)arg1;

@end

