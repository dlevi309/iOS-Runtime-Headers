/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSHashTable *)accounts;
-(void)setAccounts:(NSHashTable *)arg1 ;
-(void)unmonitorAccount:(id)arg1 ;
-(void)monitorAccount:(id)arg1 ;
-(void)setAccountsQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)accountsQueue;
-(id)monitoredAccounts;
@end

