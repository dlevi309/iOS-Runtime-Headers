/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBSwitcherModifierEvent.h>

@class SBAppLayout;

@interface SBSwipeToKillSwitcherModifierEvent : SBSwitcherModifierEvent {

	SBAppLayout* _appLayout;
	double _progress;

}

@property (nonatomic,readonly) SBAppLayout * appLayout;              //@synthesize appLayout=_appLayout - In the implementation block
@property (nonatomic,readonly) double progress;                      //@synthesize progress=_progress - In the implementation block
-(SBAppLayout *)appLayout;
-(double)progress;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithAppLayout:(id)arg1 progress:(double)arg2 ;
@end

