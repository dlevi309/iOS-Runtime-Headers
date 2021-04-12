/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class HDSQLiteDatabase, NSString;

@interface _HDSQLiteDatabaseWrapper : NSObject {

	HDSQLiteDatabase* _database;
	unsigned long long _generation;
	unsigned long long _threadID;
	unsigned long long _options;

}

@property (nonatomic,readonly) HDSQLiteDatabase * database;                //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) unsigned long long generation;              //@synthesize generation=_generation - In the implementation block
@property (nonatomic,readonly) unsigned long long threadID;                //@synthesize threadID=_threadID - In the implementation block
@property (assign,nonatomic) unsigned long long options;                   //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) NSString * typeString; 
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
-(HDSQLiteDatabase *)database;
-(unsigned long long)generation;
-(NSString *)typeString;
-(unsigned long long)threadID;
-(id)initWithDatabase:(id)arg1 generation:(unsigned long long)arg2 ;
-(void)captureThreadInfo;
@end

