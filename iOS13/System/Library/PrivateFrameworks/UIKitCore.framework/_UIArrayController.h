/*
* Generated on Monday, March 1, 2021 at 2:30:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol _UIArrayControllerDelegate;
@class NSArray, NSPredicate, NSOperationQueue, NSOrderedSet;

@interface _UIArrayController : NSObject {

	BOOL _firstUpdateSent;
	BOOL _invalidated;
	NSArray* _sortDescriptors;
	NSPredicate* _predicate;
	id<_UIArrayControllerDelegate> _delegate;
	NSOperationQueue* _operationQueue;
	NSOrderedSet* _lastSnapshot;

}

@property (assign,nonatomic,__weak) id<_UIArrayControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSOrderedSet * lastSnapshot;                                   //@synthesize lastSnapshot=_lastSnapshot - In the implementation block
@property (nonatomic,retain) NSArray * sortDescriptors;                                   //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (nonatomic,retain) NSPredicate * predicate;                                     //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,retain) NSOperationQueue * operationQueue;                           //@synthesize operationQueue=_operationQueue - In the implementation block
-(void)dealloc;
-(void)invalidate;
-(id<_UIArrayControllerDelegate>)delegate;
-(void)setDelegate:(id<_UIArrayControllerDelegate>)arg1 ;
-(NSOperationQueue *)operationQueue;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(NSArray *)sortDescriptors;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)setLastSnapshot:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)lastSnapshot;
-(void)processUpdate:(id)arg1 changedObjects:(id)arg2 ;
-(BOOL)objectAttributeModified:(id)arg1 newObject:(id)arg2 ;
-(id)_computeUpdatesFromOld:(id)arg1 toNew:(id)arg2 changedItems:(id)arg3 ;
-(void)callUpdateHandler:(id)arg1 changeDictionary:(id)arg2 ;
@end

