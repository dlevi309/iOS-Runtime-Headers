/*
* Generated on Monday, March 1, 2021 at 2:35:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/

#import <libobjc.A.dylib/NSFetchedResultsControllerDelegate.h>

@class NSFetchedResultsController, NSString, NSMutableDictionary;

@interface MTBaseQueryObserver : NSObject <NSFetchedResultsControllerDelegate> {

	NSFetchedResultsController* _frc;
	BOOL _isObserving;
	NSString* _identifier;
	NSMutableDictionary* _handlers;

}

@property (nonatomic,retain) NSMutableDictionary * handlers;              //@synthesize handlers=_handlers - In the implementation block
@property (assign,nonatomic) BOOL isObserving;                            //@synthesize isObserving=_isObserving - In the implementation block
@property (nonatomic,copy) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)fetchedResultsControllerClass;
-(NSString *)identifier;
-(void)setPredicate:(id)arg1 ;
-(id)predicate;
-(id)sortDescriptors;
-(void)stop;
-(void)setIdentifier:(NSString *)arg1 ;
-(id)initWithFetchRequest:(id)arg1 ;
-(id)managedObjectContext;
-(void)startObserving;
-(NSMutableDictionary *)handlers;
-(void)setHandlers:(NSMutableDictionary *)arg1 ;
-(BOOL)isObserving;
-(id)uuids;
-(void)setIsObserving:(BOOL)arg1 ;
-(id)initWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 ;
-(id)addResultsChangedHandler:(id)arg1 ;
-(void)results:(/*^block*/id)arg1 ;
-(id)_frc;
-(id)initWithEntityName:(id)arg1 predicate:(id)arg2 managedObjectContext:(id)arg3 ;
-(id)initWithFetchRequest:(id)arg1 managedObjectContext:(id)arg2 ;
-(id)initWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 returnObjectsAsFaults:(BOOL)arg4 ;
-(void)removeAllResultsChangedHandlers;
-(id)initWithEntityName:(id)arg1 predicate:(id)arg2 ;
-(id)initWithEntityName:(id)arg1 predicate:(id)arg2 background:(BOOL)arg3 ;
-(id)initWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 batchSize:(unsigned long long)arg4 propertiesToFetch:(id)arg5 ;
-(void)removeResultsChangedHandler:(id)arg1 ;
@end

