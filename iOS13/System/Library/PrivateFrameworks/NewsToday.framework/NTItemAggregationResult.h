/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSDictionary, NSSet, NSArray;

@interface NTItemAggregationResult : NSObject <NSCopying> {

	NSDictionary* _aggregatedItemsBySectionDescriptor;
	NSSet* _itemIDsOfLeadingCells;
	NSDictionary* _slotAllocationByDynamicSlotItemID;
	NSArray* _unusedSectionDescriptors;

}

@property (nonatomic,copy) NSDictionary * aggregatedItemsBySectionDescriptor;              //@synthesize aggregatedItemsBySectionDescriptor=_aggregatedItemsBySectionDescriptor - In the implementation block
@property (nonatomic,copy) NSSet * itemIDsOfLeadingCells;                                  //@synthesize itemIDsOfLeadingCells=_itemIDsOfLeadingCells - In the implementation block
@property (nonatomic,copy) NSDictionary * slotAllocationByDynamicSlotItemID;               //@synthesize slotAllocationByDynamicSlotItemID=_slotAllocationByDynamicSlotItemID - In the implementation block
@property (nonatomic,copy) NSArray * unusedSectionDescriptors;                             //@synthesize unusedSectionDescriptors=_unusedSectionDescriptors - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSSet *)itemIDsOfLeadingCells;
-(NSDictionary *)slotAllocationByDynamicSlotItemID;
-(void)setItemIDsOfLeadingCells:(NSSet *)arg1 ;
-(void)setSlotAllocationByDynamicSlotItemID:(NSDictionary *)arg1 ;
-(NSDictionary *)aggregatedItemsBySectionDescriptor;
-(NSArray *)unusedSectionDescriptors;
-(id)initWithAggregatedItemsBySectionDescriptor:(id)arg1 itemIDsOfLeadingCells:(id)arg2 slotAllocationByDynamicSlotItemID:(id)arg3 unusedSectionDescriptors:(id)arg4 ;
-(void)setAggregatedItemsBySectionDescriptor:(NSDictionary *)arg1 ;
-(void)setUnusedSectionDescriptors:(NSArray *)arg1 ;
@end

