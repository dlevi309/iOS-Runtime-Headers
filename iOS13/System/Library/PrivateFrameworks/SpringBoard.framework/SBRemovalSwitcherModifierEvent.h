/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSwitcherModifierEvent.h>

@class SBAppLayout;

@interface SBRemovalSwitcherModifierEvent : SBSwitcherModifierEvent {

	SBAppLayout* _appLayout;
	long long _reason;
	unsigned long long _phase;

}

@property (nonatomic,readonly) SBAppLayout * appLayout;               //@synthesize appLayout=_appLayout - In the implementation block
@property (nonatomic,readonly) long long reason;                      //@synthesize reason=_reason - In the implementation block
@property (nonatomic,readonly) unsigned long long phase;              //@synthesize phase=_phase - In the implementation block
-(long long)type;
-(long long)reason;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(unsigned long long)phase;
-(SBAppLayout *)appLayout;
-(id)initWithAppLayout:(id)arg1 reason:(long long)arg2 phase:(unsigned long long)arg3 ;
@end

