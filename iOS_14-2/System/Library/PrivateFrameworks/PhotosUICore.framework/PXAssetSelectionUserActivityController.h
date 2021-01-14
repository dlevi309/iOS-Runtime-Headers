/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/PXChangeObserver.h>
#import <libobjc.A.dylib/NSUserActivityDelegate.h>

@class PXSelectionSnapshot, PXSectionedSelectionManager, NSUserActivity, NSString;

@interface PXAssetSelectionUserActivityController : NSObject <PXChangeObserver, NSUserActivityDelegate> {

	os_unfair_lock_s _snapshotLock;
	BOOL _active;
	BOOL _hasSelection;
	PXSelectionSnapshot* _selectionSnapshot;
	PXSectionedSelectionManager* _selectionManager;
	NSUserActivity* _currentUserActivity;

}

@property (nonatomic,retain) NSUserActivity * currentUserActivity;                        //@synthesize currentUserActivity=_currentUserActivity - In the implementation block
@property (assign,nonatomic) BOOL hasSelection;                                           //@synthesize hasSelection=_hasSelection - In the implementation block
@property (nonatomic,retain) PXSelectionSnapshot * selectionSnapshot;                     //@synthesize selectionSnapshot=_selectionSnapshot - In the implementation block
@property (nonatomic,retain) PXSectionedSelectionManager * selectionManager;              //@synthesize selectionManager=_selectionManager - In the implementation block
@property (assign,getter=isActive,nonatomic) BOOL active;                                 //@synthesize active=_active - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(PXSectionedSelectionManager *)selectionManager;
-(PXSelectionSnapshot *)selectionSnapshot;
-(id)initWithSelectionManager:(id)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(id)init;
-(BOOL)hasSelection;
-(BOOL)isActive;
-(void)userActivityWillSave:(id)arg1 ;
-(void)setCurrentUserActivity:(NSUserActivity *)arg1 ;
-(void)setHasSelection:(BOOL)arg1 ;
-(void)_updateActivity;
-(void)setSelectionManager:(PXSectionedSelectionManager *)arg1 ;
-(NSUserActivity *)currentUserActivity;
-(void)setSelectionSnapshot:(PXSelectionSnapshot *)arg1 ;
-(void)dealloc;
-(void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void*)arg3 ;
@end

