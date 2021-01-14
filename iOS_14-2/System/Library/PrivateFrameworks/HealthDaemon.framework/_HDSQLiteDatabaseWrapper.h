/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol OS_dispatch_group;
@class HDSQLiteDatabase, NSObject, NSString;

@interface _HDSQLiteDatabaseWrapper : NSObject {

	HDSQLiteDatabase* _database;
	NSObject*<OS_dispatch_group> _flushGroup;
	unsigned long long _generation;
	unsigned long long _threadID;
	unsigned long long _options;

}

@property (nonatomic,readonly) HDSQLiteDatabase * database;                          //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_group> flushGroup;              //@synthesize flushGroup=_flushGroup - In the implementation block
@property (nonatomic,readonly) unsigned long long generation;                        //@synthesize generation=_generation - In the implementation block
@property (nonatomic,readonly) unsigned long long threadID;                          //@synthesize threadID=_threadID - In the implementation block
@property (assign,nonatomic) unsigned long long options;                             //@synthesize options=_options - In the implementation block
@property (nonatomic,copy,readonly) NSString * typeString; 
-(NSString *)typeString;
-(unsigned long long)generation;
-(id)initWithDatabase:(id)arg1 flushGroup:(id)arg2 generation:(unsigned long long)arg3 ;
-(unsigned long long)options;
-(void)setOptions:(unsigned long long)arg1 ;
-(unsigned long long)threadID;
-(NSObject*<OS_dispatch_group>)flushGroup;
-(void)captureThreadInfo;
-(HDSQLiteDatabase *)database;
@end

