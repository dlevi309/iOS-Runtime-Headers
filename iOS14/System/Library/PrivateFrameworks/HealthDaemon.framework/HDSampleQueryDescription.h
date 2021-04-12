/*
* Generated on Thursday, January 14, 2021 at 2:25:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, NSPredicate, NSDictionary, HDSQLitePredicate, _HKFilter;

@interface HDSampleQueryDescription : NSObject <NSCopying> {

	NSSet* _sampleTypes;
	NSPredicate* _predicate;
	NSDictionary* _encodingOptions;
	NSSet* _restrictedSourceEntities;
	/*^block*/id _authorizationFilter;
	HDSQLitePredicate* _sqlitePredicate;
	_HKFilter* _filter;

}

@property (nonatomic,copy,readonly) _HKFilter * filter;                               //@synthesize filter=_filter - In the implementation block
@property (nonatomic,copy,readonly) NSSet * sampleTypes;                              //@synthesize sampleTypes=_sampleTypes - In the implementation block
@property (nonatomic,copy,readonly) NSPredicate * predicate;                          //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * encodingOptions;                   //@synthesize encodingOptions=_encodingOptions - In the implementation block
@property (nonatomic,copy,readonly) NSSet * restrictedSourceEntities;                 //@synthesize restrictedSourceEntities=_restrictedSourceEntities - In the implementation block
@property (nonatomic,copy,readonly) id authorizationFilter;                           //@synthesize authorizationFilter=_authorizationFilter - In the implementation block
@property (nonatomic,copy,readonly) HDSQLitePredicate * sqlitePredicate;              //@synthesize sqlitePredicate=_sqlitePredicate - In the implementation block
+(id)sampleQueryDescriptionWithSampleType:(id)arg1 ;
+(id)sampleQueryDescriptionWithSampleType:(id)arg1 predicate:(id)arg2 ;
+(id)sampleQueryDescriptionWithSampleTypes:(id)arg1 predicate:(id)arg2 ;
-(_HKFilter *)filter;
-(NSPredicate *)predicate;
-(id)init;
-(NSSet *)sampleTypes;
-(NSDictionary *)encodingOptions;
-(id)authorizationFilter;
-(unsigned long long)hash;
-(NSSet *)restrictedSourceEntities;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(HDSQLitePredicate *)sqlitePredicate;
-(id)initWithSampleTypes:(id)arg1 predicate:(id)arg2 encodingOptions:(id)arg3 restrictedSourceEntities:(id)arg4 authorizationFilter:(/*^block*/id)arg5 filter:(id)arg6 sqlitePredicate:(id)arg7 ;
-(id)initWithSampleTypes:(id)arg1 predicate:(id)arg2 encodingOptions:(id)arg3 restrictedSourceEntities:(id)arg4 authorizationFilter:(/*^block*/id)arg5 sqlitePredicate:(id)arg6 ;
@end

