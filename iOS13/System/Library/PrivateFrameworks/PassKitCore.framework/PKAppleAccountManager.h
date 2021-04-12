/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@class ACAccountStore, PKAppleAccountInformation;

@interface PKAppleAccountManager : NSObject {

	ACAccountStore* _accountStore;

}

@property (nonatomic,readonly) PKAppleAccountInformation * appleAccountInformation; 
@property (nonatomic,readonly) ACAccountStore * accountStore; 
+(id)sharedInstance;
-(ACAccountStore *)accountStore;
-(id)_aidaAccount;
-(id)_primaryAppleAccount;
-(void)renewAppleAccountWithCompletionHandler:(/*^block*/id)arg1 ;
-(PKAppleAccountInformation *)appleAccountInformation;
@end

