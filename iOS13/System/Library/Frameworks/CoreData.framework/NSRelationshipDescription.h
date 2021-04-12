/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSPropertyDescription.h>

@class NSEntityDescription, NSString, NSData;

@interface NSRelationshipDescription : NSPropertyDescription {

	void* _reserved5;
	void* _reserved6;
	NSEntityDescription* _destinationEntity;
	NSString* _lazyDestinationEntityName;
	NSRelationshipDescription* _inverseRelationship;
	NSString* _lazyInverseRelationshipName;
	unsigned long long _maxCount;
	unsigned long long _minCount;
	unsigned long long _deleteRule;

}

@property (assign,nonatomic) NSEntityDescription * destinationEntity; 
@property (assign,nonatomic) NSRelationshipDescription * inverseRelationship; 
@property (assign) unsigned long long maxCount; 
@property (assign) unsigned long long minCount; 
@property (assign) unsigned long long deleteRule; 
@property (getter=isToMany,readonly) BOOL toMany; 
@property (copy,readonly) NSData * versionHash; 
@property (getter=isOrdered) BOOL ordered; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isOrdered;
-(void)setOrdered:(BOOL)arg1 ;
-(id)_initWithName:(id)arg1 ;
-(unsigned long long)_propertyType;
-(BOOL)_isRelationship;
-(NSEntityDescription *)destinationEntity;
-(BOOL)isToMany;
-(NSRelationshipDescription *)inverseRelationship;
-(unsigned long long)deleteRule;
-(void)setMaxCount:(unsigned long long)arg1 ;
-(void)setDestinationEntity:(NSEntityDescription *)arg1 ;
-(void)setInverseRelationship:(NSRelationshipDescription *)arg1 ;
-(void)setDeleteRule:(unsigned long long)arg1 ;
-(BOOL)_isSchemaEqual:(id)arg1 ;
-(NSData *)versionHash;
-(unsigned long long)minCount;
-(BOOL)isIndexed;
-(void)_createCachesAndOptimizeState;
-(BOOL)_nonPredicateValidateValue:(id*)arg1 forKey:(id)arg2 inObject:(id)arg3 error:(id*)arg4 ;
-(void)_versionHash:(char*)arg1 inStyle:(unsigned long long)arg2 ;
-(void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7 ;
-(unsigned long long)maxCount;
-(BOOL)_isToManyRelationship;
-(void)_updateInverse:(id)arg1 ;
-(void)setMinCount:(unsigned long long)arg1 ;
-(void)_versionHash:(char*)arg1 inStyle:(unsigned long long)arg2 proxyContext:(id)arg3 ;
-(BOOL)_validateValuesAreOfDestinationEntity:(id)arg1 source:(id)arg2 ;
-(void)_setLazyDestinationEntityName:(id)arg1 ;
@end

