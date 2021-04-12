/*
* Generated on Thursday, January 14, 2021 at 2:20:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <UIKitCore/_UIDataSourceSnapshotTranslating.h>

@class NSString;

@interface _UIDataSourceSnapshotter : NSObject <NSCopying, _UIDataSourceSnapshotTranslating> {

	vector<_NSRange, std::__1::allocator<_NSRange> >* _sectionRanges;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)snapshotterForSectionCountsProvider:(/*^block*/id)arg1 ;
+(id)snapshotterForDataSourceBackedView:(id)arg1 ;
+(id)snapshotterForSnapshot:(id)arg1 ;
-(id)snapshot;
-(BOOL)_decrementSectionCount:(long long)arg1 byCount:(long long)arg2 ;
-(id)initWithDataSourceBackedView:(id)arg1 ;
-(long long)numberOfItemsBeforeSection:(long long)arg1 ;
-(id)initWithSectionCounts:(id)arg1 ;
-(long long)numberOfItems;
-(id)indexPathForGlobalIndex:(long long)arg1 ;
-(long long)numberOfItemsInSection:(long long)arg1 ;
-(id)initWithSectionCountsProvider:(/*^block*/id)arg1 ;
-(long long)numberOfSections;
-(long long)globalIndexForIndexPath:(id)arg1 ;
-(BOOL)_deleteSection:(long long)arg1 ;
-(NSString *)description;
-(long long)sectionForGlobalIndex:(long long)arg1 ;
-(id)indexPathForAppendingInsertInSection:(long long)arg1 ;
-(BOOL)_incrementSectionCount:(long long)arg1 ;
-(BOOL)_insertSection:(long long)arg1 withInitialCount:(long long)arg2 ;
-(BOOL)indexPathIsSectionAppendingInsert:(id)arg1 ;
-(BOOL)_incrementSectionCount:(long long)arg1 byCount:(long long)arg2 ;
-(NSRange)rangeForSection:(long long)arg1 ;
-(BOOL)_decrementSectionCount:(long long)arg1 ;
-(void)_recomputeRangeLocations;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)_deleteAllSections;
-(BOOL)isEqual:(id)arg1 ;
@end

