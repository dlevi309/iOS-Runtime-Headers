/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@class EDPersistenceDatabase, EDGmailLabelPersistence;

@interface EDServerMessagePersistenceFactory : NSObject {

	EDPersistenceDatabase* _database;
	EDGmailLabelPersistence* _gmailLabelPersistence;

}

@property (nonatomic,readonly) EDPersistenceDatabase * database;                             //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) EDGmailLabelPersistence * gmailLabelPersistence;              //@synthesize gmailLabelPersistence=_gmailLabelPersistence - In the implementation block
-(id)init;
-(EDPersistenceDatabase *)database;
-(EDGmailLabelPersistence *)gmailLabelPersistence;
-(id)initWithDatabase:(id)arg1 gmailLabelPersistence:(id)arg2 ;
-(id)serverMessagePersistenceForMailboxURL:(id)arg1 ;
@end

