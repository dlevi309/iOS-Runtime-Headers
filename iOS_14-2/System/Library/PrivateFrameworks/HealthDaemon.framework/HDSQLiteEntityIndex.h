/*
* Generated on Thursday, January 14, 2021 at 2:25:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@class NSString, NSArray;

@interface HDSQLiteEntityIndex : NSObject {

	BOOL _unique;
	Class _entityClass;
	NSString* _name;
	NSArray* _columns;
	NSString* _predicateString;

}

@property (nonatomic,readonly) Class entityClass;                              //@synthesize entityClass=_entityClass - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                           //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * disambiguatedName; 
@property (nonatomic,readonly) NSArray * columns;                              //@synthesize columns=_columns - In the implementation block
@property (getter=isUnique,nonatomic,readonly) BOOL unique;                    //@synthesize unique=_unique - In the implementation block
@property (nonatomic,copy,readonly) NSString * predicateString;                //@synthesize predicateString=_predicateString - In the implementation block
-(NSArray *)columns;
-(Class)entityClass;
-(NSString *)name;
-(BOOL)isUnique;
-(NSString *)predicateString;
-(NSString *)disambiguatedName;
-(id)initWithEntity:(Class)arg1 name:(id)arg2 columns:(id)arg3 ;
-(id)initWithEntity:(Class)arg1 name:(id)arg2 columns:(id)arg3 unique:(BOOL)arg4 predicateString:(id)arg5 ;
-(id)creationSQL;
@end

