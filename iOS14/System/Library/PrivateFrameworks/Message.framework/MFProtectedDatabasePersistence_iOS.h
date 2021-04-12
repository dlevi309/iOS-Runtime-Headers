/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Message.framework/Message
*/

#import <EmailDaemon/EDProtectedDatabasePersistence.h>

@interface MFProtectedDatabasePersistence_iOS : EDProtectedDatabasePersistence
+(id)protectedDatabaseName;
+(id)journalDatabaseName;
-(BOOL)supportsJournaling;
-(BOOL)protectedDataAvailable;
-(void)finishJournalReconciliation:(unsigned long long)arg1 ;
-(void)addAdditionalCriteriaToCleanupActivity:(id)arg1 ;
@end

