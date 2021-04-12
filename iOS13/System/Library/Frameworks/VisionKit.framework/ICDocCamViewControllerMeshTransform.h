/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VisionKit.framework/VisionKit
*/

#import <VisionKit/VisionKit-Structs.h>
#import <libobjc.A.dylib/CAAnimationDelegate.h>

@class UIImageView, UIView, ICDocCamImageQuad, NSString;

@interface ICDocCamViewControllerMeshTransform : NSObject <CAAnimationDelegate> {

	UIImageView* _animationImageView;
	UIView* _scrimView;
	ICDocCamImageQuad* _imageQuad;
	/*^block*/id _imageMeshAnimationCompletionBlock;
	CGSize _imageSize;
	CGRect _imageViewFrame;
	CGRect _previewViewFrame;

}

@property (nonatomic,retain) UIImageView * animationImageView;                //@synthesize animationImageView=_animationImageView - In the implementation block
@property (nonatomic,retain) UIView * scrimView;                              //@synthesize scrimView=_scrimView - In the implementation block
@property (assign,nonatomic) CGRect imageViewFrame;                           //@synthesize imageViewFrame=_imageViewFrame - In the implementation block
@property (assign,nonatomic) CGRect previewViewFrame;                         //@synthesize previewViewFrame=_previewViewFrame - In the implementation block
@property (assign,nonatomic) CGSize imageSize;                                //@synthesize imageSize=_imageSize - In the implementation block
@property (nonatomic,retain) ICDocCamImageQuad * imageQuad;                   //@synthesize imageQuad=_imageQuad - In the implementation block
@property (nonatomic,copy) id imageMeshAnimationCompletionBlock;              //@synthesize imageMeshAnimationCompletionBlock=_imageMeshAnimationCompletionBlock - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)animationDidStop:(id)arg1 finished:(BOOL)arg2 ;
-(CGSize)imageSize;
-(void)hide;
-(void)setImageSize:(CGSize)arg1 ;
-(void)startWithCompletionBlock:(/*^block*/id)arg1 ;
-(CGRect)previewViewFrame;
-(ICDocCamImageQuad *)imageQuad;
-(void)setImageViewFrame:(CGRect)arg1 ;
-(CGRect)imageViewFrame;
-(void)setImageQuad:(ICDocCamImageQuad *)arg1 ;
-(void)setPreviewViewFrame:(CGRect)arg1 ;
-(void)setAnimationImageView:(UIImageView *)arg1 ;
-(UIImageView *)animationImageView;
-(void)setScrimView:(UIView *)arg1 ;
-(UIView *)scrimView;
-(id)imageMeshAnimationCompletionBlock;
-(void)setImageMeshAnimationCompletionBlock:(id)arg1 ;
-(id)imageMeshTransformWithImageQuad:(id)arg1 imageViewFrame:(CGRect)arg2 previewBounds:(CGRect)arg3 finalTransform:(BOOL)arg4 ;
-(CGRect)frameForImageInImageViewFrame:(CGRect)arg1 ;
-(id)initWithImage:(id)arg1 backgroundImage:(id)arg2 imageViewFrame:(CGRect)arg3 view:(id)arg4 imageQuad:(id)arg5 previewView:(id)arg6 previewBounds:(CGRect)arg7 scrimView:(id)arg8 ;
@end
