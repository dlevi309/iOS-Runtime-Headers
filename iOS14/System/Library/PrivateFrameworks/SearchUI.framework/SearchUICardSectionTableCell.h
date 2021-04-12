/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUITableViewCell.h>

@class SearchUICardSectionView;

@interface SearchUICardSectionTableCell : SearchUITableViewCell

@property (nonatomic,retain) SearchUICardSectionView * sizingContainer; 
@property (readonly) SearchUICardSectionView * cardSectionView; 
-(void)updateWithRowModel:(id)arg1 ;
-(void)tabKeyPressed;
-(void)setDelegate:(id)arg1 ;
-(id)leadingView;
-(SearchUICardSectionView *)cardSectionView;
-(id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2 ;
-(void)updateChevronVisible:(BOOL)arg1 leaveSpaceForChevron:(BOOL)arg2 ;
-(id)leadingTextView;
@end

