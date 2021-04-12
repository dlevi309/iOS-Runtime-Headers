/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(Class)entityClass;
-(unsigned long long)countOfEntities;
-(BOOL)hasEntities;
-(id)selectPersistentIDsSQLAndProperties:(id)arg1 ordered:(BOOL)arg2 ;
-(id)persistentIDProperty;
-(BOOL)sectionsPersistentIDColumnIsDistinct;
-(Class)aggregateEntityClass;
-(NSString *)foreignPersistentIDProperty;
-(id)initWithUnitQuery:(id)arg1 aggregateEntityClass:(Class)arg2 foreignPersistentIDProperty:(id)arg3 ;
-(BOOL)isFastCountable;
-(void)setIsFastCountable:(BOOL)arg1 ;
@end

