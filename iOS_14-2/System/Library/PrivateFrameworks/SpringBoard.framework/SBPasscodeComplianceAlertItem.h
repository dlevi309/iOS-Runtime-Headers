/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoardUI/SBAlertItem.h>

@class NSString;

@interface SBPasscodeComplianceAlertItem : SBAlertItem {

	NSString* _title;
	NSString* _message;
	NSString* _continueButtonTitle;
	NSString* _cancelButtonTitle;

}
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(BOOL)shouldShowInLockScreen;
-(id)initWithTitle:(id)arg1 message:(id)arg2 continueButtonTitle:(id)arg3 cancelButtonTitle:(id)arg4 ;
@end

