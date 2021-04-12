/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSManagedObjectModel, NSEntityMapping, NSError;

@interface _NSMappingModelBuilder : NSObject {

	NSManagedObjectModel* _sourceModel;
	NSManagedObjectModel* _destinationModel;
	NSEntityMapping* _currentEntityMapping;
	NSError* _error;

}
+(int)migrationDebugLevel;
+(void)setMigrationDebugLevel:(int)arg1 ;
-(void)dealloc;
-(void)_resetCaches;
-(id)newEntityMappingWithSource:(id)arg1 destination:(id)arg2 ;
-(BOOL)inferPropertyMappingsForEntityMapping:(id)arg1 ;
-(id)newInferredPropertyMappingWithSourceAttribute:(id)arg1 destinationAttribute:(id)arg2 ;
-(id)newInferredPropertyMappingWithSourceRelationship:(id)arg1 destinationRelationship:(id)arg2 ;
-(BOOL)checkForSchemaMatchBetween:(id)arg1 andDestination:(id)arg2 ;
-(BOOL)_canTransformSourceAttributeType:(unsigned long long)arg1 toDestinationAttributeType:(unsigned long long)arg2 ;
-(id)initWithSourceModel:(id)arg1 destinationModel:(id)arg2 ;
-(id)newInferredMappingModel:(id*)arg1 ;
@end

