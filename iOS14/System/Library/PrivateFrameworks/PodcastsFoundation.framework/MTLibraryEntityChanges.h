/*
* Generated on Thursday, January 14, 2021 at 2:26:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsFoundation.framework/PodcastsFoundation
*/

#import <PodcastsFoundation/PodcastsFoundation-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSMutableSet;

@interface MTLibraryEntityChanges : NSObject <NSCopying> {

	NSString* _entityName;
	NSMutableSet* _insertedObjectIDs;
	NSMutableSet* _deletedObjectIDs;
	NSMutableSet* _updatedObjectIDs;

}

@property (nonatomic,retain) NSMutableSet * insertedObjectIDs;              //@synthesize insertedObjectIDs=_insertedObjectIDs - In the implementation block
@property (nonatomic,retain) NSMutableSet * deletedObjectIDs;               //@synthesize deletedObjectIDs=_deletedObjectIDs - In the implementation block
@property (nonatomic,retain) NSMutableSet * updatedObjectIDs;               //@synthesize updatedObjectIDs=_updatedObjectIDs - In the implementation block
@property (nonatomic,readonly) NSString * entityName;                       //@synthesize entityName=_entityName - In the implementation block
-(NSString *)entityName;
-(BOOL)hasInserts;
-(id)initWithEntityName:(id)arg1 ;
-(NSMutableSet *)updatedObjectIDs;
-(NSMutableSet *)insertedObjectIDs;
-(id)description;
-(BOOL)hasDeletes;
-(NSMutableSet *)deletedObjectIDs;
-(BOOL)hasChanges;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)hasUpdates;
-(void)setInsertedObjectIDs:(NSMutableSet *)arg1 ;
-(void)setDeletedObjectIDs:(NSMutableSet *)arg1 ;
-(void)setUpdatedObjectIDs:(NSMutableSet *)arg1 ;
-(id)insertedAndUpdatedObjectIDs;
-(void)combineChanges:(id)arg1 ;
-(void)add:(id)arg1 changeType:(int)arg2 ;
@end

