/*
* Generated on Thursday, January 14, 2021 at 2:22:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, PUViewModelChange, NSHashTable;

@interface PUViewModel : NSObject {

	NSObject*<OS_dispatch_queue> _observerQueue;
	long long _nestedChanges;
	NSMutableArray* _pendingChangeBlocks;
	long long _numAppliedPendingChanges;
	PUViewModelChange* _currentChange;
	BOOL __publishingChanges;
	NSHashTable* __changeObservers;

}

@property (assign,setter=_setPublishingChanges:,getter=_isPublishingChanges,nonatomic) BOOL _publishingChanges;              //@synthesize _publishingChanges=__publishingChanges - In the implementation block
@property (nonatomic,readonly) NSHashTable * _changeObservers;                                                               //@synthesize _changeObservers=__changeObservers - In the implementation block
@property (nonatomic,readonly) PUViewModelChange * currentChange; 
@property (nonatomic,readonly) PUViewModelChange * currentChangeIfExists; 
-(void)registerChangeObserver:(id)arg1 ;
-(PUViewModelChange *)currentChange;
-(void)unregisterChangeObserver:(id)arg1 ;
-(id)init;
-(void)didPerformChanges;
-(NSHashTable *)_changeObservers;
-(void)assertInsideChangesBlock;
-(id)debugDetailedDescription;
-(PUViewModelChange *)currentChangeIfExists;
-(void)didPublishChanges;
-(void)_willChange;
-(id)newViewModelChange;
-(void)_didChange;
-(void)performChanges:(/*^block*/id)arg1 ;
-(void)willPublishChanges;
-(void)_applyPendingChanges;
-(BOOL)_isPublishingChanges;
-(void)_setPublishingChanges:(BOOL)arg1 ;
-(void)_publishChanges;
@end

