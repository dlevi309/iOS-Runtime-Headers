/*
* Generated on Monday, March 1, 2021 at 2:32:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/


@protocol EFSQLExpressable;
@class NSString;

@interface EFSQLDeleteStatement : NSObject {

	NSString* _table;
	id<EFSQLExpressable> _whereClause;

}

@property (nonatomic,copy,readonly) NSString * table;                         //@synthesize table=_table - In the implementation block
@property (nonatomic,readonly) id<EFSQLExpressable> whereClause;              //@synthesize whereClause=_whereClause - In the implementation block
@property (nonatomic,copy,readonly) NSString * queryString; 
-(NSString *)table;
-(id)initWithTable:(id)arg1 ;
-(NSString *)queryString;
-(id)initWithTable:(id)arg1 where:(id)arg2 ;
-(id<EFSQLExpressable>)whereClause;
@end

