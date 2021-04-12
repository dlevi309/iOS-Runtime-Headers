/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSArray *)columns;
-(void)setColumns:(NSArray *)arg1 ;
-(BOOL)isUnique;
-(void)setIsUnique:(BOOL)arg1 ;
@end

