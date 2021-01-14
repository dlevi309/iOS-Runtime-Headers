/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(NSPredicate *)predicate;
-(id<_UIArrayControllerDelegate>)delegate;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSArray *)sortDescriptors;
-(void)setLastSnapshot:(NSOrderedSet *)arg1 ;
-(void)setDelegate:(id<_UIArrayControllerDelegate>)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(void)processUpdate:(id)arg1 changedObjects:(id)arg2 ;
-(BOOL)objectAttributeModified:(id)arg1 newObject:(id)arg2 ;
-(id)_computeUpdatesFromOld:(id)arg1 toNew:(id)arg2 changedItems:(id)arg3 ;
-(void)callUpdateHandler:(id)arg1 changeDictionary:(id)arg2 ;
-(void)invalidate;
-(NSOrderedSet *)lastSnapshot;
-(void)dealloc;
@end

