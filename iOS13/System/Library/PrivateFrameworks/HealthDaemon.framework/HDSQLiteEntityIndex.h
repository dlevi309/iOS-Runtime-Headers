/*
* Generated on Monday, March 1, 2021 at 2:34:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSString, NSArray, HDSQLitePredicate;

@interface HDSQLiteEntityIndex : NSObject {

	BOOL _unique;
	Class _entityClass;
	NSString* _name;
	NSArray* _columns;
	HDSQLitePredicate* _predicate;

}

@property (nonatomic,readonly) Class entityClass;                               //@synthesize entityClass=_entityClass - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * disambiguatedName; 
@property (nonatomic,readonly) NSArray * columns;                               //@synthesize columns=_columns - In the implementation block
@property (getter=isUnique,nonatomic,readonly) BOOL unique;                     //@synthesize unique=_unique - In the implementation block
@property (nonatomic,copy,readonly) HDSQLitePredicate * predicate;              //@synthesize predicate=_predicate - In the implementation block
-(NSString *)name;
-(HDSQLitePredicate *)predicate;
-(NSArray *)columns;
-(BOOL)isUnique;
-(Class)entityClass;
-(id)initWithEntity:(Class)arg1 name:(id)arg2 columns:(id)arg3 unique:(BOOL)arg4 predicate:(id)arg5 ;
-(NSString *)disambiguatedName;
-(id)initWithEntity:(Class)arg1 name:(id)arg2 columns:(id)arg3 ;
-(id)creationSQL;
@end

