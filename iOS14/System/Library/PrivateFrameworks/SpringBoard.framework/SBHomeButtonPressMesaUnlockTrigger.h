/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBMesaUnlockTrigger.h>

@interface SBHomeButtonPressMesaUnlockTrigger : SBMesaUnlockTrigger {

	BOOL _menuButtonDown;
	BOOL _primed;

}
-(void)menuButtonUp;
-(id)description;
-(void)significantUserInteractionOccurred;
-(void)menuButtonDown;
-(BOOL)bioUnlock;
-(void)screenOff;
-(id)succinctDescriptionBuilder;
@end

