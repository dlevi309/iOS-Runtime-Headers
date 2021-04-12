/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class SBSwitcherModifierEventSnapshot, SBSwitcherModifierStackSnapshot, SBSwitcherModifierActionSnapshot;

@interface SBSwitcherModifierTimelineEntry : NSObject {

	SBSwitcherModifierEventSnapshot* _eventSnapshot;
	SBSwitcherModifierStackSnapshot* _postEventStackSnapshot;
	SBSwitcherModifierActionSnapshot* _actionSnapshot;

}

@property (nonatomic,retain) SBSwitcherModifierEventSnapshot * eventSnapshot;                       //@synthesize eventSnapshot=_eventSnapshot - In the implementation block
@property (nonatomic,retain) SBSwitcherModifierStackSnapshot * postEventStackSnapshot;              //@synthesize postEventStackSnapshot=_postEventStackSnapshot - In the implementation block
@property (nonatomic,retain) SBSwitcherModifierActionSnapshot * actionSnapshot;                     //@synthesize actionSnapshot=_actionSnapshot - In the implementation block
-(SBSwitcherModifierEventSnapshot *)eventSnapshot;
-(SBSwitcherModifierActionSnapshot *)actionSnapshot;
-(SBSwitcherModifierStackSnapshot *)postEventStackSnapshot;
-(void)setEventSnapshot:(SBSwitcherModifierEventSnapshot *)arg1 ;
-(void)setPostEventStackSnapshot:(SBSwitcherModifierStackSnapshot *)arg1 ;
-(void)setActionSnapshot:(SBSwitcherModifierActionSnapshot *)arg1 ;
@end

