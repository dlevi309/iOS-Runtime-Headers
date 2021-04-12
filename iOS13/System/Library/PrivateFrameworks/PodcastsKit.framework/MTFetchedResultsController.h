/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/

#import <libobjc.A.dylib/NSFetchedResultsControllerDelegate.h>
#import <libobjc.A.dylib/MTFetchedResultsControllerProtocol.h>

@protocol NSFetchedResultsControllerDelegate;
@class NSFetchRequest, NSArray, NSManagedObjectContext, NSFetchedResultsController, NSMutableDictionary, NSMutableArray, NSString;

@interface MTFetchedResultsController : NSObject <NSFetchedResultsControllerDelegate, MTFetchedResultsControllerProtocol> {

	NSFetchedResultsController* _frc;
	NSMutableDictionary* _propertyCache;
	NSMutableArray* _changes;
	NSArray* _propertyKeys;
	id<NSFetchedResultsControllerDelegate> _delegate;

}

@property (nonatomic,readonly) NSFetchRequest * fetchRequest; 
@property (nonatomic,copy) NSArray * propertyKeys;                                                //@synthesize propertyKeys=_propertyKeys - In the implementation block
@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext; 
@property (nonatomic,readonly) NSArray * fetchedObjects; 
@property (assign,nonatomic,__weak) id<NSFetchedResultsControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<NSFetchedResultsControllerDelegate>)delegate;
-(void)setDelegate:(id<NSFetchedResultsControllerDelegate>)arg1 ;
-(NSFetchRequest *)fetchRequest;
-(NSManagedObjectContext *)managedObjectContext;
-(void)controllerDidChangeContent:(id)arg1 ;
-(void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5 ;
-(void)controllerWillChangeContent:(id)arg1 ;
-(id)initWithFetchRequest:(id)arg1 managedObjectContext:(id)arg2 sectionNameKeyPath:(id)arg3 cacheName:(id)arg4 ;
-(BOOL)performFetch:(id*)arg1 ;
-(NSArray *)fetchedObjects;
-(id)objectAtIndexPath:(id)arg1 ;
-(id)indexPathForObject:(id)arg1 ;
-(NSArray *)propertyKeys;
-(void)setPropertyKeys:(NSArray *)arg1 ;
-(void)_updateCacheWithManagedObject:(id)arg1 ;
-(BOOL)_hasManagedObjectChanged:(id)arg1 ;
-(void)_removeObjectFromCacheWithId:(id)arg1 ;
-(id)_dictionaryForObject:(id)arg1 ;
-(id)_dictionaryFromCacheForObjectID:(id)arg1 ;
@end

