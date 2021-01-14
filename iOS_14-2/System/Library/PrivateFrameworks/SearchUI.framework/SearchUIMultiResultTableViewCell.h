/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
#import <SearchUI/SearchUITableViewCell.h>

@class SearchUIAppIconsRowView, NSArray, TLKAuxilliaryTextView;

@interface SearchUIMultiResultTableViewCell : SearchUITableViewCell {

	SearchUIAppIconsRowView* _topRow;
	SearchUIAppIconsRowView* _bottomRow;
	NSArray* _results;
	long long _indexOfSelectedKeyboardIcon;
	TLKAuxilliaryTextView* _folderLabelView;

}

@property (nonatomic,retain) SearchUIAppIconsRowView * topRow;                     //@synthesize topRow=_topRow - In the implementation block
@property (nonatomic,retain) SearchUIAppIconsRowView * bottomRow;                  //@synthesize bottomRow=_bottomRow - In the implementation block
@property (nonatomic,retain) NSArray * results;                                    //@synthesize results=_results - In the implementation block
@property (assign,nonatomic) long long indexOfSelectedKeyboardIcon;                //@synthesize indexOfSelectedKeyboardIcon=_indexOfSelectedKeyboardIcon - In the implementation block
@property (nonatomic,retain) TLKAuxilliaryTextView * folderLabelView;              //@synthesize folderLabelView=_folderLabelView - In the implementation block
+(unsigned long long)numberOfColumnsForCurrentOrientation;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setResults:(NSArray *)arg1 ;
-(BOOL)navigateKeyboardUp;
-(NSArray *)results;
-(void)updateWithRowModel:(id)arg1 ;
-(void)returnKeyPressed;
-(BOOL)navigateKeyboardDown;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(BOOL)canSetupKeyboardHandler;
-(void)setFolderLabelView:(TLKAuxilliaryTextView *)arg1 ;
-(void)setTopRow:(SearchUIAppIconsRowView *)arg1 ;
-(void)layoutSubviews;
-(void)setupKeyboardHandler;
-(SearchUIAppIconsRowView *)topRow;
-(id)keyboardResultForFocus;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(BOOL)navigateKeyboardRight;
-(void)removeKeyboardHandler;
-(TLKAuxilliaryTextView *)folderLabelView;
-(id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2 ;
-(SearchUIAppIconsRowView *)bottomRow;
-(void)setIndexOfSelectedKeyboardIcon:(long long)arg1 ;
-(unsigned long long)numberOfVisibleResults;
-(id)viewForHighlightedIndex:(long long)arg1 ;
-(void)setBottomRow:(SearchUIAppIconsRowView *)arg1 ;
-(long long)indexOfSelectedKeyboardIcon;
-(BOOL)navigateKeyboardLeft;
-(BOOL)isExpandable;
-(double)appRowVerticalSpacingForTopRowSize:(CGSize)arg1 ;
-(id)visibleResults;
-(void)updateExpanded:(BOOL)arg1 ;
-(void)removeHighlightedIconState;
@end

