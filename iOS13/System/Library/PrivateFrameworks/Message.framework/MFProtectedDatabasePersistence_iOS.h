/*
* Generated on Monday, March 1, 2021 at 2:31:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <EmailDaemon/EDProtectedDatabasePersistence.h>

@interface MFProtectedDatabasePersistence_iOS : EDProtectedDatabasePersistence
+(id)protectedDatabaseName;
+(id)journalDatabaseName;
-(BOOL)protectedDataAvailable;
-(void)finishJournalReconciliation:(unsigned long long)arg1 ;
-(void)addAdditionalCriteriaToCleanupActivity:(id)arg1 ;
-(BOOL)supportsJournaling;
@end

