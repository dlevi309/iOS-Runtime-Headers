/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/

#import <libobjc.A.dylib/EFSQLUpdateStatementValue.h>

@protocol EFSQLValueExpressable;
@class NSMutableDictionary, NSString;

@interface EFSQLUpdateStatement : NSObject <EFSQLUpdateStatementValue> {

	id<EFSQLValueExpressable> _whereClause;
	NSMutableDictionary* _bindables;
	NSMutableDictionary* _expressables;
	NSString* _table;
	unsigned long long _conflictResolution;

}

@property (nonatomic,copy,readonly) NSString * queryString; 
@property (nonatomic,retain) id<EFSQLValueExpressable> whereClause;              //@synthesize whereClause=_whereClause - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(NSString *)queryString;
-(void)setWhereClause:(id<EFSQLValueExpressable>)arg1 ;
-(id)initWithTable:(id)arg1 ;
-(id)initWithTable:(id)arg1 conflictResolution:(unsigned long long)arg2 ;
-(void)enumerateBindingNamesAndValuesUsingBlock:(/*^block*/id)arg1 ;
-(id<EFSQLValueExpressable>)whereClause;
@end

