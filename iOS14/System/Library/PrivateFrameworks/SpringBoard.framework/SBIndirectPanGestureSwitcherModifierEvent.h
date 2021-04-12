/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBGestureSwitcherModifierEvent.h>

@interface SBIndirectPanGestureSwitcherModifierEvent : SBGestureSwitcherModifierEvent {

	unsigned long long _indirectPanEndReason;

}

@property (assign,nonatomic) unsigned long long indirectPanEndReason;              //@synthesize indirectPanEndReason=_indirectPanEndReason - In the implementation block
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIndirectPanEndReason:(unsigned long long)arg1 ;
-(unsigned long long)indirectPanEndReason;
@end

