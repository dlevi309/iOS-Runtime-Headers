/*
* Generated on Monday, March 1, 2021 at 2:30:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <UIKitCore/_UIDataSourceSnapshot.h>

@interface _UIDataSourceSnapshotter : NSObject <NSCopying, _UIDataSourceSnapshot> {

	vector<_NSRange, std::__1::allocator<_NSRange> >* _sectionRanges;

}
+(id)snapshotWithSectionCountsProvider:(/*^block*/id)arg1 ;
+(id)snapshotForDataSourceBackedView:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)snapshot;
-(long long)globalIndexForIndexPath:(id)arg1 ;
-(long long)numberOfSections;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(id)initWithSectionCounts:(id)arg1 ;
-(long long)numberOfItems;
-(NSRange)rangeForSection:(long long)arg1 ;
-(long long)sectionForGlobalIndex:(long long)arg1 ;
-(id)indexPathForGlobalIndex:(long long)arg1 ;
-(BOOL)_insertSection:(long long)arg1 withInitialCount:(long long)arg2 ;
-(BOOL)_incrementSectionCount:(long long)arg1 byCount:(long long)arg2 ;
-(BOOL)_deleteSection:(long long)arg1 ;
-(BOOL)_decrementSectionCount:(long long)arg1 byCount:(long long)arg2 ;
-(BOOL)_decrementSectionCount:(long long)arg1 ;
-(BOOL)_incrementSectionCount:(long long)arg1 ;
-(id)initWithSectionCountsProvider:(/*^block*/id)arg1 ;
-(long long)numberOfItemsBeforeSection:(long long)arg1 ;
-(BOOL)indexPathIsSectionAppendingInsert:(id)arg1 ;
-(id)indexPathForAppendingInsertInSection:(long long)arg1 ;
-(id)initWithDataSourceBackedView:(id)arg1 ;
-(void)_recomputeRangeLocations;
-(BOOL)_deleteAllSections;
@end

