/*
* Generated on Thursday, January 14, 2021 at 2:25:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBGestureSwitcherModifierEvent.h>

@interface SBForcePressGestureSwitcherModifierEvent : SBGestureSwitcherModifierEvent {

	double _forcePercent;

}

@property (assign,nonatomic) double forcePercent;              //@synthesize forcePercent=_forcePercent - In the implementation block
-(double)forcePercent;
-(long long)type;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setForcePercent:(double)arg1 ;
@end

