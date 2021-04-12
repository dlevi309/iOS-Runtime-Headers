/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class HDSimpleGraphDatabase;

@interface HDSimpleGraphObject : NSObject {

	HDSimpleGraphDatabase* _database;
	long long _rowID;

}

@property (assign,nonatomic,__weak) HDSimpleGraphDatabase * database;              //@synthesize database=_database - In the implementation block
@property (assign,nonatomic) long long rowID;                                      //@synthesize rowID=_rowID - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)setDatabase:(HDSimpleGraphDatabase *)arg1 ;
-(HDSimpleGraphDatabase *)database;
-(long long)rowID;
-(void)setRowID:(long long)arg1 ;
-(id)initWithDatabase:(id)arg1 rowID:(long long)arg2 ;
@end

