/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/


@class NSString, ACAccountStore, ACAccount;

@interface AAQuotaDepletionAlert : NSObject {

	NSString* _dataclass;
	ACAccountStore* _accountStore;
	ACAccount* _primaryAccount;

}
+(BOOL)_isDisabledDataclass:(id)arg1 ;
-(id)init;
-(id)_deviceSpecificLocalizedString:(id)arg1 ;
-(id)_primaryAccount;
-(void)showWithHandler:(/*^block*/id)arg1 ;
-(id)initForDataclass:(id)arg1 ;
-(BOOL)showIfNecessaryWithHandler:(/*^block*/id)arg1 ;
@end

