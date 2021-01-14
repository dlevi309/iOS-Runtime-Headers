/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
#import <SearchUI/SearchUICardSectionView.h>

@class TLKGridRowView;

@interface SearchUITableRowCardView : SearchUICardSectionView

@property (nonatomic,retain) TLKGridRowView * contentView; 
+(BOOL)supportsRecyclingForCardSection:(id)arg1 ;
+(BOOL)hasOnlyImages:(id)arg1 ;
+(double)largestImageSizeForSection:(id)arg1 ;
+(BOOL)isAHeader:(id)arg1 ;
+(UIEdgeInsets)defaultLayoutMargins;
-(void)updateWithRowModel:(id)arg1 ;
-(UIEdgeInsets)verticalBaselineInsetsForHeader:(BOOL)arg1 isCompactTable:(BOOL)arg2 ;
-(UIEdgeInsets)verticalBaselineInsetsForRowsWithCompactTable:(BOOL)arg1 ;
-(id)setupContentView;
-(id)leadingTextView;
@end

