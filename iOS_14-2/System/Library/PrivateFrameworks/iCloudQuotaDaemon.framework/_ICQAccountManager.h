/*
* Generated on Thursday, January 14, 2021 at 2:24:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iCloudQuotaDaemon.framework/iCloudQuotaDaemon
*/


@class ACAccountStore;

@interface _ICQAccountManager : NSObject {

	ACAccountStore* _accountStore;

}

@property (readonly) ACAccountStore * accountStore;              //@synthesize accountStore=_accountStore - In the implementation block
-(id)init;
-(ACAccountStore *)accountStore;
-(id)initWithAccountStore:(id)arg1 ;
@end

