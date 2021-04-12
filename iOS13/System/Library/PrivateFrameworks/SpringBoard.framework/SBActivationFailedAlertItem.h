/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoardUI/SBAlertItem.h>

@interface SBActivationFailedAlertItem : SBAlertItem {

	BOOL _showRetryButton;
	BOOL _showSupportNumber;
	long long _slot;

}
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(void)performUnlockAction;
-(BOOL)suppressForKeynote;
-(id)initWithFailureCount:(int)arg1 slot:(long long)arg2 ;
@end

