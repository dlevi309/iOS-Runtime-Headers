/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <libobjc.A.dylib/CSModalHomeAffordanceControlling.h>

@class UIScreenEdgePanGestureRecognizer, SBHomeGestureArbiter, SBHomeGestureParticipant, NSString;

@interface SBDashBoardModalHomeAffordanceController : NSObject <CSModalHomeAffordanceControlling> {

	SBHomeGestureArbiter* _homeGestureArbiter;
	SBHomeGestureParticipant* _participant;
	UIScreenEdgePanGestureRecognizer* _homeGestureRecognizer;

}

@property (nonatomic,retain) UIScreenEdgePanGestureRecognizer * homeGestureRecognizer;              //@synthesize homeGestureRecognizer=_homeGestureRecognizer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)_addGrabberView:(id)arg1 ;
-(void)registerHomeGestureParticipant:(id)arg1 ;
-(void)unregisterHomeGestureParticipant;
-(UIScreenEdgePanGestureRecognizer *)homeGestureRecognizer;
-(void)setHomeGestureRecognizer:(UIScreenEdgePanGestureRecognizer *)arg1 ;
@end

