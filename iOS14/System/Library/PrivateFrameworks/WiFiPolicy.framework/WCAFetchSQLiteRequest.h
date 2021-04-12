/*
* Generated on Thursday, January 14, 2021 at 2:26:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiPolicy.framework/WiFiPolicy
*/

#import <WiFiPolicy/WCAFetchRequest.h>

@class NSDictionary, NSString, NSArray;

@interface WCAFetchSQLiteRequest : WCAFetchRequest {

	NSDictionary* _parameters;
	NSString* _tableName;
	NSArray* _columnNames;
	long long _limit;

}

@property (nonatomic,copy) NSDictionary * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (nonatomic,copy) NSString * tableName;                   //@synthesize tableName=_tableName - In the implementation block
@property (nonatomic,copy) NSArray * columnNames;                  //@synthesize columnNames=_columnNames - In the implementation block
@property (assign,nonatomic) long long limit;                      //@synthesize limit=_limit - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(void)setLimit:(long long)arg1 ;
-(NSArray *)columnNames;
-(NSString *)tableName;
-(long long)limit;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setTableName:(NSString *)arg1 ;
-(void)setColumnNames:(NSArray *)arg1 ;
@end

