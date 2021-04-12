/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)notNow;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(id)initWithAccountURL:(id)arg1 ;
-(void)setAccountURL:(NSURL *)arg1 ;
-(void)takeAction;
-(NSURL *)accountURL;
@end

