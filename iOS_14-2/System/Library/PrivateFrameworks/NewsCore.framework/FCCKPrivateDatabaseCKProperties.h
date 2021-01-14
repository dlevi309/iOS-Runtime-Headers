/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class CKDatabase, NSArray;

@interface FCCKPrivateDatabaseCKProperties : NSObject {

	CKDatabase* _database;
	CKDatabase* _databaseWithZoneWidePCS;
	CKDatabase* _secureDatabase;
	NSArray* _containers;

}

@property (nonatomic,readonly) CKDatabase * database;                             //@synthesize database=_database - In the implementation block
@property (nonatomic,readonly) CKDatabase * databaseWithZoneWidePCS;              //@synthesize databaseWithZoneWidePCS=_databaseWithZoneWidePCS - In the implementation block
@property (nonatomic,readonly) CKDatabase * secureDatabase;                       //@synthesize secureDatabase=_secureDatabase - In the implementation block
@property (nonatomic,retain) NSArray * containers;                                //@synthesize containers=_containers - In the implementation block
-(NSArray *)containers;
-(CKDatabase *)secureDatabase;
-(void)setContainers:(NSArray *)arg1 ;
-(CKDatabase *)database;
-(CKDatabase *)databaseWithZoneWidePCS;
-(id)initWithContainers:(id)arg1 database:(id)arg2 databaseWithZoneWidePCS:(id)arg3 secureDatabase:(id)arg4 ;
@end

