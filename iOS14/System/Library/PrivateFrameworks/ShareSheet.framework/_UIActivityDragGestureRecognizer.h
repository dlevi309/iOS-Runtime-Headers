/*
* Generated on Thursday, January 14, 2021 at 2:22:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ShareSheet.framework/ShareSheet
*/

#import <ShareSheet/ShareSheet-Structs.h>
#import <UIKitCore/UILongPressGestureRecognizer.h>
#import <UIKit/UIAutoscrollDelegate.h>
#import <libobjc.A.dylib/_UIScrollViewScrollObserver.h>

@class UIScrollView, UIAutoscroll, NSString;

@interface _UIActivityDragGestureRecognizer : UILongPressGestureRecognizer <UIAutoscrollDelegate, _UIScrollViewScrollObserver> {

	UIScrollView* _targetScrollView;
	UIAutoscroll* _autoscroll;
	UIEdgeInsets _draggingInsets;

}

@property (nonatomic,retain) UIScrollView * targetScrollView;              //@synthesize targetScrollView=_targetScrollView - In the implementation block
@property (nonatomic,retain) UIAutoscroll * autoscroll;                    //@synthesize autoscroll=_autoscroll - In the implementation block
@property (assign,nonatomic) UIEdgeInsets draggingInsets;                  //@synthesize draggingInsets=_draggingInsets - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)updateAutoscroll:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(void)cancelAutoscroll;
-(void)touchesMoved:(id)arg1 withEvent:(id)arg2 ;
-(UIAutoscroll *)autoscroll;
-(void)_observeScrollViewDidScroll:(id)arg1 ;
-(void)setState:(long long)arg1 ;
-(void)reset;
-(void)setAutoscroll:(UIAutoscroll *)arg1 ;
-(void)setDraggingInsets:(UIEdgeInsets)arg1 ;
-(void)setTargetScrollView:(UIScrollView *)arg1 ;
-(void)beginAutoscrollAndUpdateDirectionIfNeeded;
-(UIScrollView *)targetScrollView;
-(int)autoscrollDirectionsForPoint:(CGPoint)arg1 inView:(id)arg2 ;
-(UIEdgeInsets)draggingInsets;
-(void)autoscrollWillNotStart;
@end

