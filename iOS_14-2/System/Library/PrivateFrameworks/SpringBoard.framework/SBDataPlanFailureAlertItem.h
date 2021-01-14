/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SBDataPlanAccountAlertItem.h>

@class NSString;

@interface SBDataPlanFailureAlertItem : SBDataPlanAccountAlertItem {

	NSString* _carrierName;
	BOOL _newAccount;

}

@property (nonatomic,copy) NSString * carrierName;                             //@synthesize carrierName=_carrierName - In the implementation block
@property (assign,getter=isNewAccount,nonatomic) BOOL newAccount;              //@synthesize newAccount=_newAccount - In the implementation block
+(id)laterButtonTitle;
+(id)nowButtonTitle;
-(NSString *)carrierName;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(void)setCarrierName:(NSString *)arg1 ;
-(id)initWithAccountURL:(id)arg1 carrierName:(id)arg2 newAccount:(BOOL)arg3 ;
-(void)setNewAccount:(BOOL)arg1 ;
-(BOOL)isNewAccount;
@end

