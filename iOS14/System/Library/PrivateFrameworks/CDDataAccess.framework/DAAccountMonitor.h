/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CDDataAccess.framework/CDDataAccess
*/


@protocol OS_dispatch_queue;
@class NSHashTable, NSObject;

@interface DAAccountMonitor : NSObject {

	NSHashTable* _accounts;
	NSObject*<OS_dispatch_queue> _accountsQueue;

}

@property (nonatomic,retain) NSHashTable * accounts;                                  //@synthesize accounts=_accounts - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> accountsQueue;              //@synthesize accountsQueue=_accountsQueue - In the implementation block
+(id)sharedMonitor;
-(void)setAccounts:(NSHashTable *)arg1 ;
-(NSHashTable *)accounts;
-(id)init;
-(void)unmonitorAccount:(id)arg1 ;
-(void)monitorAccount:(id)arg1 ;
-(id)monitoredAccounts;
-(void)setAccountsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)accountsQueue;
@end

