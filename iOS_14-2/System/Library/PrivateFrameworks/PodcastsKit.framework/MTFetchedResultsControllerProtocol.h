/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/

@class NSFetchRequest, NSArray, NSManagedObjectContext;


@protocol MTFetchedResultsControllerProtocol
@property (nonatomic,readonly) NSFetchRequest * fetchRequest; 
@property (nonatomic,copy) NSArray * propertyKeys; 
@property (nonatomic,readonly) NSManagedObjectContext * managedObjectContext; 
@property (nonatomic,readonly) NSArray * fetchedObjects; 
@property (assign,nonatomic,__weak) id<NSFetchedResultsControllerDelegate> delegate; 
@required
-(NSManagedObjectContext *)managedObjectContext;
-(NSArray *)fetchedObjects;
-(NSFetchRequest *)fetchRequest;
-(id<NSFetchedResultsControllerDelegate>)delegate;
-(id)objectAtIndexPath:(id)arg1;
-(void)setDelegate:(id)arg1;
-(NSArray *)propertyKeys;
-(void)setPropertyKeys:(id)arg1;
-(BOOL)performFetch:(id*)arg1;
-(id)indexPathForObject:(id)arg1;
-(id)initWithFetchRequest:(id)arg1 managedObjectContext:(id)arg2 sectionNameKeyPath:(id)arg3 cacheName:(id)arg4;

@end

