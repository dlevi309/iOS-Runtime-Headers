/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFObject.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSMapTable, NSSet, NSArray;

@interface HMDCloudChangeTree : HMFObject {

	NSObject*<OS_dispatch_queue> _propertyQueue;
	NSMutableArray* _objects;
	NSMapTable* _objectMap;
	NSMapTable* _recordMap;
	NSMapTable* _branchMap;
	NSSet* _validRootUUIDs;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> propertyQueue;              //@synthesize propertyQueue=_propertyQueue - In the implementation block
@property (nonatomic,retain) NSMutableArray * objects;                                  //@synthesize objects=_objects - In the implementation block
@property (nonatomic,retain) NSMapTable * objectMap;                                    //@synthesize objectMap=_objectMap - In the implementation block
@property (nonatomic,retain) NSMapTable * recordMap;                                    //@synthesize recordMap=_recordMap - In the implementation block
@property (nonatomic,retain) NSMapTable * branchMap;                                    //@synthesize branchMap=_branchMap - In the implementation block
@property (nonatomic,retain) NSSet * validRootUUIDs;                                    //@synthesize validRootUUIDs=_validRootUUIDs - In the implementation block
@property (nonatomic,readonly) NSArray * objectsWithPotentialChanges; 
@property (nonatomic,readonly) NSArray * allTransactionStoreRowIDs; 
@property (nonatomic,readonly) NSArray * orphans; 
@property (nonatomic,readonly) NSMutableArray * cloudChanges; 
@property (nonatomic,readonly) NSMutableArray * invalidCloudChanges; 
@property (nonatomic,readonly) BOOL hasValidChanges; 
+(id)shortDescription;
+(BOOL)modelTypeCanBeOrphaned:(id)arg1 ;
-(id)init;
-(id)description;
-(NSObject*<OS_dispatch_queue>)propertyQueue;
-(NSMutableArray *)objects;
-(void)addNode:(id)arg1 ;
-(id)shortDescription;
-(void)removeNode:(id)arg1 ;
-(void)setObjects:(NSMutableArray *)arg1 ;
-(NSArray *)orphans;
-(NSMapTable *)objectMap;
-(void)setObjectMap:(NSMapTable *)arg1 ;
-(void)logChangeTreeWithIndent:(id)arg1 ;
-(void)updateRecordMapping:(id)arg1 ;
-(NSMapTable *)branchMap;
-(id)_objectForUUID:(id)arg1 ;
-(NSMapTable *)recordMap;
-(id)_objectForRecordName:(id)arg1 ;
-(void)_updateNode:(id)arg1 oldRecordName:(id)arg2 ;
-(id)_findNodeWithRecordMapping:(id)arg1 ;
-(NSSet *)validRootUUIDs;
-(id)initWithRootUUIDs:(id)arg1 ;
-(id)objectForUUID:(id)arg1 ;
-(id)objectForRecordName:(id)arg1 ;
-(void)updateModel:(id)arg1 ;
-(void)updateChange:(id)arg1 ;
-(void)updateNode:(id)arg1 withCloudRecord:(id)arg2 ;
-(void)findAndDeletedChildren;
-(void)findAndMarkOrphanedBranches;
-(NSArray *)objectsWithPotentialChanges;
-(NSArray *)allTransactionStoreRowIDs;
-(NSMutableArray *)cloudChanges;
-(NSMutableArray *)invalidCloudChanges;
-(id)recordMapWithFilter:(id)arg1 ;
-(BOOL)hasValidChanges;
-(void)setRecordMap:(NSMapTable *)arg1 ;
-(void)setBranchMap:(NSMapTable *)arg1 ;
-(void)setValidRootUUIDs:(NSSet *)arg1 ;
@end

