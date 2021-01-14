/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreData/NSPropertyDescription.h>

@class NSString, NSData;

@interface NSAttributeDescription : NSPropertyDescription {

	unsigned short _type;
	Class _attributeValueClass;
	NSString* _valueTransformerName;
	NSString* _attributeValueClassName;
	id _defaultValue;

}

@property (assign) BOOL preserveValueOnDeletionInPersistentHistory; 
@property (assign) BOOL isFileBackedFuture; 
@property (assign) unsigned long long attributeType; 
@property (copy) NSString * attributeValueClassName; 
@property (retain) id defaultValue; 
@property (copy,readonly) NSData * versionHash; 
@property (copy) NSString * valueTransformerName; 
@property (assign) BOOL allowsExternalBinaryDataStorage; 
@property (assign) BOOL preservesValueInHistoryOnDeletion; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(id)_classNameForType:(unsigned long long)arg1 ;
+(id)stringForAttributeType:(unsigned long long)arg1 ;
-(id)_initWithName:(id)arg1 type:(unsigned long long)arg2 withClassName:(id)arg3 ;
-(id)_rawValidationWarnings;
-(long long)_canConvertPredicate:(id)arg1 andWarning:(id)arg2 ;
-(BOOL)_comparePredicatesAndWarningsWithUnoptimizedAttributeDescription:(id)arg1 ;
-(id)_initWithName:(id)arg1 type:(unsigned long long)arg2 ;
-(BOOL)preserveValueOnDeletionInPersistentHistory;
-(BOOL)isFileBackedFuture;
-(NSData *)versionHash;
-(void)_createCachesAndOptimizeState;
-(void)setAttributeValueClassName:(NSString *)arg1 ;
-(BOOL)preservesValueInHistoryOnDeletion;
-(void)_setPreserveValueOnDeletionInPersistentHistory:(BOOL)arg1 ;
-(void)setAttributeType:(unsigned long long)arg1 ;
-(void)setIsFileBackedFuture:(BOOL)arg1 ;
-(BOOL)_attributeTypeIsSchemaEqual:(unsigned long long)arg1 ;
-(BOOL)_nonPredicateValidateValue:(id*)arg1 forKey:(id)arg2 inObject:(id)arg3 error:(id*)arg4 ;
-(void)setPreserveValueOnDeletionInPersistentHistory:(BOOL)arg1 ;
-(void)setStoresBinaryDataExternally:(BOOL)arg1 ;
-(void)setDefaultValue:(id)arg1 ;
-(id)_initWithType:(unsigned long long)arg1 ;
-(void)setValueTransformerName:(NSString *)arg1 ;
-(void)setPreservesValueInHistoryOnDeletion:(BOOL)arg1 ;
-(BOOL)_isSchemaEqual:(id)arg1 ;
-(void)setAllowsExternalBinaryDataStorage:(BOOL)arg1 ;
-(unsigned long long)_propertyType;
-(NSString *)valueTransformerName;
-(id)validationWarnings;
-(void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7 ;
-(BOOL)_comparePredicatesAndWarnings:(id)arg1 ;
-(BOOL)storesBinaryDataExternally;
-(id)validationPredicates;
-(id)_rawValidationPredicates;
-(unsigned long long)attributeType;
-(NSString *)attributeValueClassName;
-(void)_versionHash:(char*)arg1 inStyle:(unsigned long long)arg2 ;
-(BOOL)_epsilonEquals:(id)arg1 rhs:(id)arg2 withFlags:(int)arg3 ;
-(BOOL)isIndexed;
-(id)defaultValue;
-(void)encodeWithCoder:(id)arg1 ;
-(Class)_attributeValueClass;
-(id)description;
-(BOOL)allowsExternalBinaryDataStorage;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

