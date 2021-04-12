/*
* Generated on Thursday, January 14, 2021 at 2:25:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoardUI/SBAlertItem.h>

@class SBApplication;

@interface SBVPPAppRequiresHealingAlertItem : SBAlertItem {

	SBApplication* _application;

}
-(id)initWithApplication:(id)arg1 ;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(BOOL)dismissOnLock;
-(BOOL)shouldShowInLockScreen;
@end

