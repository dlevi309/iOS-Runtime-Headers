/*
* Generated on Thursday, January 14, 2021 at 2:25:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/

#import <EmailCore/ECAccount.h>

@class NSDate, NSString;

@interface ECExchangeAccount : ECAccount {

	NSDate* _lastSyncDate;

}

@property (nonatomic,copy) NSString * inboxMailboxName; 
@property (nonatomic,copy) NSString * journalMailboxName; 
@property (nonatomic,copy) NSDate * lastSyncDate;                            //@synthesize lastSyncDate=_lastSyncDate - In the implementation block
@property (nonatomic,copy) NSString * folderHierarchySyncState; 
+(id)standardPorts;
+(id)standardSSLPorts;
-(void)setLastSyncDate:(NSDate *)arg1 ;
-(NSDate *)lastSyncDate;
-(long long)defaultPortNumber;
-(long long)defaultSecurePortNumber;
-(NSString *)inboxMailboxName;
-(void)setInboxMailboxName:(NSString *)arg1 ;
-(NSString *)journalMailboxName;
-(void)setJournalMailboxName:(NSString *)arg1 ;
-(NSString *)folderHierarchySyncState;
-(void)setFolderHierarchySyncState:(NSString *)arg1 ;
@end

