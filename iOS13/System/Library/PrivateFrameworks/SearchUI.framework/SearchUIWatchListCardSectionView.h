/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUICardSectionView.h>
#import <SearchUI/SearchUIWatchListCardRowModelDelegate.h>

@class SearchUIButton, TLKSimpleRowView, NUIContainerStackView, SearchUIWatchListCardRowModel;

@interface SearchUIWatchListCardSectionView : SearchUICardSectionView <SearchUIWatchListCardRowModelDelegate> {

	SearchUIButton* _button;
	TLKSimpleRowView* _rowView;

}

@property (nonatomic,retain) NUIContainerStackView * contentView; 
@property (nonatomic,retain) SearchUIButton * button;                               //@synthesize button=_button - In the implementation block
@property (nonatomic,retain) TLKSimpleRowView * rowView;                            //@synthesize rowView=_rowView - In the implementation block
@property (nonatomic,retain) SearchUIWatchListCardRowModel * rowModel; 
+(BOOL)supportsRecyclingForCardSection:(id)arg1 ;
-(SearchUIButton *)button;
-(void)setButton:(SearchUIButton *)arg1 ;
-(TLKSimpleRowView *)rowView;
-(id)setupContentView;
-(void)updateWithRowModel:(id)arg1 ;
-(void)setRowView:(TLKSimpleRowView *)arg1 ;
-(void)didUpdateRowModel:(id)arg1 animate:(BOOL)arg2 ;
-(void)updateText:(id)arg1 image:(id)arg2 buttonState:(long long)arg3 ;
@end

