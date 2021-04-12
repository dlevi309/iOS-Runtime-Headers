/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUICardSectionView.h>
#import <SearchUI/SearchUIDetailedViewDelegate.h>

@class SearchUIDetailedView, SearchUIDetailedRowModel, NSString;

@interface SearchUIDetailedRowCardSectionView : SearchUICardSectionView <SearchUIDetailedViewDelegate>

@property (nonatomic,retain) SearchUIDetailedView * contentView; 
@property (nonatomic,retain) SearchUIDetailedRowModel * rowModel; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsRecyclingForCardSection:(id)arg1 ;
-(id)setupContentView;
-(void)footnoteButtonPressed;
-(void)updateChevronVisible:(BOOL)arg1 leaveSpaceForChevron:(BOOL)arg2 ;
-(void)updateWithRowModel:(id)arg1 ;
-(void)setFeedbackDelegate:(id)arg1 ;
@end

