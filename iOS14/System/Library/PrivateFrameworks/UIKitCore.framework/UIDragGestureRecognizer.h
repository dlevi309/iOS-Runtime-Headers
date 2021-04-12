/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)canPreventGestureRecognizer:(id)arg1 ;
-(id)initWithTarget:(id)arg1 action:(SEL)arg2 ;
-(_UIDropSessionImpl *)dropSession;
-(BOOL)_shouldReceiveTouch:(id)arg1 forEvent:(id)arg2 recognizerView:(id)arg3 ;
-(BOOL)_shouldReceivePress:(id)arg1 ;
-(BOOL)canBePreventedByGestureRecognizer:(id)arg1 ;
-(id)_dragEvent;
-(_UIInternalDraggingSessionDestination *)sessionDestination;
-(CGPoint)locationInView:(id)arg1 ;
-(BOOL)shouldReceiveEvent:(id)arg1 ;
@end

