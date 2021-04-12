/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
#import <SearchUI/SearchUITableViewCell.h>

@class SearchUIAppIconsRowView, NSArray, TLKAuxilliaryTextView, UIView;

@interface SearchUIMultiResultTableViewCell : SearchUITableViewCell {

	SearchUIAppIconsRowView* _topRow;
	SearchUIAppIconsRowView* _bottomRow;
	NSArray* _results;
	long long _indexOfSelectedKeyboardIcon;
	TLKAuxilliaryTextView* _folderLabelView;
	UIView* _highlightBackgroundView;

}

@property (nonatomic,retain) SearchUIAppIconsRowView * topRow;                     //@synthesize topRow=_topRow - In the implementation block
@property (nonatomic,retain) SearchUIAppIconsRowView * bottomRow;                  //@synthesize bottomRow=_bottomRow - In the implementation block
@property (nonatomic,retain) NSArray * results;                                    //@synthesize results=_results - In the implementation block
@property (assign,nonatomic) long long indexOfSelectedKeyboardIcon;                //@synthesize indexOfSelectedKeyboardIcon=_indexOfSelectedKeyboardIcon - In the implementation block
@property (nonatomic,retain) TLKAuxilliaryTextView * folderLabelView;              //@synthesize folderLabelView=_folderLabelView - In the implementation block
@property (nonatomic,retain) UIView * highlightBackgroundView;                     //@synthesize highlightBackgroundView=_highlightBackgroundView - In the implementation block
+(unsigned long long)numberOfColumnsForCurrentOrientation;
-(NSArray *)results;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(UIView *)highlightBackgroundView;
-(void)setSelected:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setResults:(NSArray *)arg1 ;
-(BOOL)isExpandable;
-(void)setHighlightBackgroundView:(UIView *)arg1 ;
-(id)initWithRowModel:(id)arg1 feedbackDelegate:(id)arg2 ;
-(void)updateWithRowModel:(id)arg1 ;
-(BOOL)canSetupKeyboardHandler;
-(void)setupKeyboardHandler;
-(BOOL)navigateKeyboardRight;
-(void)returnKeyPressed;
-(BOOL)navigateKeyboardLeft;
-(BOOL)navigateKeyboardUp;
-(BOOL)navigateKeyboardDown;
-(void)removeKeyboardHandler;
-(id)visibleResults;
-(void)updateExpanded:(BOOL)arg1 ;
-(void)setTopRow:(SearchUIAppIconsRowView *)arg1 ;
-(SearchUIAppIconsRowView *)topRow;
-(void)setBottomRow:(SearchUIAppIconsRowView *)arg1 ;
-(SearchUIAppIconsRowView *)bottomRow;
-(unsigned long long)numberOfVisibleResults;
-(long long)indexOfSelectedKeyboardIcon;
-(void)setIndexOfSelectedKeyboardIcon:(long long)arg1 ;
-(TLKAuxilliaryTextView *)folderLabelView;
-(void)setFolderLabelView:(TLKAuxilliaryTextView *)arg1 ;
-(double)appRowSpacing;
-(void)removeHighlightedIconState;
@end

