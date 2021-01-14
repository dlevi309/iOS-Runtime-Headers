/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
#import <SearchUI/SearchUICardSectionView.h>
#import <libobjc.A.dylib/NUIContainerViewDelegate.h>

@class TLKSplitHeaderView, NSString;

@interface SearchUIScoreSummaryCardSectionView : SearchUICardSectionView <NUIContainerViewDelegate> {

	TLKSplitHeaderView* _splitHeaderView;

}

@property (nonatomic,retain) TLKSplitHeaderView * splitHeaderView;              //@synthesize splitHeaderView=_splitHeaderView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsRecyclingForCardSection:(id)arg1 ;
+(id)dragTitleForCardSection:(id)arg1 ;
+(int)defaultSeparatorStyleForCardSection:(id)arg1 ;
+(id)titleForScoreBoard:(id)arg1 forDisplay:(BOOL)arg2 ;
-(void)updateWithRowModel:(id)arg1 ;
-(CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(CGSize)arg2 forArrangedSubview:(id)arg3 ;
-(void)containerView:(id)arg1 willMeasureArrangedSubviewsFittingSize:(CGSize)arg2 forReason:(long long)arg3 ;
-(void)updateChevronVisible:(BOOL)arg1 leaveSpaceForChevron:(BOOL)arg2 ;
-(id)setupContentView;
-(void)setSplitHeaderView:(TLKSplitHeaderView *)arg1 ;
-(TLKSplitHeaderView *)splitHeaderView;
@end

