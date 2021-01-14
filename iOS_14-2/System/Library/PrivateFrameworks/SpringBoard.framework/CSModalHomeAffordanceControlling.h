/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

@class UIScreenEdgePanGestureRecognizer;


@protocol CSModalHomeAffordanceControlling <NSObject>
@property (nonatomic,retain) UIScreenEdgePanGestureRecognizer * homeGestureRecognizer; 
@required
-(void)registerHomeGestureParticipant:(id)arg1;
-(void)unregisterHomeGestureParticipant;
-(UIScreenEdgePanGestureRecognizer *)homeGestureRecognizer;
-(void)setHomeGestureRecognizer:(id)arg1;

@end

