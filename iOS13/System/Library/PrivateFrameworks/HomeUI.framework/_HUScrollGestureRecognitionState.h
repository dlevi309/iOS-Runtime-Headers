/*
* Generated on Monday, March 1, 2021 at 2:34:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@protocol NACancelable;
@class UIGestureRecognizer;

@interface _HUScrollGestureRecognitionState : NSObject {

	UIGestureRecognizer* _gestureRecognizer;
	id<NACancelable> _activationTimer;

}

@property (nonatomic,readonly) UIGestureRecognizer * gestureRecognizer;              //@synthesize gestureRecognizer=_gestureRecognizer - In the implementation block
@property (nonatomic,retain) id<NACancelable> activationTimer;                       //@synthesize activationTimer=_activationTimer - In the implementation block
-(UIGestureRecognizer *)gestureRecognizer;
-(id)initWithGestureRecognizer:(id)arg1 ;
-(id<NACancelable>)activationTimer;
-(void)setActivationTimer:(id<NACancelable>)arg1 ;
@end

