/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (nonatomic,readonly) NSArray * sections; 
@property (assign,nonatomic,__weak) id<NSFetchedResultsControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)controller:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5 ;
-(void)controllerDidChangeContent:(id)arg1 ;
-(NSManagedObjectContext *)managedObjectContext;
-(NSArray *)fetchedObjects;
-(NSFetchRequest *)fetchRequest;
-(id<NSFetchedResultsControllerDelegate>)delegate;
-(NSArray *)sections;
-(id)objectAtIndexPath:(id)arg1 ;
-(void)setDelegate:(id<NSFetchedResultsControllerDelegate>)arg1 ;
-(void)controllerWillChangeContent:(id)arg1 ;
-(NSArray *)propertyKeys;
-(void)setPropertyKeys:(NSArray *)arg1 ;
-(BOOL)performFetch:(id*)arg1 ;
-(id)indexPathForObject:(id)arg1 ;
-(id)initWithFetchRequest:(id)arg1 managedObjectContext:(id)arg2 sectionNameKeyPath:(id)arg3 cacheName:(id)arg4 ;
-(void)_updateCacheWithManagedObject:(id)arg1 ;
-(BOOL)_hasManagedObjectChanged:(id)arg1 ;
-(void)_removeObjectFromCacheWithId:(id)arg1 ;
-(id)_dictionaryForObject:(id)arg1 ;
-(id)_dictionaryFromCacheForObjectID:(id)arg1 ;
@end

