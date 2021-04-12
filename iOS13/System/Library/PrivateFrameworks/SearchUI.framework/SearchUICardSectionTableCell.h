/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUITableViewCell.h>

@class SearchUICardSectionView;

@interface SearchUICardSectionTableCell : SearchUITableViewCell

@property (nonatomic,retain) SearchUICardSectionView * sizingContainer; 
@property (readonly) SearchUICardSectionView * cardSectionView; 
-(void)setDelegate:(id)arg1 ;
-(id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2 ;
-(void)updateChevronVisible:(BOOL)arg1 leaveSpaceForChevron:(BOOL)arg2 ;
-(void)updateWithRowModel:(id)arg1 ;
-(SearchUICardSectionView *)cardSectionView;
@end

