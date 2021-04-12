/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/

#import <IMDaemonCore/IMDAccount.h>

@class IDSAccount;

@interface IMDIDSAccount : IMDAccount {

	IDSAccount* _idsAccount;

}

@property (nonatomic,retain,readonly) IDSAccount * idsAccount;              //@synthesize idsAccount=_idsAccount - In the implementation block
-(void)dealloc;
-(id)description;
-(void)writeAccountDefaults:(id)arg1 ;
-(id)accountDefaults;
-(BOOL)canMakeDowngradeRoutingChecks;
-(IDSAccount *)idsAccount;
-(BOOL)multiplePhoneNumbersTiedToAccount;
-(id)initWithAccountID:(id)arg1 defaults:(id)arg2 service:(id)arg3 idsAccount:(id)arg4 ;
@end

