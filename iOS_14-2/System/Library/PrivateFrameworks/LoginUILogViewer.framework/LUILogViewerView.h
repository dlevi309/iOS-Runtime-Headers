/*
* Generated on Thursday, January 14, 2021 at 2:27:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/LoginUILogViewer.framework/LoginUILogViewer
*/

#import <LoginUILogViewer/LoginUILogViewer-Structs.h>
#import <UIKitCore/UIView.h>

@protocol LUILogViewerViewDelegate;
@class UIView, UIButton, UISearchBar, UIStackView, UILabel;

@interface LUILogViewerView : UIView {

	id<LUILogViewerViewDelegate> _delegate;
	UIView* _contentHolderView;
	UIButton* _filterButton;
	UISearchBar* _searchBar;
	UIButton* _closeButton;
	UIView* _filterView;
	UIButton* _logButton;
	UIButton* _clearButton;
	UIStackView* _buttonStack;
	UILabel* _searchResultLabel;
	UIButton* _leftCaretButton;
	UIButton* _rightCaretButton;

}

@property (nonatomic,retain) UIButton * closeButton;                                    //@synthesize closeButton=_closeButton - In the implementation block
@property (nonatomic,retain) UIView * contentHolderView;                                //@synthesize contentHolderView=_contentHolderView - In the implementation block
@property (nonatomic,retain) UIView * filterView;                                       //@synthesize filterView=_filterView - In the implementation block
@property (nonatomic,retain) UIButton * logButton;                                      //@synthesize logButton=_logButton - In the implementation block
@property (nonatomic,retain) UIButton * clearButton;                                    //@synthesize clearButton=_clearButton - In the implementation block
@property (nonatomic,retain) UIStackView * buttonStack;                                 //@synthesize buttonStack=_buttonStack - In the implementation block
@property (nonatomic,retain) UIButton * filterButton;                                   //@synthesize filterButton=_filterButton - In the implementation block
@property (nonatomic,retain) UISearchBar * searchBar;                                   //@synthesize searchBar=_searchBar - In the implementation block
@property (nonatomic,retain) UILabel * searchResultLabel;                               //@synthesize searchResultLabel=_searchResultLabel - In the implementation block
@property (nonatomic,retain) UIButton * leftCaretButton;                                //@synthesize leftCaretButton=_leftCaretButton - In the implementation block
@property (nonatomic,retain) UIButton * rightCaretButton;                               //@synthesize rightCaretButton=_rightCaretButton - In the implementation block
@property (assign,nonatomic,__weak) id<LUILogViewerViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(UISearchBar *)searchBar;
-(UIButton *)filterButton;
-(void)_setup;
-(void)setSearchBar:(UISearchBar *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setFilterView:(UIView *)arg1 ;
-(id<LUILogViewerViewDelegate>)delegate;
-(void)setCloseButton:(UIButton *)arg1 ;
-(UIView *)filterView;
-(void)setDelegate:(id<LUILogViewerViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(void)setFilterButton:(UIButton *)arg1 ;
-(void)closeButtonTapped:(id)arg1 ;
-(UIButton *)closeButton;
-(UIButton *)clearButton;
-(id)_createCloseButton;
-(void)switchClearButtonTitle:(BOOL)arg1 ;
-(void)resetSearchResultLabel;
-(void)highlightFilterButton:(BOOL)arg1 ;
-(void)highlightLogButton:(BOOL)arg1 ;
-(void)updateSearchResultLabelWithTotalResult:(unsigned long long)arg1 currentIndex:(unsigned long long)arg2 ;
-(UIView *)contentHolderView;
-(id)_createLogButton;
-(id)_createClearButton;
-(id)_createFilterButton;
-(id)_createSearchBar;
-(id)_createSearchResultLabel;
-(id)_createLeftCaretButton;
-(id)_createRightCaretButton;
-(UIStackView *)buttonStack;
-(void)_highlightButton:(id)arg1 highlight:(BOOL)arg2 ;
-(UIButton *)logButton;
-(UILabel *)searchResultLabel;
-(id)_createButtonWithTitle:(id)arg1 action:(SEL)arg2 ;
-(void)logButtonTapped:(id)arg1 ;
-(void)clearButtonTapped:(id)arg1 ;
-(void)filterButtonTapped:(id)arg1 ;
-(void)leftCaretButtonTapped:(id)arg1 ;
-(void)rightCaretButtonTapped:(id)arg1 ;
-(void)setContentHolderView:(UIView *)arg1 ;
-(void)setLogButton:(UIButton *)arg1 ;
-(void)setClearButton:(UIButton *)arg1 ;
-(void)setButtonStack:(UIStackView *)arg1 ;
-(void)setSearchResultLabel:(UILabel *)arg1 ;
-(UIButton *)leftCaretButton;
-(void)setLeftCaretButton:(UIButton *)arg1 ;
-(UIButton *)rightCaretButton;
-(void)setRightCaretButton:(UIButton *)arg1 ;
@end

