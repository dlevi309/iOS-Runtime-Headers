/*
* Generated on Thursday, January 14, 2021 at 2:24:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/MusicLibrary-Structs.h>
#import <MusicLibrary/ML3Query.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface ML3AggregateQuery : ML3Query <NSSecureCoding> {

	Class _aggregateEntityClass;
	NSString* _foreignPersistentIDProperty;
	BOOL _isFastCountable;

}

@property (nonatomic,readonly) Class aggregateEntityClass;                          //@synthesize aggregateEntityClass=_aggregateEntityClass - In the implementation block
@property (nonatomic,readonly) NSString * foreignPersistentIDProperty;              //@synthesize foreignPersistentIDProperty=_foreignPersistentIDProperty - In the implementation block
@property (assign,nonatomic) BOOL isFastCountable;                                  //@synthesize isFastCountable=_isFastCountable - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)hasEntities;
-(id)persistentIDProperty;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)foreignPersistentIDProperty;
-(Class)entityClass;
-(id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(BOOL)arg2 ;
-(BOOL)isFastCountable;
-(BOOL)sectionsPersistentIDColumnIsDistinct;
-(void)setIsFastCountable:(BOOL)arg1 ;
-(id)initWithUnitQuery:(id)arg1 aggregateEntityClass:(Class)arg2 foreignPersistentIDProperty:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)countOfEntities;
-(id)copyWithZone:(NSZone*)arg1 ;
-(Class)aggregateEntityClass;
-(void)dealloc;
@end

