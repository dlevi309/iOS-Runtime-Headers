/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIGestureRecognizer.h>

@class UIDragEvent, _UIInternalDraggingSessionDestination, _UIDropSessionImpl;

@interface UIDragGestureRecognizer : UIGestureRecognizer {

	UIDragEvent* _dragEvent;

}

@property (getter=_dragEvent,nonatomic,__weak,readonly) UIDragEvent * dragEvent;                        //@synthesize dragEvent=_dragEvent - In the implementation block
@property (assign,nonatomic,__weak) id<UIDragGestureRecognizerDelegate> delegate; 
@property (nonatomic,readonly) _UIInternalDraggingSessionDestination * sessionDestination; 
@property (nonatomic,readonly) _UIDropSessionImpl * dropSession; 
-(CGPoint)locationInView:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(_UIDropSessionImpl *)dropSession;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(BOOL)_shouldReceiveTouch:(id)arg1 forEvent:(id)arg2 recognizerView:(id)arg3 ;
-(_UIInternalDraggingSessionDestination *)sessionDestination;
-(id)_dragEvent;
-(BOOL)_shouldReceiveDragEvent:(id)arg1 ;
-(BOOL)_shouldReceivePress:(id)arg1 ;
@end

