/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/


@protocol EFSQLExpressable;
@class NSString;

@interface EFSQLIndexedColumnSchema : NSObject {

	id<EFSQLExpressable> _expression;
	unsigned long long _collation;
	unsigned long long _orderDirection;

}

@property (nonatomic,readonly) id<EFSQLExpressable> expression;                //@synthesize expression=_expression - In the implementation block
@property (nonatomic,readonly) unsigned long long collation;                   //@synthesize collation=_collation - In the implementation block
@property (nonatomic,readonly) unsigned long long orderDirection;              //@synthesize orderDirection=_orderDirection - In the implementation block
@property (nonatomic,copy,readonly) NSString * name; 
@property (nonatomic,copy,readonly) NSString * definition; 
-(unsigned long long)collation;
-(NSString *)name;
-(NSString *)definition;
-(id)initWithExpression:(id)arg1 ;
-(id)initWithExpression:(id)arg1 collation:(unsigned long long)arg2 orderDirection:(unsigned long long)arg3 ;
-(id)initWithExpression:(id)arg1 orderDirection:(unsigned long long)arg2 ;
-(unsigned long long)orderDirection;
-(id)initWithColumnName:(id)arg1 collation:(unsigned long long)arg2 orderDirection:(unsigned long long)arg3 ;
-(id<EFSQLExpressable>)expression;
-(id)initWithColumnName:(id)arg1 ;
-(id)initWithColumnName:(id)arg1 orderDirection:(unsigned long long)arg2 ;
@end

