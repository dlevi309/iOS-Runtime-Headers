/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

