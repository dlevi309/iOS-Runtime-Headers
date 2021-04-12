/*
* Generated on Monday, March 1, 2021 at 2:30:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class __UIDiffableDataSourceSnapshot, NSArray;

@interface NSDiffableDataSourceSnapshot : NSObject <NSCopying> {

	__UIDiffableDataSourceSnapshot* _impl;

}

@property (nonatomic,readonly) __UIDiffableDataSourceSnapshot * impl;              //@synthesize impl=_impl - In the implementation block
@property (nonatomic,readonly) long long numberOfItems; 
@property (nonatomic,readonly) long long numberOfSections; 
@property (nonatomic,readonly) NSArray * sectionIdentifiers; 
@property (nonatomic,readonly) NSArray * itemIdentifiers; 
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDataSource:(id)arg1 ;
-(long long)numberOfSections;
-(long long)numberOfItemsInSection:(id)arg1 ;
-(long long)numberOfItems;
-(id)itemIdentifiersInSectionWithIdentifier:(id)arg1 ;
-(NSArray *)sectionIdentifiers;
-(NSArray *)itemIdentifiers;
-(id)sectionIdentifierForSectionContainingItemIdentifier:(id)arg1 ;
-(long long)indexOfItemIdentifier:(id)arg1 ;
-(long long)indexOfSectionIdentifier:(id)arg1 ;
-(void)appendItemsWithIdentifiers:(id)arg1 ;
-(void)appendItemsWithIdentifiers:(id)arg1 intoSectionWithIdentifier:(id)arg2 ;
-(void)insertItemsWithIdentifiers:(id)arg1 beforeItemWithIdentifier:(id)arg2 ;
-(void)insertItemsWithIdentifiers:(id)arg1 afterItemWithIdentifier:(id)arg2 ;
-(void)deleteItemsWithIdentifiers:(id)arg1 ;
-(void)deleteAllItems;
-(void)moveItemWithIdentifier:(id)arg1 beforeItemWithIdentifier:(id)arg2 ;
-(void)moveItemWithIdentifier:(id)arg1 afterItemWithIdentifier:(id)arg2 ;
-(void)reloadItemsWithIdentifiers:(id)arg1 ;
-(void)appendSectionsWithIdentifiers:(id)arg1 ;
-(void)insertSectionsWithIdentifiers:(id)arg1 beforeSectionWithIdentifier:(id)arg2 ;
-(void)insertSectionsWithIdentifiers:(id)arg1 afterSectionWithIdentifier:(id)arg2 ;
-(void)deleteSectionsWithIdentifiers:(id)arg1 ;
-(void)moveSectionWithIdentifier:(id)arg1 beforeSectionWithIdentifier:(id)arg2 ;
-(void)moveSectionWithIdentifier:(id)arg1 afterSectionWithIdentifier:(id)arg2 ;
-(void)reloadSectionsWithIdentifiers:(id)arg1 ;
-(__UIDiffableDataSourceSnapshot *)impl;
@end

