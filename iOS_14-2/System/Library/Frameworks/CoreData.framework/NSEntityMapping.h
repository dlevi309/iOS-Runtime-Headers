/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString, NSData, NSExpression, NSMutableArray, NSArray;

@interface NSEntityMapping : NSObject <NSCoding, NSSecureCoding> {

	void* _reserved;
	void* _reserved1;
	NSDictionary* _mappingsByName;
	NSString* _name;
	unsigned long long _mappingType;
	NSString* _sourceEntityName;
	NSData* _sourceEntityVersionHash;
	NSString* _destinationEntityName;
	NSData* _destinationEntityVersionHash;
	NSExpression* _sourceExpression;
	NSDictionary* _userInfo;
	NSString* _entityMigrationPolicyClassName;
	NSMutableArray* _attributeMappings;
	NSMutableArray* _relationshipMappings;
	struct {
		unsigned _isInUse : 1;
		unsigned _changeIsSchemaCompatible : 1;
		unsigned _reservedEntityMapping : 30;
	}  _entityMappingFlags;

}

@property (copy) NSString * name; 
@property (assign) unsigned long long mappingType; 
@property (copy) NSString * sourceEntityName; 
@property (copy) NSData * sourceEntityVersionHash; 
@property (copy) NSString * destinationEntityName; 
@property (copy) NSData * destinationEntityVersionHash; 
@property (retain) NSArray * attributeMappings; 
@property (retain) NSArray * relationshipMappings; 
@property (retain) NSExpression * sourceExpression; 
@property (nonatomic,retain) NSDictionary * userInfo; 
@property (copy) NSString * entityMigrationPolicyClassName; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(BOOL)isEditable;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(void)_createCachesAndOptimizeState;
-(NSDictionary *)userInfo;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_setIsEditable:(BOOL)arg1 ;
-(NSString *)name;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)mappingType;
-(NSString *)sourceEntityName;
-(void)setMappingType:(unsigned long long)arg1 ;
-(NSString *)destinationEntityName;
-(void)setSourceExpression:(NSExpression *)arg1 ;
-(void)setAttributeMappings:(NSArray *)arg1 ;
-(void)setRelationshipMappings:(NSArray *)arg1 ;
-(void)setSourceEntityName:(NSString *)arg1 ;
-(void)setSourceEntityVersionHash:(NSData *)arg1 ;
-(void)setDestinationEntityName:(NSString *)arg1 ;
-(void)setDestinationEntityVersionHash:(NSData *)arg1 ;
-(void)_setChangeIsSchemaCompatible:(BOOL)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)_initWithSourceEntityDescription:(id)arg1 destinationEntityDescription:(id)arg2 ;
-(NSArray *)attributeMappings;
-(NSArray *)relationshipMappings;
-(NSData *)sourceEntityVersionHash;
-(NSData *)destinationEntityVersionHash;
-(NSExpression *)sourceExpression;
-(NSString *)entityMigrationPolicyClassName;
-(void)setEntityMigrationPolicyClassName:(NSString *)arg1 ;
-(id)_mappingsByName;
-(id)_migrationPolicy;
-(void)_addAttributeMapping:(id)arg1 ;
-(void)_addRelationshipMapping:(id)arg1 ;
-(BOOL)_hasInferredMappingNeedingValidation;
-(BOOL)_changeIsSchemaCompatible;
-(void)_throwIfNotEditable;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

