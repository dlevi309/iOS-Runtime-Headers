/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(int)separatorStyleForCardSection:(id)arg1 ;
+(id)titleForScoreBoard:(id)arg1 forDisplay:(BOOL)arg2 ;
-(CGSize)containerView:(id)arg1 systemLayoutSizeFittingSize:(CGSize)arg2 forArrangedSubview:(id)arg3 ;
-(id)setupContentView;
-(void)updateChevronVisible:(BOOL)arg1 leaveSpaceForChevron:(BOOL)arg2 ;
-(void)updateWithRowModel:(id)arg1 ;
-(void)setSplitHeaderView:(TLKSplitHeaderView *)arg1 ;
-(TLKSplitHeaderView *)splitHeaderView;
@end

