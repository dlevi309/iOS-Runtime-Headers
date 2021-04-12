/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBMesaUnlockTrigger.h>

@interface SBHomeButtonPressMesaUnlockTrigger : SBMesaUnlockTrigger {

	BOOL _menuButtonDown;
	BOOL _primed;

}
-(id)description;
-(id)succinctDescriptionBuilder;
-(void)screenOff;
-(BOOL)bioUnlock;
-(void)significantUserInteractionOccurred;
-(void)menuButtonDown;
-(void)menuButtonUp;
@end

