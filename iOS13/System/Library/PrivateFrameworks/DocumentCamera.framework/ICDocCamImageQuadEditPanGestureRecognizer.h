/*
* Generated on Monday, March 1, 2021 at 2:34:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/DocumentCamera.framework/DocumentCamera
*/

#import <UIKitCore/UIPanGestureRecognizer.h>

@protocol ICDocCamImageQuadEditPanGestureRecognizerDelegate;
@interface ICDocCamImageQuadEditPanGestureRecognizer : UIPanGestureRecognizer {

	id<ICDocCamImageQuadEditPanGestureRecognizerDelegate> _quadEditorDelegate;

}

@property (assign,nonatomic,__weak) id<ICDocCamImageQuadEditPanGestureRecognizerDelegate> quadEditorDelegate;              //@synthesize quadEditorDelegate=_quadEditorDelegate - In the implementation block
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(id<ICDocCamImageQuadEditPanGestureRecognizerDelegate>)quadEditorDelegate;
-(void)setQuadEditorDelegate:(id<ICDocCamImageQuadEditPanGestureRecognizerDelegate>)arg1 ;
@end

