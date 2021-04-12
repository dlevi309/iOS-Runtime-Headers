/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/


@class NSDictionary, NSArray;

@interface EFSQLSchema : NSObject {

	NSDictionary* _tablesByName;

}

@property (nonatomic,copy,readonly) NSArray * tables; 
-(id)description;
-(NSArray *)tables;
-(id)initWithTables:(id)arg1 ;
-(id)definitionWithDatabaseName:(id)arg1 includeIndexes:(BOOL)arg2 ;
-(id)definitionWithDatabaseName:(id)arg1 ;
-(id)indexDefinitionsWithDatabaseName:(id)arg1 ;
-(id)tableForName:(id)arg1 ;
@end

