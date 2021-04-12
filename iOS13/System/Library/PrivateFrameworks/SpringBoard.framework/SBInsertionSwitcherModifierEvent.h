/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSwitcherModifierEvent.h>

@class SBAppLayout;

@interface SBInsertionSwitcherModifierEvent : SBSwitcherModifierEvent {

	SBAppLayout* _appLayout;
	unsigned long long _index;
	unsigned long long _phase;

}

@property (nonatomic,readonly) SBAppLayout * appLayout;               //@synthesize appLayout=_appLayout - In the implementation block
@property (nonatomic,readonly) unsigned long long index;              //@synthesize index=_index - In the implementation block
@property (nonatomic,readonly) unsigned long long phase;              //@synthesize phase=_phase - In the implementation block
-(long long)type;
-(unsigned long long)index;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(unsigned long long)phase;
-(SBAppLayout *)appLayout;
-(id)initWithAppLayout:(id)arg1 intoIndex:(unsigned long long)arg2 phase:(unsigned long long)arg3 ;
@end

