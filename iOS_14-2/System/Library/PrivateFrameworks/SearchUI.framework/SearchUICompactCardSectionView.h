/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setSubtitleLabel:(SearchUILabel *)arg1 ;
-(void)setTitleLabel:(SearchUILabel *)arg1 ;
-(void)updateWithRowModel:(id)arg1 ;
-(TLKStackView *)stackView;
-(SearchUILabel *)subtitleLabel;
-(id)richTextForSearchUIText:(id)arg1 withMaxLines:(unsigned long long)arg2 ;
-(id)setupContentView;
-(void)setStackView:(TLKStackView *)arg1 ;
@end

