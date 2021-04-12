/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <libobjc.A.dylib/EFSQLUpdateStatementValue.h>

@protocol EFSQLExpressable;
@class NSMutableDictionary, NSString;

@interface EFSQLUpdateStatement : NSObject <EFSQLUpdateStatementValue> {

	id<EFSQLExpressable> _whereClause;
	NSMutableDictionary* _bindables;
	NSMutableDictionary* _expressables;
	NSString* _table;
	unsigned long long _conflictResolution;

}

@property (nonatomic,retain) NSMutableDictionary * bindables;                      //@synthesize bindables=_bindables - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * expressables;                   //@synthesize expressables=_expressables - In the implementation block
@property (nonatomic,retain) NSString * table;                                     //@synthesize table=_table - In the implementation block
@property (nonatomic,readonly) unsigned long long conflictResolution;              //@synthesize conflictResolution=_conflictResolution - In the implementation block
@property (nonatomic,copy,readonly) NSString * queryString; 
@property (nonatomic,retain) id<EFSQLExpressable> whereClause;                     //@synthesize whereClause=_whereClause - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(NSString *)table;
-(void)setTable:(NSString *)arg1 ;
-(id)initWithTable:(id)arg1 ;
-(NSString *)queryString;
-(void)setWhereClause:(id<EFSQLExpressable>)arg1 ;
-(id<EFSQLExpressable>)whereClause;
-(NSMutableDictionary *)bindables;
-(void)setBindables:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)expressables;
-(void)setExpressables:(NSMutableDictionary *)arg1 ;
-(id)initWithTable:(id)arg1 conflictResolution:(unsigned long long)arg2 ;
-(unsigned long long)conflictResolution;
-(void)enumerateBindingNamesAndValuesUsingBlock:(/*^block*/id)arg1 ;
-(id)_queryStringForUpsert:(BOOL)arg1 ;
-(id)queryStringForUpsert;
@end

