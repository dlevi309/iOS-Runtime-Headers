/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
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
-(SBAppLayout *)appLayout;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(long long)reason;
-(long long)type;
-(unsigned long long)phase;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithAppLayout:(id)arg1 reason:(long long)arg2 phase:(unsigned long long)arg3 ;
@end

