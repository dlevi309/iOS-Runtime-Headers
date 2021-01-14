/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
*/

#import <UIKit/UIGestureRecognizerDelegate.h>

@interface CNKFaceTimeInCallControlsDragController : NSObject <UIGestureRecognizerDelegate> {

	 inCallControlsView;
	 constraintsController;
	 panGestureRecognizer;
	 animation;
	 delegate;
	 disabledScrollViews;

}

@property (assign,__weak,nonatomic) id<CNKFaceTimeInCallControlsDragControllerDelegate> delegate; 
@property (readonly,nonatomic) BOOL isDragging; 
-(BOOL)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2 ;
-(id)init;
-(id<CNKFaceTimeInCallControlsDragControllerDelegate>)delegate;
-(void)setDelegate:(id<CNKFaceTimeInCallControlsDragControllerDelegate>)arg1 ;
-(BOOL)isDragging;
-(void)handlePanGestureRecognizer:(id)arg1 ;
-(id)initInCallControlsView:(id)arg1 constraintsController:(id)arg2 ;
-(void)resetGestureRecognizer;
@end

