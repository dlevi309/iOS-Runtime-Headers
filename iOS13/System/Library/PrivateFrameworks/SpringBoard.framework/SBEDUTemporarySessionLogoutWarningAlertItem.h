/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoardUI/SBAlertItem.h>

@interface SBEDUTemporarySessionLogoutWarningAlertItem : SBAlertItem {

	/*^block*/id _logoutActionHandler;

}

@property (nonatomic,copy) id logoutActionHandler;              //@synthesize logoutActionHandler=_logoutActionHandler - In the implementation block
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(BOOL)shouldShowInLockScreen;
-(BOOL)forcesModalAlertAppearance;
-(void)setLogoutActionHandler:(id)arg1 ;
-(id)logoutActionHandler;
@end

