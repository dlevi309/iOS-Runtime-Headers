/*
* Generated on Monday, March 1, 2021 at 2:33:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardHome.framework/SpringBoardHome
*/


@class UIInteractionProgress, UIGestureRecognizer;

@interface SBWorkspaceInteractionContext : NSObject {

	UIInteractionProgress* _interactionProgress;
	UIGestureRecognizer* _gestureRecognizer;

}

@property (nonatomic,readonly) UIInteractionProgress * interactionProgress;              //@synthesize interactionProgress=_interactionProgress - In the implementation block
@property (nonatomic,readonly) UIGestureRecognizer * gestureRecognizer;                  //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
-(UIInteractionProgress *)interactionProgress;
-(id)initWithInteractionProgress:(id)arg1 ;
-(UIGestureRecognizer *)gestureRecognizer;
-(id)initWithGestureRecognizer:(id)arg1 ;
@end

