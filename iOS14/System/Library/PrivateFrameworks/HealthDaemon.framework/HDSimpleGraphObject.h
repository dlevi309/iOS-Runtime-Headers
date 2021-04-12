/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class HDSimpleGraphDatabase;

@interface HDSimpleGraphObject : NSObject {

	HDSimpleGraphDatabase* _database;
	long long _rowID;

}

@property (nonatomic,__weak,readonly) HDSimpleGraphDatabase * database;              //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) long long rowID;                                      //@synthesize rowID=_rowID - In the implementation block
-(long long)rowID;
-(id)init;
-(unsigned long long)hash;
-(HDSimpleGraphDatabase *)database;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDatabase:(id)arg1 rowID:(long long)arg2 ;
@end

