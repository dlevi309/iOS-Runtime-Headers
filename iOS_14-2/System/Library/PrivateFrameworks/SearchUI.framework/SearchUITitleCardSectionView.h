/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)updateWithRowModel:(id)arg1 ;
-(void)setContainerView:(NUIContainerBoxView *)arg1 ;
-(NUIContainerBoxView *)containerView;
-(void)setLabel:(TLKLabel *)arg1 ;
-(id)setupContentView;
-(TLKLabel *)label;
@end

