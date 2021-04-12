/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSString, NSArray;

@interface HDSQLiteDatabaseIndexSchema : NSObject {

	BOOL _isUnique;
	NSString* _name;
	NSArray* _columns;

}

@property (nonatomic,copy) NSString * name;                  //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSArray * columns;              //@synthesize columns=_columns - In the implementation block
@property (assign,nonatomic) BOOL isUnique;                  //@synthesize isUnique=_isUnique - In the implementation block
-(NSArray *)columns;
-(void)setColumns:(NSArray *)arg1 ;
-(NSString *)name;
-(id)description;
-(BOOL)isUnique;
-(unsigned long long)hash;
-(void)setName:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setIsUnique:(BOOL)arg1 ;
@end

