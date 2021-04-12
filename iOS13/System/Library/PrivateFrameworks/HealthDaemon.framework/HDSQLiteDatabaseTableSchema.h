/*
* Generated on Monday, March 1, 2021 at 2:34:08 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(NSDictionary *)columns;
-(void)setColumns:(NSDictionary *)arg1 ;
-(NSSet *)indices;
-(void)setIndices:(NSSet *)arg1 ;
@end

