/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/PXSectionedSelectionManagerSnapshotValidator.h>

@protocol PXSelectionCoordinatorDelegate;
@class PXSectionedSelectionManager, NSNumber, NSMutableOrderedSet, NSMapTable, NSOrderedSet, NSString;

@interface PXSelectionCoordinator : NSObject <PXChangeObserver, PXSectionedSelectionManagerSnapshotValidator> {

	PXSectionedSelectionManager* _currentlyMutatingSelectionManager;
	long long _currentlyMutatingObservationCount;
	SCD_Struct_PX51 _delegateRespondsTo;
	BOOL _selectionLimitReached;
	NSNumber* _selectionCountLimit;
	id<PXSelectionCoordinatorDelegate> _delegate;
	NSMutableOrderedSet* _mutableSelectedObjectIDs;
	NSMapTable* _stateByManager;

}

@property (nonatomic,readonly) NSMutableOrderedSet * mutableSelectedObjectIDs;                //@synthesize mutableSelectedObjectIDs=_mutableSelectedObjectIDs - In the implementation block
@property (nonatomic,readonly) NSMapTable * stateByManager;                                   //@synthesize stateByManager=_stateByManager - In the implementation block
@property (assign,nonatomic) BOOL selectionLimitReached;                                      //@synthesize selectionLimitReached=_selectionLimitReached - In the implementation block
@property (nonatomic,retain) NSNumber * selectionCountLimit;                                  //@synthesize selectionCountLimit=_selectionCountLimit - In the implementation block
@property (nonatomic,readonly) NSOrderedSet * selectedObjectIDs; 
@property (assign,nonatomic,__weak) id<PXSelectionCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(NSNumber *)selectionCountLimit;
-(id<PXSelectionCoordinatorDelegate>)delegate;
-(NSOrderedSet *)selectedObjectIDs;
-(id)selectionManager:(id)arg1 validateSnapshot:(id)arg2 ;
-(void)_updateSelectionLimitReached;
-(void)_startMutatingSelectionManager:(id)arg1 ;
-(void)_stopMutatingSelectionManager:(id)arg1 ;
-(id)checkOutSelectionManagerForDataSourceManager:(id)arg1 ;
-(void)checkInSelectionManager:(id)arg1 ;
-(NSMapTable *)stateByManager;
-(void)_updateSelectionManagerToGlobalState:(id)arg1 managerState:(id)arg2 ;
-(void)_handleDataSourceChangeToSelectionManager:(id)arg1 state:(id)arg2 ;
-(void)_handleSelectionChangeToSelectionManager:(id)arg1 state:(id)arg2 ;
-(BOOL)selectionLimitReached;
-(NSMutableOrderedSet *)mutableSelectedObjectIDs;
-(void)_modifySelectionWithRemovedOIDs:(id)arg1 insertedOIDs:(id)arg2 originatingSelectionManager:(id)arg3 ;
-(void)_performChangesToCoordinatedSelectionManagersWithRemovedOIDs:(id)arg1 insertedOIDs:(id)arg2 originatingSelectionManager:(id)arg3 ;
-(BOOL)test_validateInternalState;
-(void)setDelegate:(id<PXSelectionCoordinatorDelegate>)arg1 ;
-(void)setSelectionLimitReached:(BOOL)arg1 ;
-(BOOL)modifySelectionWithRemovedOIDs:(id)arg1 insertedOIDs:(id)arg2 ;
-(void)setSelectionCountLimit:(NSNumber *)arg1 ;
-(id)initWithSelectedOIDs:(id)arg1 ;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

