/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBIdleTimerBase.h>

@interface SBDisabledIdleTimer : SBIdleTimerBase {

	BOOL _activated;

}
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)reset;
-(BOOL)isDisabled;
-(void)setActivated:(BOOL)arg1 ;
-(BOOL)isActivated;
@end

