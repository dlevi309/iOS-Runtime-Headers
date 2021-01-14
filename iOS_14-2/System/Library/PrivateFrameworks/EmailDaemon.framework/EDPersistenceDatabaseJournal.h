/*
* Generated on Thursday, January 14, 2021 at 2:25:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)checkIn;
-(unsigned long long)number;
-(NSString *)path;
-(id)description;
-(EDPersistenceDatabaseJournalManager *)journalManager;
-(void)checkOut;
-(unsigned long long)referenceCount;
-(id)initWithJournalManager:(id)arg1 number:(unsigned long long)arg2 ;
@end

