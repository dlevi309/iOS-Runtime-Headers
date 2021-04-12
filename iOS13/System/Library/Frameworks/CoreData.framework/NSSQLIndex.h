/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSFetchIndexDescription, NSSQLEntity, NSMutableArray;

@interface NSSQLIndex : NSObject {

	NSFetchIndexDescription* _indexDescription;
	NSSQLEntity* _sqlEntity;
	NSMutableArray* _createStrings;
	NSMutableArray* _dropStrings;
	NSMutableArray* _updateStrings;

}

@property (nonatomic,retain,readonly) NSFetchIndexDescription * indexDescription;              //@synthesize indexDescription=_indexDescription - In the implementation block
@property (nonatomic,readonly) NSSQLEntity * sqlEntity;                                        //@synthesize sqlEntity=_sqlEntity - In the implementation block
@property (nonatomic,retain) NSMutableArray * createTableStatements;                           //@synthesize createStrings=_createStrings - In the implementation block
@property (nonatomic,retain) NSMutableArray * dropTableStatements;                             //@synthesize dropStrings=_dropStrings - In the implementation block
@property (nonatomic,retain) NSMutableArray * updateTableStatements;                           //@synthesize updateStrings=_updateStrings - In the implementation block
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(NSSQLEntity *)sqlEntity;
-(id)initForIndexDescription:(id)arg1 sqlEntity:(id)arg2 ;
-(NSFetchIndexDescription *)indexDescription;
-(void)setCreateTableStatements:(NSMutableArray *)arg1 ;
-(void)setDropTableStatements:(NSMutableArray *)arg1 ;
-(void)setUpdateTableStatements:(NSMutableArray *)arg1 ;
-(NSMutableArray *)createTableStatements;
-(NSMutableArray *)dropTableStatements;
-(NSMutableArray *)updateTableStatements;
-(id)generateStatementsForStore:(id)arg1 ;
-(id)dropStatementsForStore:(id)arg1 ;
-(id)bulkUpdateStatementsForStore:(id)arg1 ;
-(BOOL)isUnique;
@end

