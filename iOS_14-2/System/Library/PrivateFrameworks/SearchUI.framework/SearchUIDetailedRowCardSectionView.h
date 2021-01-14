/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
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
+(BOOL)supportsCustomUserReportRequestAfforance;
-(void)updateWithRowModel:(id)arg1 ;
-(void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(CGSize)arg2 forReason:(long long)arg3 ;
-(id)leadingView;
-(void)setFeedbackDelegate:(id)arg1 ;
-(void)updateChevronVisible:(BOOL)arg1 leaveSpaceForChevron:(BOOL)arg2 ;
-(id)setupContentView;
-(void)footnoteButtonPressed;
-(id)leadingTextView;
@end

