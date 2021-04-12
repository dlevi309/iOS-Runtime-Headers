/*
* Generated on Thursday, January 14, 2021 at 2:27:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

