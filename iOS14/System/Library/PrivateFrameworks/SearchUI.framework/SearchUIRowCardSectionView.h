/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUICardSectionView.h>

@class TLKSimpleRowView;

@interface SearchUIRowCardSectionView : SearchUICardSectionView

@property (nonatomic,retain) TLKSimpleRowView * contentView; 
+(BOOL)supportsRecyclingForCardSection:(id)arg1 ;
+(id)dragTitleForCardSection:(id)arg1 ;
+(id)dragSubtitleForCardSection:(id)arg1 ;
+(BOOL)hasLeadingImageForCardSection:(id)arg1 ;
+(BOOL)prefersNoSeparatorAboveCardSection:(id)arg1 ;
-(void)updateWithRowModel:(id)arg1 ;
-(id)setupContentView;
-(id)leadingTextView;
@end

