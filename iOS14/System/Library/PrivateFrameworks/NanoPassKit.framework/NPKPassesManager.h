/*
* Generated on Thursday, January 14, 2021 at 2:28:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoPassKit.framework/NanoPassKit
*/

#import <libobjc.A.dylib/PKGroupsControllerDelegate.h>
#import <libobjc.A.dylib/PKGroupDelegate.h>
#import <libobjc.A.dylib/NPKPassesDataSource.h>

@class NSHashTable, PKGroupsController, NSArray, NPKStandaloneFirstUnlockCoordinator, NSString;

@interface NPKPassesManager : NSObject <PKGroupsControllerDelegate, PKGroupDelegate, NPKPassesDataSource> {

	BOOL _shouldMemoryMapImages;
	BOOL _shouldWaitForContentAndImageSets;
	int _notifyToken;
	NSHashTable* _observers;
	PKGroupsController* _groupsController;
	NSArray* _currentPasses;
	NSArray* _currentPaymentPasses;
	NPKStandaloneFirstUnlockCoordinator* _firstUnlockCoordinator;

}

@property (nonatomic,retain) NSHashTable * observers;                                                   //@synthesize observers=_observers - In the implementation block
@property (nonatomic,retain) PKGroupsController * groupsController;                                     //@synthesize groupsController=_groupsController - In the implementation block
@property (nonatomic,retain) NSArray * currentPasses;                                                   //@synthesize currentPasses=_currentPasses - In the implementation block
@property (nonatomic,retain) NSArray * currentPaymentPasses;                                            //@synthesize currentPaymentPasses=_currentPaymentPasses - In the implementation block
@property (nonatomic,retain) NPKStandaloneFirstUnlockCoordinator * firstUnlockCoordinator;              //@synthesize firstUnlockCoordinator=_firstUnlockCoordinator - In the implementation block
@property (assign,nonatomic) BOOL shouldMemoryMapImages;                                                //@synthesize shouldMemoryMapImages=_shouldMemoryMapImages - In the implementation block
@property (assign,nonatomic) BOOL shouldWaitForContentAndImageSets;                                     //@synthesize shouldWaitForContentAndImageSets=_shouldWaitForContentAndImageSets - In the implementation block
@property (assign,nonatomic) int notifyToken;                                                           //@synthesize notifyToken=_notifyToken - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)unregisterObserver:(id)arg1 ;
-(void)registerObserver:(id)arg1 ;
-(NSHashTable *)observers;
-(void)setNotifyToken:(int)arg1 ;
-(id)init;
-(id)paymentPasses;
-(void)_notifyObservers:(/*^block*/id)arg1 ;
-(PKGroupsController *)groupsController;
-(void)group:(id)arg1 didUpdatePass:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)group:(id)arg1 didInsertPass:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)group:(id)arg1 didMovePassFromIndex:(unsigned long long)arg2 toIndex:(unsigned long long)arg3 ;
-(void)group:(id)arg1 didRemovePass:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(int)notifyToken;
-(void)groupsController:(id)arg1 didInsertGroup:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)groupsController:(id)arg1 didMoveGroup:(id)arg2 fromIndex:(unsigned long long)arg3 toIndex:(unsigned long long)arg4 ;
-(void)groupsController:(id)arg1 didRemoveGroup:(id)arg2 atIndex:(unsigned long long)arg3 ;
-(void)enableRemoteUpdates;
-(void)setObservers:(NSHashTable *)arg1 ;
-(id)passes;
-(void)removePass:(id)arg1 ;
-(void)setGroupsController:(PKGroupsController *)arg1 ;
-(void)reloadPasses;
-(void)reloadPassesWithCompletion:(/*^block*/id)arg1 ;
-(void)dealloc;
-(id)initWithShouldMemoryMapImages:(BOOL)arg1 shouldWaitForContentAndImageSets:(BOOL)arg2 ;
-(void)_handleObjectSettingsChanged:(id)arg1 ;
-(void)_loadPasses;
-(void)_reloadPasses;
-(void)_updateCurrentPasses;
-(NSArray *)currentPasses;
-(NSArray *)currentPaymentPasses;
-(void)_reloadPassesWithCompletion:(/*^block*/id)arg1 ;
-(void)setCurrentPasses:(NSArray *)arg1 ;
-(void)setCurrentPaymentPasses:(NSArray *)arg1 ;
-(id)_reorderedPassesForDisplay:(id)arg1 ;
-(void)_loadContentAndImageSetsForPass:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)passForUniqueID:(id)arg1 ;
-(BOOL)shouldAllowMovingItemAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(void)movePassAtIndex:(unsigned long long)arg1 toIndex:(unsigned long long)arg2 ;
-(void)setDefaultPaymentPass:(id)arg1 ;
-(void)suppressRemoteUpdates;
-(NPKStandaloneFirstUnlockCoordinator *)firstUnlockCoordinator;
-(void)setFirstUnlockCoordinator:(NPKStandaloneFirstUnlockCoordinator *)arg1 ;
-(BOOL)shouldMemoryMapImages;
-(void)setShouldMemoryMapImages:(BOOL)arg1 ;
-(BOOL)shouldWaitForContentAndImageSets;
-(void)setShouldWaitForContentAndImageSets:(BOOL)arg1 ;
@end

