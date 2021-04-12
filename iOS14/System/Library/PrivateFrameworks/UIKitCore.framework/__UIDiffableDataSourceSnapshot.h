/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/__UIDiffableDataSource.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol _UIDiffableDataSourceState;
@class NSMutableArray;

@interface __UIDiffableDataSourceSnapshot : __UIDiffableDataSource <NSCopying> {

	id<_UIDiffableDataSourceState> _state;
	NSMutableArray* _pendingSnapshotUpdates;

}
-(id)sectionIdentifierForSectionContainingItemIdentifier:(id)arg1 ;
-(void)appendSectionWithIdentifier:(id)arg1 ;
-(void)reloadSectionsWithIdentifiers:(id)arg1 ;
-(void)deleteSectionsWithIdentifiers:(id)arg1 ;
-(id)initWithState:(id)arg1 ;
-(id)sectionIdentifiers;
-(void)appendItemsWithIdentifiers:(id)arg1 intoSectionWithIdentifier:(id)arg2 ;
-(void)deleteAllItems;
-(void)appendItemsWithIdentifiers:(id)arg1 ;
-(void)appendSectionsWithIdentifiers:(id)arg1 ;
-(void)reloadItemsWithIdentifiers:(id)arg1 ;
-(void)insertSectionsWithIdentifiers:(id)arg1 beforeSectionWithIdentifier:(id)arg2 ;
-(void)insertItemsWithIdentifiers:(id)arg1 beforeItemWithIdentifier:(id)arg2 ;
-(id)itemIdentifiersInSectionWithIdentifier:(id)arg1 ;
-(void)moveItemWithIdentifier:(id)arg1 beforeItemWithIdentifier:(id)arg2 ;
-(void)moveSectionWithIdentifier:(id)arg1 afterSectionWithIdentifier:(id)arg2 ;
-(void)insertItemsWithIdentifiers:(id)arg1 afterItemWithIdentifier:(id)arg2 ;
-(void)insertSectionsWithIdentifiers:(id)arg1 afterSectionWithIdentifier:(id)arg2 ;
-(long long)indexOfItemIdentifier:(id)arg1 ;
-(void)insertSectionWithIdentifier:(id)arg1 afterSectionWithIdentifier:(id)arg2 ;
-(void)moveItemWithIdentifier:(id)arg1 afterItemWithIdentifier:(id)arg2 ;
-(void)insertSectionWithIdentifier:(id)arg1 beforeSectionWithIdentifier:(id)arg2 ;
-(void)moveSectionWithIdentifier:(id)arg1 beforeSectionWithIdentifier:(id)arg2 ;
-(long long)indexOfSectionIdentifier:(id)arg1 ;
-(void)deleteItemsWithIdentifiers:(id)arg1 ;
-(id)itemIdentifiers;
-(id)init;
-(long long)numberOfItems;
-(long long)numberOfItemsInSection:(id)arg1 ;
-(void)_commitUpdateAtomic:(id)arg1 ;
-(id)itemIdentifierForIndexPath:(id)arg1 ;
-(long long)numberOfSections;
-(id)indexPathForItemIdentifier:(id)arg1 ;
-(void)_validateReloadUpdateThrowingIfNeeded:(id)arg1 ;
-(id)description;
-(id)state;
-(id)pendingSnapshotUpdates;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

