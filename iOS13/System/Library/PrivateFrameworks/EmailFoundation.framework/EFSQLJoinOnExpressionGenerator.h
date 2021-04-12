/*
* Generated on Monday, March 1, 2021 at 2:32:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailFoundation.framework/EmailFoundation
*/


@class NSString;

@interface EFSQLJoinOnExpressionGenerator : NSObject {

	NSString* _table;
	NSString* _tableAlias;
	NSString* _columns;

}

@property (nonatomic,readonly) NSString * table;                   //@synthesize table=_table - In the implementation block
@property (nonatomic,readonly) NSString * tableAlias;              //@synthesize tableAlias=_tableAlias - In the implementation block
@property (nonatomic,readonly) NSString * columns;                 //@synthesize columns=_columns - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)columns;
-(NSString *)table;
-(id)initWithTable:(id)arg1 tableAlias:(id)arg2 columns:(id)arg3 ;
-(BOOL)isEqualToJoinOnExpressonGenerator:(id)arg1 ;
-(NSString *)tableAlias;
-(id)joinOnExpression;
@end

