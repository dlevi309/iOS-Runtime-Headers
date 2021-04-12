/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSEntityDescription, NSArray, NSMutableDictionary, NSDictionary;

@interface NSPropertyDescription : NSObject <NSSecureCoding, NSCoding, NSCopying> {

	NSString* _versionHashModifier;
	NSData* _versionHash;
	NSEntityDescription* _entity;
	NSString* _name;
	NSArray* _validationPredicates;
	NSArray* _validationWarnings;
	NSExtraPropertyIVars* _extraIvars;
	NSMutableDictionary* _userInfo;
	struct {
		unsigned _isReadOnly : 1;
		unsigned _isTransient : 1;
		unsigned _isOptional : 1;
		unsigned _isIndexed : 1;
		unsigned _skipValidation : 1;
		unsigned _isIndexedBySpotlight : 1;
		unsigned _isStoredInExternalRecord : 1;
		unsigned _extraIvarsAreInDataBlob : 1;
		unsigned _isOrdered : 1;
		unsigned _hasMaxValueInExtraIvars : 1;
		unsigned _hasMinValueInExtraIvars : 1;
		unsigned _storeBinaryDataExternally : 1;
		unsigned _preserveValueOnDelete : 1;
		unsigned _isTriggerBacked : 1;
		unsigned _isFileBackedFuture : 1;
		unsigned _reservedPropertyDescription : 1;
	}  _propertyDescriptionFlags;
	short _entitysReferenceIDForProperty;

}

@property (nonatomic,readonly) NSEntityDescription * entity; 
@property (nonatomic,copy) NSString * name; 
@property (getter=isOptional) BOOL optional; 
@property (getter=isTransient) BOOL transient; 
@property (readonly) NSArray * validationPredicates; 
@property (readonly) NSArray * validationWarnings; 
@property (nonatomic,retain) NSDictionary * userInfo; 
@property (getter=isIndexed) BOOL indexed; 
@property (copy,readonly) NSData * versionHash; 
@property (copy) NSString * versionHashModifier; 
@property (getter=isIndexedBySpotlight) BOOL indexedBySpotlight; 
@property (getter=isStoredInExternalRecord) BOOL storedInExternalRecord; 
@property (copy) NSString * renamingIdentifier; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
-(id)_rawValidationWarnings;
-(void)setUserInfo:(NSDictionary *)arg1 ;
-(NSData *)versionHash;
-(void)_createCachesAndOptimizeState;
-(void)setTransient:(BOOL)arg1 ;
-(BOOL)_nonPredicateValidateValue:(id*)arg1 forKey:(id)arg2 inObject:(id)arg3 error:(id*)arg4 ;
-(BOOL)_isToManyRelationship;
-(void)setOptional:(BOOL)arg1 ;
-(BOOL)_isEditable;
-(BOOL)isOptional;
-(BOOL)_isSchemaEqual:(id)arg1 ;
-(unsigned long long)_propertyType;
-(NSArray *)validationWarnings;
-(void)_writeIntoData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 fetchRequests:(id)arg7 ;
-(BOOL)_comparePredicatesAndWarnings:(id)arg1 ;
-(NSEntityDescription *)entity;
-(NSArray *)validationPredicates;
-(id)_rawValidationPredicates;
-(void)setReadOnly:(BOOL)arg1 ;
-(BOOL)isTransient;
-(void)_appendPropertyFieldsToData:(id)arg1 propertiesDict:(id)arg2 uniquedPropertyNames:(id)arg3 uniquedStrings:(id)arg4 uniquedData:(id)arg5 entitiesSlots:(id)arg6 ;
-(BOOL)isReadOnly;
-(void)_versionHash:(char*)arg1 inStyle:(unsigned long long)arg2 ;
-(BOOL)_epsilonEquals:(id)arg1 rhs:(id)arg2 withFlags:(int)arg3 ;
-(BOOL)isIndexed;
-(NSDictionary *)userInfo;
-(id)init;
-(void)setIndexed:(BOOL)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_stripForMigration;
-(BOOL)_isRelationship;
-(NSString *)name;
-(id)description;
-(id)elementID;
-(BOOL)_isFileBackedFuture;
-(BOOL)_storeBinaryDataExternally;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)_entitysReferenceID;
-(NSString *)renamingIdentifier;
-(id)_underlyingProperty;
-(NSExtraPropertyIVars*)_extraIVars;
-(BOOL)_hasMinValueInExtraIvars;
-(BOOL)_hasMaxValueInExtraIvars;
-(BOOL)_preserveValueOnDelete;
-(BOOL)_isTriggerBacked;
-(void)_replaceValidationPredicates:(id)arg1 andWarnings:(id)arg2 ;
-(BOOL)isIndexedBySpotlight;
-(void)_setEntity:(id)arg1 ;
-(NSString *)versionHashModifier;
-(void)setVersionHashModifier:(NSString *)arg1 ;
-(void)_setEntityAndMaintainIndices:(id)arg1 ;
-(void)setElementID:(id)arg1 ;
-(BOOL)isStoredInExternalRecord;
-(void)_setEntitysReferenceID:(long long)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(id)_initWithName:(id)arg1 ;
-(BOOL)_isOrdered;
-(void)_throwIfNotEditable;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)_restoreValidation;
-(void)setRenamingIdentifier:(NSString *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)_initializeExtraIVars;
-(void)setValidationPredicates:(id)arg1 withValidationWarnings:(id)arg2 ;
-(void)setIndexedBySpotlight:(BOOL)arg1 ;
-(void)setStoredInExternalRecord:(BOOL)arg1 ;
-(void)_setOrdered:(BOOL)arg1 ;
-(BOOL)_skipValidation;
-(BOOL)isSpotlightIndexed;
-(BOOL)isStoredInTruth;
-(void)setSpotlightIndexed:(BOOL)arg1 ;
-(BOOL)isStoredInTruthFile;
-(void)setStoredInTruthFile:(BOOL)arg1 ;
-(void)setStoredInTruth:(BOOL)arg1 ;
@end

