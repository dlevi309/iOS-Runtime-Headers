/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


#import <EmailDaemon/EmailDaemon-Structs.h>
@class EDPersistenceDatabaseJournalManager, NSString;

@interface EDPersistenceDatabaseJournal : NSObject {

	os_unfair_lock_s _referenceCountLock;
	unsigned long long _referenceCount;
	unsigned long long _number;
	EDPersistenceDatabaseJournalManager* _journalManager;

}

@property (nonatomic,readonly) EDPersistenceDatabaseJournalManager * journalManager;              //@synthesize journalManager=_journalManager - In the implementation block
@property (readonly) unsigned long long referenceCount; 
@property (nonatomic,copy,readonly) NSString * path; 
@property (nonatomic,readonly) unsigned long long number;                                         //@synthesize number=_number - In the implementation block
-(id)description;
-(void)checkIn;
-(NSString *)path;
-(unsigned long long)number;
-(EDPersistenceDatabaseJournalManager *)journalManager;
-(unsigned long long)referenceCount;
-(void)checkOut;
-(id)initWithJournalManager:(id)arg1 number:(unsigned long long)arg2 ;
@end

