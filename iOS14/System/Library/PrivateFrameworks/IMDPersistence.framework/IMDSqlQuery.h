/*
* Generated on Thursday, January 14, 2021 at 2:24:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMDPersistence.framework/IMDPersistence
*/


@class NSString;

@interface IMDSqlQuery : NSObject {

	NSString* _tableName;
	NSString* _columns;
	NSString* _where;
	long long _limit;

}

@property (nonatomic,copy,readonly) NSString * tableName;              //@synthesize tableName=_tableName - In the implementation block
@property (nonatomic,copy) NSString * columns;                         //@synthesize columns=_columns - In the implementation block
@property (assign,nonatomic) long long limit;                          //@synthesize limit=_limit - In the implementation block
@property (nonatomic,copy) NSString * where;                           //@synthesize where=_where - In the implementation block
+(id)databaseQuery:(id)arg1 ;
-(void)setLimit:(long long)arg1 ;
-(NSString *)columns;
-(NSString *)tableName;
-(long long)limit;
-(void)setWhere:(NSString *)arg1 ;
-(void)setColumns:(NSString *)arg1 ;
-(NSString *)where;
-(void)dealloc;
-(id)initWithTableName:(id)arg1 ;
-(id)createQueryString;
@end

