/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/AMSSQLiteEntity.h>

@protocol AMSSQLiteEntity <NSObject>
@required
+(id)joinClauseForProperty:(id)arg1;
+(id)databaseTable;
+(id)foreignDatabaseTablesToDelete;
+(id)foreignKeyColumnForTable:(id)arg1;
+(id)disambiguatedSQLForProperty:(id)arg1;
+(id)foreignDatabaseTableForProperty:(id)arg1;
+(id)foreignDatabaseColumnForProperty:(id)arg1;
-(id)objectForKeyedSubscript:(id)arg1;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
-(id)valueForProperty:(id)arg1;
-(BOOL)setValue:(id)arg1 forProperty:(id)arg2;
-(BOOL)setValuesWithDictionary:(id)arg1;
-(id)getValuesForProperties:(id)arg1;
-(BOOL)deleteFromDatabase;

@end


@class AMSSQLiteConnection, NSString;

@interface AMSSQLiteEntity : NSObject <AMSSQLiteEntity> {

	AMSSQLiteConnection* _connection;
	long long _persistentID;

}

@property (nonatomic,readonly) AMSSQLiteConnection * connection;              //@synthesize connection=_connection - In the implementation block
@property (nonatomic,readonly) long long persistentID;                        //@synthesize persistentID=_persistentID - In the implementation block
@property (nonatomic,readonly) BOOL existsInDatabase; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_insertValues:(id)arg1 intoTable:(id)arg2 withPersistentID:(long long)arg3 onConnection:(id)arg4 ;
+(id)joinClauseForProperty:(id)arg1 ;
+(id)databaseTable;
+(id)foreignDatabaseTablesToDelete;
+(id)foreignKeyColumnForTable:(id)arg1 ;
+(id)disambiguatedSQLForProperty:(id)arg1 ;
+(id)foreignDatabaseTableForProperty:(id)arg1 ;
+(id)foreignDatabaseColumnForProperty:(id)arg1 ;
+(Class)memoryEntityClass;
+(id)queryOnConnection:(id)arg1 predicate:(id)arg2 ;
+(id)_aggregateValueForProperty:(id)arg1 function:(id)arg2 predicate:(id)arg3 onConnection:(id)arg4 ;
+(id)queryOnConnection:(id)arg1 predicate:(id)arg2 orderingProperties:(id)arg3 ;
+(id)anyOnConnection:(id)arg1 predicate:(id)arg2 ;
+(id)countForProperty:(id)arg1 predicate:(id)arg2 onConnection:(id)arg3 ;
+(id)maxValueForProperty:(id)arg1 predicate:(id)arg2 onConnection:(id)arg3 ;
+(id)minValueForProperty:(id)arg1 predicate:(id)arg2 onConnection:(id)arg3 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(AMSSQLiteConnection *)connection;
-(long long)persistentID;
-(id)valueForProperty:(id)arg1 ;
-(BOOL)setValue:(id)arg1 forProperty:(id)arg2 ;
-(id)_copyTableClusteredValuesWithValues:(id)arg1 ;
-(id)initWithPersistentID:(long long)arg1 onConnection:(id)arg2 ;
-(BOOL)_deleteRowFromTable:(id)arg1 usingColumn:(id)arg2 ;
-(BOOL)setValuesWithDictionary:(id)arg1 ;
-(id)getValuesForProperties:(id)arg1 ;
-(BOOL)deleteFromDatabase;
-(id)initWithPropertyValues:(id)arg1 onConnection:(id)arg2 ;
-(BOOL)existsInDatabase;
@end

