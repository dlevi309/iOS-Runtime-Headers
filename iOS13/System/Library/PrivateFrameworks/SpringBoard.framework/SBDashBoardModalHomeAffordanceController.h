/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/CSModalHomeAffordanceControlling.h>

@class UIScreenEdgePanGestureRecognizer, SBHomeGestureArbiter, SBHomeGestureParticipant, NSString;

@interface SBDashBoardModalHomeAffordanceController : NSObject <CSModalHomeAffordanceControlling> {

	SBHomeGestureArbiter* _homeGestureArbiter;
	SBHomeGestureParticipant* _participant;
	UIScreenEdgePanGestureRecognizer* _homeGestureRecognizer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) UIScreenEdgePanGestureRecognizer * homeGestureRecognizer;              //@synthesize homeGestureRecognizer=_homeGestureRecognizer - In the implementation block
-(id)init;
-(void)setHomeGestureRecognizer:(UIScreenEdgePanGestureRecognizer *)arg1 ;
-(void)registerHomeGestureParticipant:(id)arg1 ;
-(void)unregisterHomeGestureParticipant;
-(void)_addGrabberView:(id)arg1 ;
-(UIScreenEdgePanGestureRecognizer *)homeGestureRecognizer;
@end

