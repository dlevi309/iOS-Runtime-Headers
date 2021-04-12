/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBDataPlanAccountAlertItem.h>

@interface SBDataPlanActivationAlertItem : SBDataPlanAccountAlertItem {

	BOOL _newAccount;
	BOOL _promptToDisable;

}

@property (assign,getter=isNewAccount,nonatomic) BOOL newAccount;              //@synthesize newAccount=_newAccount - In the implementation block
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(void)notNow;
-(id)initWithAccountURL:(id)arg1 newAccount:(BOOL)arg2 promptToDisable:(BOOL)arg3 ;
-(void)setNewAccount:(BOOL)arg1 ;
-(BOOL)isNewAccount;
@end

