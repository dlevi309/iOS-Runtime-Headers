/*
* Generated on Monday, March 1, 2021 at 2:35:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)setCarrierName:(NSString *)arg1 ;
-(void)configure:(BOOL)arg1 requirePasscodeForActions:(BOOL)arg2 ;
-(id)initWithAccountURL:(id)arg1 carrierName:(id)arg2 newAccount:(BOOL)arg3 ;
-(void)setNewAccount:(BOOL)arg1 ;
-(BOOL)isNewAccount;
@end

