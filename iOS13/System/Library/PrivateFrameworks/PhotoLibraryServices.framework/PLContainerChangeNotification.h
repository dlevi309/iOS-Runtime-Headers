/*
* Generated on Monday, March 1, 2021 at 2:30:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/

#import <PhotoLibraryServices/PhotoLibraryServices-Structs.h>
#import <PhotoLibraryServices/PLChangeNotification.h>

@class PLObjectSnapshot, NSArray, NSIndexSet, PLManagedObject, NSString;

@interface PLContainerChangeNotification : PLChangeNotification {

	id _object;
	PLObjectSnapshot* _snapshot;
	NSArray* _changedObjects;
	BOOL _didCalculateDiffs;
	BOOL _shouldReload;
	NSIndexSet* _deletedIndexes;
	NSIndexSet* _insertedIndexes;
	NSIndexSet* _movedIndexes;
	CFArrayRef _movedFromIndexes;
	NSIndexSet* _changedIndexes;
	BOOL _countDidChange;

}

@property (assign,setter=_setDidCalculateDiffs:,nonatomic) BOOL _didCalculateDiffs; 
@property (nonatomic,retain,readonly) PLManagedObject * _managedObject; 
@property (nonatomic,retain,readonly) NSString * _contentRelationshipName; 
@property (nonatomic,retain,readonly) NSArray * _changedObjects; 
@property (nonatomic,retain,readonly) PLObjectSnapshot * snapshot; 
@property (nonatomic,retain,readonly) NSString * _diffDescription; 
@property (nonatomic,readonly) BOOL countDidChange; 
@property (nonatomic,readonly) NSIndexSet * movedIndexes;                                        //@synthesize movedIndexes=_movedIndexes - In the implementation block
@property (nonatomic,retain,readonly) CFArrayRef movedFromIndexes;                               //@synthesize movedFromIndexes=_movedFromIndexes - In the implementation block
@property (nonatomic,readonly) BOOL shouldReload; 
@property (nonatomic,readonly) NSIndexSet * deletedIndexes; 
@property (nonatomic,readonly) NSIndexSet * insertedIndexes; 
@property (nonatomic,readonly) BOOL hasMoves; 
@property (nonatomic,readonly) NSIndexSet * changedIndexes; 
@property (nonatomic,readonly) NSIndexSet * changedIndexesRelativeToSnapshot; 
@property (nonatomic,readonly) NSArray * deletedObjects; 
@property (nonatomic,readonly) NSArray * insertedObjects; 
@property (nonatomic,readonly) NSArray * changedObjects; 
-(id)init;
-(void)dealloc;
-(id)name;
-(id)object;
-(id)_init;
-(NSArray *)insertedObjects;
-(PLObjectSnapshot *)snapshot;
-(NSIndexSet *)insertedIndexes;
-(NSIndexSet *)deletedIndexes;
-(NSArray *)deletedObjects;
-(NSArray *)_changedObjects;
-(NSIndexSet *)changedIndexes;
-(void)enumerateMovesWithBlock:(/*^block*/id)arg1 ;
-(BOOL)shouldReload;
-(PLManagedObject *)_managedObject;
-(void)_calculateDiffs;
-(NSString *)_contentRelationshipName;
-(BOOL)_getOldSet:(id*)arg1 newSet:(id*)arg2 ;
-(void)_calculateDiffsIfNecessary;
-(NSString *)_diffDescription;
-(id)_initWithObject:(id)arg1 snapshot:(id)arg2 changedObjects:(id)arg3 ;
-(BOOL)countDidChange;
-(BOOL)_didCalculateDiffs;
-(BOOL)hasMoves;
-(NSIndexSet *)changedIndexesRelativeToSnapshot;
-(NSArray *)changedObjects;
-(unsigned long long)snapshotIndexForContainedObject:(id)arg1 ;
-(NSIndexSet *)movedIndexes;
-(CFArrayRef)movedFromIndexes;
-(void)_setDidCalculateDiffs:(BOOL)arg1 ;
@end

