/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithContentsOfURL:(id)arg1 ;
-(BOOL)isEditable;
-(void)_setIsEditable:(BOOL)arg1 ;
-(void)setEntityMappings:(NSArray *)arg1 ;
-(void)_throwIfNotEditable;
-(void)_createCachesAndOptimizeState;
-(BOOL)_hasInferredMappingNeedingValidation;
-(NSArray *)entityMappings;
-(id)_initWithEntityMappings:(id)arg1 ;
-(void)_addEntityMapping:(id)arg1 ;
-(NSDictionary *)entityMappingsByName;
-(BOOL)_isInferredMappingModel;
-(id)_sourceEntityVersionHashesByName;
-(id)_destinationEntityVersionHashesByName;
@end

