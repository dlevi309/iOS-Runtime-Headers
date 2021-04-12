/*
* Generated on Thursday, January 14, 2021 at 2:24:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/

#import <Silex/Silex-Structs.h>
#import <Silex/SXMediaComponentView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>
#import <libobjc.A.dylib/SXImageViewDelegate.h>
#import <libobjc.A.dylib/SXDragManagerDataSource.h>

@protocol SXImageViewFactory, SXMediaSharingPolicyProvider;
@class SXImageView, SXAnimatedImageController, SXDragManager, NSString;

@interface SXImageComponentView : SXMediaComponentView <UIGestureRecognizerDelegate, SXImageViewDelegate, SXDragManagerDataSource> {

	id<SXImageViewFactory> _imageViewFactory;
	id<SXMediaSharingPolicyProvider> _mediaSharingPolicyProvider;
	SXImageView* _imageView;
	SXAnimatedImageController* _animatedImageController;
	SXDragManager* _dragManager;

}

@property (nonatomic,readonly) id<SXImageViewFactory> imageViewFactory;                                  //@synthesize imageViewFactory=_imageViewFactory - In the implementation block
@property (nonatomic,readonly) id<SXMediaSharingPolicyProvider> mediaSharingPolicyProvider;              //@synthesize mediaSharingPolicyProvider=_mediaSharingPolicyProvider - In the implementation block
@property (nonatomic,readonly) SXImageView * imageView;                                                  //@synthesize imageView=_imageView - In the implementation block
@property (nonatomic,retain) SXAnimatedImageController * animatedImageController;                        //@synthesize animatedImageController=_animatedImageController - In the implementation block
@property (nonatomic,retain) SXDragManager * dragManager;                                                //@synthesize dragManager=_dragManager - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SXImageView *)imageView;
-(CGRect)imageFrame;
-(id<SXMediaSharingPolicyProvider>)mediaSharingPolicyProvider;
-(id)imageResource;
-(NSString *)description;
-(void)discardContents;
-(SXDragManager *)dragManager;
-(void)dealloc;
-(void)renderContents;
-(void)presentComponentWithChanges:(SCD_Struct_SX17)arg1 ;
-(void)visibilityStateDidChangeFromState:(long long)arg1 ;
-(void)imageView:(id)arg1 didLoadAnimatedImage:(id)arg2 ;
-(CGRect)originalFrameForContentView:(id)arg1 behavior:(id)arg2 ;
-(id)viewForDragManager:(id)arg1 ;
-(id)dragManager:(id)arg1 dragableAtLocation:(CGPoint)arg2 ;
-(void)setDragManager:(SXDragManager *)arg1 ;
-(id<SXImageViewFactory>)imageViewFactory;
-(unsigned long long)analyticsMediaType;
-(void)loadComponent:(id)arg1 ;
-(id)transitionContentView;
-(CGRect)transitionContentFrame;
-(BOOL)usesThumbnailWithImageIdentifier:(id)arg1 ;
-(id)contentViewForBehavior:(id)arg1 ;
-(void)layoutImageView;
-(SXAnimatedImageController *)animatedImageController;
-(void)setAnimatedImageController:(SXAnimatedImageController *)arg1 ;
-(id)initWithDOMObjectProvider:(id)arg1 viewport:(id)arg2 presentationDelegate:(id)arg3 componentStyleRendererFactory:(id)arg4 analyticsReporting:(id)arg5 appStateMonitor:(id)arg6 imageViewFactory:(id)arg7 mediaSharingPolicyProvider:(id)arg8 ;
-(void)imageView:(id)arg1 didLoadImage:(id)arg2 ;
@end

