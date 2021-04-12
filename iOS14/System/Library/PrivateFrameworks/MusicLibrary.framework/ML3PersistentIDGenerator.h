/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/


@class ML3DatabaseConnection, NSString;

@interface ML3PersistentIDGenerator : NSObject {

	ML3DatabaseConnection* _connection;
	NSString* _tableName;
	NSString* _validateStartingPersistentIdSQL;
	NSString* _nextUsedPersistentIdSQL;
	long long _currentPersistentID;
	long long _nextUsedPersistentID;

}
-(id)initWithDatabaseConnection:(id)arg1 tableName:(id)arg2 ;
-(long long)nextPersistentID;
-(void)_calculateNewRun;
@end

