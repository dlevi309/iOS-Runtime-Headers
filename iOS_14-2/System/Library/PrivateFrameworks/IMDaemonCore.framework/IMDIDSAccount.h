/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/

#import <IMDaemonCore/IMDAccount.h>

@class IDSAccount;

@interface IMDIDSAccount : IMDAccount {

	IDSAccount* _idsAccount;

}

@property (nonatomic,retain,readonly) IDSAccount * idsAccount;              //@synthesize idsAccount=_idsAccount - In the implementation block
-(IDSAccount *)idsAccount;
-(id)accountDefaults;
-(id)description;
-(BOOL)canMakeDowngradeRoutingChecks;
-(void)writeAccountDefaults:(id)arg1 ;
-(id)initWithAccountID:(id)arg1 defaults:(id)arg2 service:(id)arg3 idsAccount:(id)arg4 ;
-(BOOL)multiplePhoneNumbersTiedToAccount;
-(void)dealloc;
@end

