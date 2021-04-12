/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailCore.framework/EmailCore
*/

#import <EmailCore/ECAccount.h>

@class NSString, NSDate;

@interface ECExchangeAccount : ECAccount

@property (nonatomic,copy) NSString * inboxMailboxName; 
@property (nonatomic,copy) NSString * journalMailboxName; 
@property (nonatomic,copy) NSDate * lastSyncDate; 
@property (nonatomic,copy) NSString * folderHierarchySyncState; 
+(id)standardPorts;
+(id)standardSSLPorts;
-(NSDate *)lastSyncDate;
-(void)setLastSyncDate:(NSDate *)arg1 ;
-(long long)defaultSecurePortNumber;
-(long long)defaultPortNumber;
-(NSString *)inboxMailboxName;
-(void)setInboxMailboxName:(NSString *)arg1 ;
-(NSString *)journalMailboxName;
-(void)setJournalMailboxName:(NSString *)arg1 ;
-(NSString *)folderHierarchySyncState;
-(void)setFolderHierarchySyncState:(NSString *)arg1 ;
@end

