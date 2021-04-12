/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBDataPlanAlertItem.h>
#import <libobjc.A.dylib/SBDataPlanAlertActions.h>

@class NSURL;

@interface SBDataPlanAccountAlertItem : SBDataPlanAlertItem <SBDataPlanAlertActions> {

	NSURL* _accountURL;

}

@property (nonatomic,copy) NSURL * accountURL;              //@synthesize accountURL=_accountURL - In the implementation block
+(id)laterButtonTitle;
+(id)nowButtonTitle;
-(NSURL *)accountURL;
-(id)initWithAccountURL:(id)arg1 ;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(void)setAccountURL:(NSURL *)arg1 ;
-(void)notNow;
-(void)takeAction;
@end

