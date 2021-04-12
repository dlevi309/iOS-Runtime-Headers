/*
* Generated on Thursday, January 14, 2021 at 2:27:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
*/

#import <UIKitCore/UIGestureRecognizer.h>

@protocol FMMapAnnotationGestureRecognizerDelegate;
@interface FMMapAnnotationGestureRecognizer : UIGestureRecognizer {

	id<FMMapAnnotationGestureRecognizerDelegate> _touchDelegate;

}

@property (assign,nonatomic) id<FMMapAnnotationGestureRecognizerDelegate> touchDelegate;              //@synthesize touchDelegate=_touchDelegate - In the implementation block
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(void)setTouchDelegate:(id<FMMapAnnotationGestureRecognizerDelegate>)arg1 ;
-(id<FMMapAnnotationGestureRecognizerDelegate>)touchDelegate;
-(id)init;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(void)touchesEnded:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesCancelled:(id)arg1 withEvent:(id)arg2 ;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
@end

