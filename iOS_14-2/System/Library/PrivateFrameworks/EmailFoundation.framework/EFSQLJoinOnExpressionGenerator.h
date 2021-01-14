/*
* Generated on Thursday, January 14, 2021 at 2:22:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)table;
-(NSString *)columns;
-(id)initWithTable:(id)arg1 tableAlias:(id)arg2 columns:(id)arg3 ;
-(NSString *)tableAlias;
-(BOOL)isEqualToJoinOnExpressonGenerator:(id)arg1 ;
-(id)joinOnExpression;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
@end

