/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSManagedObjectModel, NSArray, NSDictionary;

@interface _PFModelMap : NSObject {

	NSManagedObjectModel* _clientModel;
	NSArray* _allEntities;
	NSArray* _models;
	id* _indexedEntities;
	unsigned long long _clientEntityCount;
	unsigned long long _entityCount;
	NSDictionary* _entitiesByPath;
	unsigned long long* _modelEntityCounts;

}

@property (nonatomic,readonly) NSManagedObjectModel * clientModel;                //@synthesize clientModel=_clientModel - In the implementation block
@property (nonatomic,readonly) NSArray * allEntities;                             //@synthesize allEntities=_allEntities - In the implementation block
@property (nonatomic,readonly) NSDictionary * entitiesByPath;                     //@synthesize entitiesByPath=_entitiesByPath - In the implementation block
@property (nonatomic,readonly) unsigned long long clientEntityCount;              //@synthesize clientEntityCount=_clientEntityCount - In the implementation block
@property (nonatomic,readonly) NSArray * models;                                  //@synthesize models=_models - In the implementation block
@property (nonatomic,readonly) unsigned long long entityCount;                    //@synthesize entityCount=_entityCount - In the implementation block
+(id)ancillaryModelFactoryClasses;
-(void)dealloc;
-(NSArray *)models;
-(void)addManagedObjectModel:(id)arg1 ;
-(id)entityForPath:(id)arg1 ;
-(unsigned long long)entityCount;
-(id)entityForClassName:(id)arg1 inContext:(id)arg2 ;
-(id)entitiesForContext:(id)arg1 configuration:(id)arg2 ;
-(id)initWithClientModel:(id)arg1 ;
-(unsigned long long)slotForEntity:(id)arg1 ;
-(id)entityForSlot:(unsigned long long)arg1 ;
-(NSManagedObjectModel *)clientModel;
-(NSArray *)allEntities;
-(NSDictionary *)entitiesByPath;
-(unsigned long long)clientEntityCount;
@end

