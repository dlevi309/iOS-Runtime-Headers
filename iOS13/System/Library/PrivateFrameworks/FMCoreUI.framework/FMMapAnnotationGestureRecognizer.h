/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
*/

#import <UIKitCore/UIGestureRecognizer.h>

@protocol FMMapAnnotationGestureRecognizerDelegate;
@interface FMMapAnnotationGestureRecognizer : UIGestureRecognizer {

	id<FMMapAnnotationGestureRecognizerDelegate> _touchDelegate;

}

@property (assign,nonatomic) id<FMMapAnnotationGestureRecognizerDelegate> touchDelegate;              //@synthesize touchDelegate=_touchDelegate - In the implementation block
-(id)init;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(id<FMMapAnnotationGestureRecognizerDelegate>)touchDelegate;
-(void)setTouchDelegate:(id<FMMapAnnotationGestureRecognizerDelegate>)arg1 ;
@end

