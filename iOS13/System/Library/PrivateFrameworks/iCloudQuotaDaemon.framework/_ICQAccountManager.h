/*
* Generated on Monday, March 1, 2021 at 2:34:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaDaemon.framework/iCloudQuotaDaemon
*/


@class ACAccountStore;

@interface _ICQAccountManager : NSObject {

	ACAccountStore* _accountStore;

}

@property (readonly) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
-(id)init;
-(id)initWithAccountStore:(id)arg1 ;
-(ACAccountStore *)accountStore;
@end

