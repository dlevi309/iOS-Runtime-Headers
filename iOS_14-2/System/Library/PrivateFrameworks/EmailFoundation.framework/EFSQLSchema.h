/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/


@class NSDictionary, NSArray;

@interface EFSQLSchema : NSObject {

	NSDictionary* _tablesByName;

}

@property (nonatomic,copy,readonly) NSArray * tables; 
-(NSArray *)tables;
-(id)description;
-(id)initWithTables:(id)arg1 ;
-(id)definitionWithDatabaseName:(id)arg1 includeIndexes:(BOOL)arg2 ;
-(id)definitionWithDatabaseName:(id)arg1 ;
-(id)indexDefinitionsWithDatabaseName:(id)arg1 ;
-(id)tableForName:(id)arg1 ;
@end

