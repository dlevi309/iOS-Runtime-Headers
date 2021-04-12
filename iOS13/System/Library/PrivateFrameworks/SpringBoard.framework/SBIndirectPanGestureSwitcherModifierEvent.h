/*
* Generated on Monday, March 1, 2021 at 2:35:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBGestureSwitcherModifierEvent.h>

@interface SBIndirectPanGestureSwitcherModifierEvent : SBGestureSwitcherModifierEvent {

	unsigned long long _indirectPanEndReason;

}

@property (assign,nonatomic) unsigned long long indirectPanEndReason;              //@synthesize indirectPanEndReason=_indirectPanEndReason - In the implementation block
-(long long)type;
-(void)setIndirectPanEndReason:(unsigned long long)arg1 ;
-(unsigned long long)indirectPanEndReason;
@end

