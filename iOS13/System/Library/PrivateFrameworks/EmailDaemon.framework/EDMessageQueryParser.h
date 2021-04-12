/*
* Generated on Monday, March 1, 2021 at 2:33:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@class EDSearchableIndex, EFSQLObjectPropertyMapper, EFSearchableIndexObjectPropertyMapper, EDMessageQueryTransformer;

@interface EDMessageQueryParser : NSObject {

	EDSearchableIndex* _searchableIndex;
	EFSQLObjectPropertyMapper* _sqlPropertyMapper;
	EFSearchableIndexObjectPropertyMapper* _searchableIndexMapper;
	EDMessageQueryTransformer* _transformer;

}

@property (nonatomic,readonly) EDMessageQueryTransformer * transformer;                                    //@synthesize transformer=_transformer - In the implementation block
@property (nonatomic,readonly) EDSearchableIndex * searchableIndex;                                        //@synthesize searchableIndex=_searchableIndex - In the implementation block
@property (nonatomic,readonly) EFSQLObjectPropertyMapper * sqlPropertyMapper;                              //@synthesize sqlPropertyMapper=_sqlPropertyMapper - In the implementation block
@property (nonatomic,readonly) EFSearchableIndexObjectPropertyMapper * searchableIndexMapper;              //@synthesize searchableIndexMapper=_searchableIndexMapper - In the implementation block
+(id)performSearchableIndexQueryPredicate:(id)arg1 propertyMapper:(id)arg2 searchableIndex:(id)arg3 ;
-(EDMessageQueryTransformer *)transformer;
-(EDSearchableIndex *)searchableIndex;
-(id)sqlQueryForQuery:(id)arg1 ;
-(id)initWithSchema:(id)arg1 protectedSchema:(id)arg2 searchableIndex:(id)arg3 accountsProvider:(id)arg4 vipManager:(id)arg5 messagePersistence:(id)arg6 mailboxPersistence:(id)arg7 ;
-(EFSearchableIndexObjectPropertyMapper *)searchableIndexMapper;
-(id)sqlQueryForQuery:(id)arg1 predicate:(id)arg2 ;
-(EFSQLObjectPropertyMapper *)sqlPropertyMapper;
@end

