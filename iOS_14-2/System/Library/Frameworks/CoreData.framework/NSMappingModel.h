/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSMutableArray, NSMutableDictionary, NSArray, NSDictionary;

@interface NSMappingModel : NSObject <NSSecureCoding> {

	void* _reserved;
	void* _reserved1;
	void* _reserved2;
	NSMutableArray* _entityMappings;
	NSMutableDictionary* _entityMappingsByName;
	struct {
		unsigned _isInUse : 1;
		unsigned _reservedModelMapping : 31;
	}  _modelMappingFlags;

}

@property (retain) NSArray * entityMappings; 
@property (copy,readonly) NSDictionary * entityMappingsByName; 
+(void)initialize;
+(BOOL)supportsSecureCoding;
+(int)migrationDebugLevel;
+(void)setMigrationDebugLevel:(int)arg1 ;
+(id)_mappingModelFromBundles:(id)arg1 forSourceModel:(id)arg2 destinationModel:(id)arg3 ;
+(id)_newMappingModelFromBundles:(id)arg1 forSourceHashes:(id)arg2 destinationHashes:(id)arg3 ;
+(id)mappingModelFromBundles:(id)arg1 forSourceModel:(id)arg2 destinationModel:(id)arg3 ;
+(id)inferredMappingModelForSourceModel:(id)arg1 destinationModel:(id)arg2 error:(id*)arg3 ;
-(BOOL)isEditable;
-(void)_createCachesAndOptimizeState;
-(id)initWithContentsOfURL:(id)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)_setIsEditable:(BOOL)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(void)setEntityMappings:(NSArray *)arg1 ;
-(BOOL)_hasInferredMappingNeedingValidation;
-(NSArray *)entityMappings;
-(id)_initWithEntityMappings:(id)arg1 ;
-(void)_addEntityMapping:(id)arg1 ;
-(NSDictionary *)entityMappingsByName;
-(BOOL)_isInferredMappingModel;
-(id)_sourceEntityVersionHashesByName;
-(id)_destinationEntityVersionHashesByName;
-(void)_throwIfNotEditable;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
@end

