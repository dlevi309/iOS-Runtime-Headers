/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBSwitcherModifierEvent.h>

@class NSUUID;

@interface SBTetheredInsertionSwitcherModifierEvent : SBSwitcherModifierEvent {

	NSUUID* _tetheredInsertionID;
	unsigned long long _phase;

}

@property (nonatomic,readonly) NSUUID * tetheredInsertionID;              //@synthesize tetheredInsertionID=_tetheredInsertionID - In the implementation block
@property (nonatomic,readonly) unsigned long long phase;                  //@synthesize phase=_phase - In the implementation block
-(long long)type;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(unsigned long long)phase;
-(id)initWithTetheredInsertionID:(id)arg1 phase:(unsigned long long)arg2 ;
-(NSUUID *)tetheredInsertionID;
@end

