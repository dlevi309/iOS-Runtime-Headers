/*
* Generated on Monday, March 1, 2021 at 2:35:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKitUI.framework/ActionKitUI
*/

#import <UIKitCore/UIView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class WFOverlayImageTransform, UIRotationGestureRecognizer, UIImageView, NSString;

@interface WFOverlayImageEditorCanvasView : UIView <UIGestureRecognizerDelegate> {

	BOOL _rotationEnabled;
	WFOverlayImageTransform* _imageTransform;
	UIRotationGestureRecognizer* _rotateRecognizer;
	UIImageView* _backgroundImageView;
	UIImageView* _overlayImageView;

}

@property (nonatomic,__weak,readonly) UIRotationGestureRecognizer * rotateRecognizer;              //@synthesize rotateRecognizer=_rotateRecognizer - In the implementation block
@property (nonatomic,__weak,readonly) UIImageView * backgroundImageView;                           //@synthesize backgroundImageView=_backgroundImageView - In the implementation block
@property (nonatomic,__weak,readonly) UIImageView * overlayImageView;                              //@synthesize overlayImageView=_overlayImageView - In the implementation block
@property (assign,nonatomic) BOOL rotationEnabled;                                                 //@synthesize rotationEnabled=_rotationEnabled - In the implementation block
@property (nonatomic,readonly) WFOverlayImageTransform * imageTransform;                           //@synthesize imageTransform=_imageTransform - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)reset;
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(void)layoutSubviews;
-(UIImageView *)backgroundImageView;
-(void)setRotationEnabled:(BOOL)arg1 ;
-(void)handlePanGesture:(id)arg1 ;
-(void)handlePinchGesture:(id)arg1 ;
-(WFOverlayImageTransform *)imageTransform;
-(void)handleRotateGesture:(id)arg1 ;
-(BOOL)rotationEnabled;
-(id)initWithBackgroundImage:(id)arg1 overlayImage:(id)arg2 transform:(id)arg3 ;
-(void)setOverlayImageOpacity:(double)arg1 ;
-(UIRotationGestureRecognizer *)rotateRecognizer;
-(UIImageView *)overlayImageView;
@end

