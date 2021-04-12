/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUICardSectionView.h>

@class TLKStackView, SearchUILabel;

@interface SearchUICompactCardSectionView : SearchUICardSectionView {

	TLKStackView* _stackView;
	SearchUILabel* _titleLabel;
	SearchUILabel* _subtitleLabel;

}

@property (nonatomic,retain) TLKStackView * stackView;                   //@synthesize stackView=_stackView - In the implementation block
@property (nonatomic,retain) SearchUILabel * titleLabel;                 //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) SearchUILabel * subtitleLabel;              //@synthesize subtitleLabel=_subtitleLabel - In the implementation block
+(BOOL)supportsRecyclingForCardSection:(id)arg1 ;
-(SearchUILabel *)titleLabel;
-(TLKStackView *)stackView;
-(void)setTitleLabel:(SearchUILabel *)arg1 ;
-(void)setStackView:(TLKStackView *)arg1 ;
-(void)setSubtitleLabel:(SearchUILabel *)arg1 ;
-(SearchUILabel *)subtitleLabel;
-(id)setupContentView;
-(void)updateWithRowModel:(id)arg1 ;
-(id)richTextForSearchUIText:(id)arg1 withMaxLines:(unsigned long long)arg2 ;
@end

