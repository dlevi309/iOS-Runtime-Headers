/*
* Generated on Thursday, January 14, 2021 at 2:21:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/


@class NSEntityMapping, NSMutableDictionary, NSSQLEntity, NSMutableArray;

@interface _NSSQLEntityMigrationDescription : NSObject {

	NSEntityMapping* _entityMapping;
	NSMutableDictionary* _sqlValuesByColumnName;
	NSMutableDictionary* _sourceEntitiesByToOneWithNewEntityKey;
	NSSQLEntity* _dstEntity;
	NSSQLEntity* _srcEntity;
	int _migrationType;
	NSMutableArray* _addedManyToManys;
	NSMutableArray* _removedManyToManys;
	NSMutableArray* _transformedManyToManys;
	NSMutableArray* _processedTransforms;
	NSMutableArray* _pendingTransforms;
	BOOL _updateUsingCopy;

}

@property (nonatomic,readonly) NSSQLEntity * sourceEntity;              //@synthesize srcEntity=_srcEntity - In the implementation block
-(NSSQLEntity *)sourceEntity;
-(void)validateCloudKitEntityMigration;
-(id)description;
-(void)dealloc;
@end

