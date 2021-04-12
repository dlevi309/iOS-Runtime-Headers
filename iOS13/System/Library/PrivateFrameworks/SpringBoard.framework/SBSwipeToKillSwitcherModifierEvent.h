/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSwitcherModifierEvent.h>

@class SBAppLayout;

@interface SBSwipeToKillSwitcherModifierEvent : SBSwitcherModifierEvent {

	SBAppLayout* _appLayout;
	double _progress;

}

@property (nonatomic,readonly) SBAppLayout * appLayout;              //@synthesize appLayout=_appLayout - In the implementation block
@property (nonatomic,readonly) double progress;                      //@synthesize progress=_progress - In the implementation block
-(long long)type;
-(double)progress;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(SBAppLayout *)appLayout;
-(id)initWithAppLayout:(id)arg1 progress:(double)arg2 ;
@end

