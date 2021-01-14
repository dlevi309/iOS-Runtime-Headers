/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PodcastsKit.framework/PodcastsKit
*/

#import <libobjc.A.dylib/NSFetchedResultsControllerDelegate.h>
#import <libobjc.A.dylib/MTQueryObserver.h>

@class NSFetchedResultsController, NSString, NSMutableDictionary;

@interface MTBaseQueryObserver : NSObject <NSFetchedResultsControllerDelegate, MTQueryObserver> {

	NSFetchedResultsController* _frc;
	BOOL _isObserving;
	BOOL _stopCalled;
	NSString* _identifier;
	NSMutableDictionary* _handlers;

}

@property (nonatomic,retain) NSMutableDictionary * handlers;              //@synthesize handlers=_handlers - In the implementation block
@property (assign,nonatomic) BOOL isObserving;                            //@synthesize isObserving=_isObserving - In the implementation block
@property (assign,nonatomic) BOOL stopCalled;                             //@synthesize stopCalled=_stopCalled - In the implementation block
@property (nonatomic,copy) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)fetchedResultsControllerClass;
-(void)startObserving;
-(NSMutableDictionary *)handlers;
-(id)_frc;
-(id)managedObjectContext;
-(void)setHandlers:(NSMutableDictionary *)arg1 ;
-(id)predicate;
-(void)setPredicate:(id)arg1 ;
-(BOOL)isObserving;
-(void)stop;
-(id)sortDescriptors;
-(id)uuids;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setIsObserving:(BOOL)arg1 ;
-(NSString *)identifier;
-(id)initWithFetchRequest:(id)arg1 managedObjectContext:(id)arg2 ;
-(id)initWithFetchRequest:(id)arg1 ;
-(void)dealloc;
-(id)initWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 ;
-(id)addResultsChangedHandler:(id)arg1 ;
-(void)results:(/*^block*/id)arg1 ;
-(id)initWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 limit:(unsigned long long)arg4 ;
-(id)initWithEntityName:(id)arg1 predicate:(id)arg2 managedObjectContext:(id)arg3 ;
-(id)initWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 limit:(unsigned long long)arg4 returnObjectsAsFaults:(BOOL)arg5 ;
-(id)initWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 limit:(unsigned long long)arg4 batchSize:(unsigned long long)arg5 propertiesToFetch:(id)arg6 managedObjectContext:(id)arg7 ;
-(void)removeAllResultsChangedHandlers;
-(void)setStopCalled:(BOOL)arg1 ;
-(id)initWithEntityName:(id)arg1 predicate:(id)arg2 ;
-(id)initWithEntityName:(id)arg1 predicate:(id)arg2 background:(BOOL)arg3 ;
-(id)initWithEntityName:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 limit:(unsigned long long)arg4 batchSize:(unsigned long long)arg5 propertiesToFetch:(id)arg6 ;
-(void)refetch:(/*^block*/id)arg1 ;
-(void)removeResultsChangedHandler:(id)arg1 ;
-(BOOL)stopCalled;
@end

