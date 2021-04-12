/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsUI.framework/CloudDocsUI
*/

#import <UIKitCore/_UIArrayController.h>
#import <libobjc.A.dylib/_UIDocumentPickerVnodeDispatchSourceDelegate.h>
#import <libobjc.A.dylib/_UIDocumentPickerDirectoryObserver.h>

@protocol OS_dispatch_queue;
@class NSArray, NSOrderedSet, NSPredicate, NSObject, NSMutableDictionary, NSDate, NSOperationQueue, NSString;

@interface _UIDocumentPickerLocalDirectoryObserver : _UIArrayController <_UIDocumentPickerVnodeDispatchSourceDelegate, _UIDocumentPickerDirectoryObserver> {

	NSArray* _sortDescriptors;
	NSOrderedSet* _staticItems;
	NSPredicate* _queryPredicate;
	NSObject*<OS_dispatch_queue> _queryDispatchQueue;
	NSArray* _sources;
	NSMutableDictionary* _resultsForSources;
	BOOL _updateScheduled;
	BOOL _afterInitialUpdate;
	NSDate* _lastSnapshotDate;
	NSOperationQueue* _queryWorkerQueue;

}

@property (nonatomic,retain) NSDate * lastSnapshotDate;                        //@synthesize lastSnapshotDate=_lastSnapshotDate - In the implementation block
@property (nonatomic,retain) NSOperationQueue * queryWorkerQueue;              //@synthesize queryWorkerQueue=_queryWorkerQueue - In the implementation block
@property (assign,nonatomic) BOOL afterInitialUpdate;                          //@synthesize afterInitialUpdate=_afterInitialUpdate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) NSOrderedSet * staticItems; 
@property (nonatomic,retain) NSPredicate * queryPredicate; 
-(void)initialUpdate;
-(NSString *)description;
-(void)setStaticItems:(NSOrderedSet *)arg1 ;
-(BOOL)objectAttributeModified:(id)arg1 newObject:(id)arg2 ;
-(void)callUpdateHandler:(id)arg1 changeDictionary:(id)arg2 ;
-(void)invalidate;
-(NSOrderedSet *)staticItems;
-(void)dealloc;
-(void)setQueryPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)queryPredicate;
-(id)isVisiblePredicate;
-(id)initWithScopes:(id)arg1 delegate:(id)arg2 ;
-(NSOperationQueue *)queryWorkerQueue;
-(BOOL)afterInitialUpdate;
-(NSDate *)lastSnapshotDate;
-(void)setLastSnapshotDate:(NSDate *)arg1 ;
-(void)setAfterInitialUpdate:(BOOL)arg1 ;
-(void)setQueryWorkerQueue:(NSOperationQueue *)arg1 ;
-(void)updateResultsForSource:(id)arg1 ;
-(id)gatherResultsForSource:(id)arg1 ;
-(id)gatherResults;
-(void)dispatchSourceDidReceiveEvent:(id)arg1 ;
@end

