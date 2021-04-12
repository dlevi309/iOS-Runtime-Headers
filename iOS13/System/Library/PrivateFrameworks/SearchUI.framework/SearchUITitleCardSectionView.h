/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUICardSectionView.h>

@class TLKLabel, NUIContainerBoxView;

@interface SearchUITitleCardSectionView : SearchUICardSectionView {

	TLKLabel* _label;
	NUIContainerBoxView* _containerView;

}

@property (nonatomic,retain) TLKLabel * label;                                 //@synthesize label=_label - In the implementation block
@property (nonatomic,retain) NUIContainerBoxView * containerView;              //@synthesize containerView=_containerView - In the implementation block
+(BOOL)supportsRecyclingForCardSection:(id)arg1 ;
-(void)setLabel:(TLKLabel *)arg1 ;
-(TLKLabel *)label;
-(NUIContainerBoxView *)containerView;
-(void)setContainerView:(NUIContainerBoxView *)arg1 ;
-(id)setupContentView;
-(void)updateWithRowModel:(id)arg1 ;
@end

