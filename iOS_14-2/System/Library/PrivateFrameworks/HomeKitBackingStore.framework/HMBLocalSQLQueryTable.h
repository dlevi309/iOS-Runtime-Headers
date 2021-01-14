/*
* Generated on Thursday, January 14, 2021 at 2:25:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitBackingStore.framework/HomeKitBackingStore
*/

#import <HMFoundation/HMFObject.h>

@class HMBLocalSQLContext, NSString, NSArray, HMBSQLQueryStatement, HMBSQLStatement, NSHashTable;

@interface HMBLocalSQLQueryTable : HMFObject {

	BOOL _finalized;
	HMBLocalSQLContext* _context;
	Class _modelClass;
	NSString* _modelType;
	NSArray* _columnFields;
	NSArray* _columnNames;
	HMBSQLQueryStatement* _selectAll;
	NSString* _dropTableSQL;
	HMBSQLStatement* _deleteAll;
	HMBSQLStatement* _updateRecord;
	HMBSQLStatement* _deleteRecord;
	NSHashTable* _userQueries;

}

@property (nonatomic,readonly) HMBSQLStatement * deleteAll;                      //@synthesize deleteAll=_deleteAll - In the implementation block
@property (nonatomic,readonly) HMBSQLStatement * updateRecord;                   //@synthesize updateRecord=_updateRecord - In the implementation block
@property (nonatomic,readonly) HMBSQLStatement * deleteRecord;                   //@synthesize deleteRecord=_deleteRecord - In the implementation block
@property (nonatomic,readonly) NSHashTable * userQueries;                        //@synthesize userQueries=_userQueries - In the implementation block
@property (assign,nonatomic) BOOL finalized;                                     //@synthesize finalized=_finalized - In the implementation block
@property (nonatomic,__weak,readonly) HMBLocalSQLContext * context;              //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) Class modelClass;                                 //@synthesize modelClass=_modelClass - In the implementation block
@property (nonatomic,readonly) NSString * modelType;                             //@synthesize modelType=_modelType - In the implementation block
@property (nonatomic,readonly) NSArray * columnFields;                           //@synthesize columnFields=_columnFields - In the implementation block
@property (nonatomic,readonly) NSArray * columnNames;                            //@synthesize columnNames=_columnNames - In the implementation block
@property (nonatomic,readonly) HMBSQLQueryStatement * selectAll;                 //@synthesize selectAll=_selectAll - In the implementation block
@property (nonatomic,readonly) NSString * dropTableSQL;                          //@synthesize dropTableSQL=_dropTableSQL - In the implementation block
-(NSString *)modelType;
-(HMBSQLQueryStatement *)selectAll;
-(NSArray *)columnNames;
-(void)finalize;
-(NSHashTable *)userQueries;
-(NSString *)dropTableSQL;
-(unsigned long long)_updateQueryForZoneRow:(unsigned long long)arg1 recordRow:(unsigned long long)arg2 encodedColumns:(id)arg3 error:(id*)arg4 ;
-(id)buildQueriableFieldsForModel:(id)arg1 ;
-(HMBLocalSQLContext *)context;
-(BOOL)finalized;
-(id)initWithContext:(id)arg1 queryModel:(Class)arg2 prepareOnly:(BOOL)arg3 ;
-(unsigned long long)_deleteQueryForRecordRow:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)setFinalized:(BOOL)arg1 ;
-(HMBSQLStatement *)deleteAll;
-(Class)modelClass;
-(NSArray *)columnFields;
-(HMBSQLStatement *)updateRecord;
-(id)performQueryOn:(id)arg1 properties:(id)arg2 filter:(/*^block*/id)arg3 ;
-(HMBSQLStatement *)deleteRecord;
-(unsigned long long)_deleteAllQueriesForZoneRow:(unsigned long long)arg1 error:(id*)arg2 ;
-(void)dealloc;
@end

