/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
#import <SearchUI/SearchUICardSectionView.h>

@class TLKGridRowView;

@interface SearchUITableRowCardView : SearchUICardSectionView

@property (nonatomic,retain) TLKGridRowView * contentView; 
+(UIEdgeInsets)defaultLayoutMargins;
+(BOOL)supportsRecyclingForCardSection:(id)arg1 ;
+(double)largestImageSizeForSection:(id)arg1 ;
+(BOOL)hasOnlyImages:(id)arg1 ;
+(BOOL)isAHeader:(id)arg1 ;
-(id)setupContentView;
-(void)updateWithRowModel:(id)arg1 ;
-(UIEdgeInsets)verticalBaselineInsetsForHeader:(BOOL)arg1 isCompactTable:(BOOL)arg2 ;
-(UIEdgeInsets)verticalBaselineInsetsForRowsWithCompactTable:(BOOL)arg1 ;
@end

