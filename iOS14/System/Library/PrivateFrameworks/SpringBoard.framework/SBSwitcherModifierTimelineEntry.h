/*
* Generated on Thursday, January 14, 2021 at 2:25:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@class SBSwitcherModifierEventSnapshot, SBSwitcherModifierStackSnapshot, SBSwitcherModifierEventResponseSnapshot;

@interface SBSwitcherModifierTimelineEntry : NSObject {

	SBSwitcherModifierEventSnapshot* _eventSnapshot;
	SBSwitcherModifierStackSnapshot* _postEventStackSnapshot;
	SBSwitcherModifierEventResponseSnapshot* _responseSnapshot;

}

@property (nonatomic,retain) SBSwitcherModifierEventSnapshot * eventSnapshot;                         //@synthesize eventSnapshot=_eventSnapshot - In the implementation block
@property (nonatomic,retain) SBSwitcherModifierStackSnapshot * postEventStackSnapshot;                //@synthesize postEventStackSnapshot=_postEventStackSnapshot - In the implementation block
@property (nonatomic,retain) SBSwitcherModifierEventResponseSnapshot * responseSnapshot;              //@synthesize responseSnapshot=_responseSnapshot - In the implementation block
-(SBSwitcherModifierEventSnapshot *)eventSnapshot;
-(SBSwitcherModifierEventResponseSnapshot *)responseSnapshot;
-(SBSwitcherModifierStackSnapshot *)postEventStackSnapshot;
-(void)setEventSnapshot:(SBSwitcherModifierEventSnapshot *)arg1 ;
-(void)setPostEventStackSnapshot:(SBSwitcherModifierStackSnapshot *)arg1 ;
-(void)setResponseSnapshot:(SBSwitcherModifierEventResponseSnapshot *)arg1 ;
@end

