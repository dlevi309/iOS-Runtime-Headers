/*
* Generated on Thursday, January 14, 2021 at 2:24:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

