/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoardUI/SBAlertItem.h>

@interface SBActivationFailedAlertItem : SBAlertItem {

	BOOL _showRetryButton;
	BOOL _showSupportNumber;
	long long _slot;

}
-(void)performUnlockAction;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(id)initWithFailureCount:(int)arg1 slot:(long long)arg2 ;
-(BOOL)suppressForKeynote;
@end

