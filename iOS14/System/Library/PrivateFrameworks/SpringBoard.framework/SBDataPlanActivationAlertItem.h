/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBDataPlanAccountAlertItem.h>

@interface SBDataPlanActivationAlertItem : SBDataPlanAccountAlertItem {

	BOOL _newAccount;
	BOOL _promptToDisable;

}

@property (assign,getter=isNewAccount,nonatomic) BOOL newAccount;              //@synthesize newAccount=_newAccount - In the implementation block
-(void)notNow;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(id)initWithAccountURL:(id)arg1 newAccount:(BOOL)arg2 promptToDisable:(BOOL)arg3 ;
-(void)setNewAccount:(BOOL)arg1 ;
-(BOOL)isNewAccount;
@end

