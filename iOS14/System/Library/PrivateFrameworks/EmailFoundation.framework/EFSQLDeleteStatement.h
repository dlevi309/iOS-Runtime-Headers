/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/


@protocol EFSQLValueExpressable;
@class NSString, NSMutableArray;

@interface EFSQLDeleteStatement : NSObject {

	unsigned long long _limit;
	NSString* _table;
	id<EFSQLValueExpressable> _whereClause;
	NSMutableArray* _orderExpressions;

}

@property (assign,nonatomic) unsigned long long limit;                   //@synthesize limit=_limit - In the implementation block
@property (nonatomic,copy,readonly) NSString * queryString; 
-(void)setLimit:(unsigned long long)arg1 ;
-(unsigned long long)limit;
-(id)initWithTable:(id)arg1 where:(id)arg2 ;
-(NSString *)queryString;
-(id)initWithTable:(id)arg1 ;
-(void)orderByColumn:(id)arg1 ascending:(BOOL)arg2 ;
-(void)orderBy:(id)arg1 ascending:(BOOL)arg2 ;
@end

