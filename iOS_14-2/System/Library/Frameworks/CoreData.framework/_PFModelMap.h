/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)ancillaryModelFactoryClasses;
-(NSDictionary *)entitiesByPath;
-(unsigned long long)clientEntityCount;
-(NSArray *)allEntities;
-(NSManagedObjectModel *)clientModel;
-(void)dealloc;
@end

