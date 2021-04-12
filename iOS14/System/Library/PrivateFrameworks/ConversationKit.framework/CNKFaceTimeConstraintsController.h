/*
* Generated on Thursday, January 14, 2021 at 2:26:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ConversationKit.framework/ConversationKit
*/


#import <ConversationKit/ConversationKit-Structs.h>
@interface CNKFaceTimeConstraintsController : NSObject {

	 participantListState;
	 localParticipantState;
	 inCallControlsState;
	 floatingControlsState;
	 viewStateEffects;
	 viewControllerLayout;
	 inCallControlsFramesCache;

}

@property (assign,nonatomic) long long localParticipantState; 
@property (assign,nonatomic) long long inCallControlsState; 
-(id)init;
-(long long)localParticipantState;
-(void)setLocalParticipantState:(long long)arg1 ;
-(long long)inCallControlsState;
-(void)setInCallControlsState:(long long)arg1 ;
-(id)initWithContainingView:(id)arg1 controlsViewController:(id)arg2 inCallControlsState:(long long)arg3 deviceOrientation:(long long)arg4 ;
-(CGRect)inCallControlsViewFrameFor:(id)arg1 state:(long long)arg2 ;
-(void)updateFor:(CGRect)arg1 deviceOrientation:(long long)arg2 ;
-(void)removeEffectsConstraints;
-(void)updateConstraintsWith:(id)arg1 controlsViewController:(id)arg2 effectsView:(id)arg3 effectsBrowserViewController:(id)arg4 ;
@end

