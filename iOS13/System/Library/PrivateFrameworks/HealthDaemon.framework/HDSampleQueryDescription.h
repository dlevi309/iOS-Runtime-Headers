/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <HealthDaemon/HealthDaemon-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSSet, NSPredicate, NSDictionary, _HKFilter, HDSQLitePredicate;

@interface HDSampleQueryDescription : NSObject <NSCopying> {

	NSSet* _sampleTypes;
	NSPredicate* _predicate;
	NSDictionary* _encodingOptions;
	NSSet* _restrictedSourceEntities;
	/*^block*/id _authorizationFilter;
	_HKFilter* _filter;
	HDSQLitePredicate* _sqlitePredicate;

}

@property (nonatomic,copy,readonly) NSSet * sampleTypes;                              //@synthesize sampleTypes=_sampleTypes - In the implementation block
@property (nonatomic,copy,readonly) NSPredicate * predicate;                          //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * encodingOptions;                   //@synthesize encodingOptions=_encodingOptions - In the implementation block
@property (nonatomic,copy,readonly) NSSet * restrictedSourceEntities;                 //@synthesize restrictedSourceEntities=_restrictedSourceEntities - In the implementation block
@property (nonatomic,copy,readonly) id authorizationFilter;                           //@synthesize authorizationFilter=_authorizationFilter - In the implementation block
@property (nonatomic,copy,readonly) _HKFilter * filter;                               //@synthesize filter=_filter - In the implementation block
@property (nonatomic,copy,readonly) HDSQLitePredicate * sqlitePredicate;              //@synthesize sqlitePredicate=_sqlitePredicate - In the implementation block
+(id)sampleQueryDescriptionWithSampleType:(id)arg1 ;
+(id)sampleQueryDescriptionWithSampleType:(id)arg1 predicate:(id)arg2 ;
+(id)sampleQueryDescriptionWithSampleTypes:(id)arg1 predicate:(id)arg2 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSPredicate *)predicate;
-(_HKFilter *)filter;
-(NSDictionary *)encodingOptions;
-(NSSet *)sampleTypes;
-(id)initWithSampleTypes:(id)arg1 predicate:(id)arg2 encodingOptions:(id)arg3 restrictedSourceEntities:(id)arg4 authorizationFilter:(/*^block*/id)arg5 filter:(id)arg6 sqlitePredicate:(id)arg7 ;
-(NSSet *)restrictedSourceEntities;
-(id)authorizationFilter;
-(HDSQLitePredicate *)sqlitePredicate;
@end

