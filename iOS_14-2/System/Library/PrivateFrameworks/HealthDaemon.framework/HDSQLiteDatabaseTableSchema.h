/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSString, NSDictionary, NSSet;

@interface HDSQLiteDatabaseTableSchema : NSObject {

	NSString* _name;
	NSDictionary* _columns;
	NSSet* _indices;

}

@property (nonatomic,copy) NSString * name;                       //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSDictionary * columns;              //@synthesize columns=_columns - In the implementation block
@property (nonatomic,retain) NSSet * indices;                     //@synthesize indices=_indices - In the implementation block
-(NSDictionary *)columns;
-(void)setColumns:(NSDictionary *)arg1 ;
-(NSString *)name;
-(id)description;
-(void)setIndices:(NSSet *)arg1 ;
-(NSSet *)indices;
-(unsigned long long)hash;
-(void)setName:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

