/*
* Generated on Thursday, January 14, 2021 at 2:28:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VideosUICore.framework/VideosUICore
*/

#import <VideosUICore/VideosUICore-Structs.h>
#import <UIKitCore/_UIStackedImageContainerView.h>
#import <libobjc.A.dylib/VUIAuxiliaryViewSelecting.h>

@class VUILayeredImageProxy, UIView, UIImage, _UIStackedImageContainerLayer, NSString;

@interface VUILayeredImageContainerView : _UIStackedImageContainerView <VUIAuxiliaryViewSelecting> {

	VUILayeredImageProxy* _layeredImageProxy;
	BOOL _layeredImageLoaded;
	UIView* _overlayView;
	UIImage* _loadedImage;

}

@property (assign,getter=isLayeredImageLoaded,nonatomic) BOOL layeredImageLoaded;                       //@synthesize layeredImageLoaded=_layeredImageLoaded - In the implementation block
@property (nonatomic,retain) UIImage * loadedImage;                                                     //@synthesize loadedImage=_loadedImage - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                                                      //@synthesize overlayView=_overlayView - In the implementation block
@property (assign,nonatomic) BOOL fixedFrameOverlayView; 
@property (nonatomic,retain) VUILayeredImageProxy * layeredImageProxy;                                  //@synthesize layeredImageProxy=_layeredImageProxy - In the implementation block
@property (nonatomic,readonly) _UIStackedImageContainerLayer * layeredImageContainerLayer; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setPressed:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIView *)overlayView;
-(void)setOverlayView:(UIView *)arg1 ;
-(void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setPressed:(BOOL)arg1 animated:(BOOL)arg2 completion:(/*^block*/id)arg3 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 focusAnimationCoordinator:(id)arg3 ;
-(void)setSelected:(BOOL)arg1 ;
-(void)willMoveToWindow:(id)arg1 ;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 withAnimationCoordinator:(id)arg3 ;
-(UIEdgeInsets)selectionMarginsForSize:(CGSize)arg1 ;
-(_UIStackedImageContainerLayer *)layeredImageContainerLayer;
-(void)setOverlayView:(id)arg1 masked:(BOOL)arg2 ;
-(void)setLayeredImageLoaded:(BOOL)arg1 ;
-(void)_loadLayeredImage;
-(BOOL)isLayeredImageLoaded;
-(void)setLoadedImage:(UIImage *)arg1 ;
-(id)initWithLayeredImageProxy:(id)arg1 ;
-(void)setFixedFrameOverlayView:(BOOL)arg1 ;
-(BOOL)fixedFrameOverlayView;
-(void)setLayeredImageProxy:(VUILayeredImageProxy *)arg1 ;
-(VUILayeredImageProxy *)layeredImageProxy;
-(UIImage *)loadedImage;
@end

