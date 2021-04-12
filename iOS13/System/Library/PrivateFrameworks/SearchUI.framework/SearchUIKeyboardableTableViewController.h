/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol UITextInput, SearchUIKeyboardableTableViewScrollDelegate;
@class UIControl, NSString;

@interface SearchUIKeyboardableTableViewController : UITableViewController <UIGestureRecognizerDelegate> {

	BOOL _shouldHideTableCellsUnderKeyboard;
	UIControl*<UITextInput> _textField;
	double _currentKeyboardHeight;
	id<SearchUIKeyboardableTableViewScrollDelegate> _scrollDelegate;

}

@property (assign,nonatomic) double currentKeyboardHeight;                                      //@synthesize currentKeyboardHeight=_currentKeyboardHeight - In the implementation block
@property (__weak) id<SearchUIKeyboardableTableViewScrollDelegate> scrollDelegate;              //@synthesize scrollDelegate=_scrollDelegate - In the implementation block
@property (__weak) UIControl*<UITextInput> textField;                                           //@synthesize textField=_textField - In the implementation block
@property (assign,nonatomic) BOOL shouldHideTableCellsUnderKeyboard;                            //@synthesize shouldHideTableCellsUnderKeyboard=_shouldHideTableCellsUnderKeyboard - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(UIControl*<UITextInput>)textField;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(BOOL)canBecomeFirstResponder;
-(void)setTableView:(id)arg1 ;
-(id<SearchUIKeyboardableTableViewScrollDelegate>)scrollDelegate;
-(void)setScrollDelegate:(id<SearchUIKeyboardableTableViewScrollDelegate>)arg1 ;
-(void)showKeyboard;
-(void)goBack;
-(void)setTextField:(UIControl*<UITextInput>)arg1 ;
-(double)contentHeight;
-(void)leftArrowPressed;
-(void)returnKeyPressed;
-(id)indexPathToSelectForKeyboardOnQuickReturn;
-(double)currentKeyboardHeight;
-(void)setShouldHideTableCellsUnderKeyboard:(BOOL)arg1 ;
-(BOOL)shouldHideTableCellsUnderKeyboard;
-(void)upArrowPressed:(id)arg1 ;
-(void)addKeyCommandForKey:(id)arg1 action:(SEL)arg2 ;
-(void)downArrowPressed:(id)arg1 ;
-(void)rightArrowPressed;
-(void)escapeButtonPressed;
-(void)deletePressed;
-(void)keyboardFrameChanged:(id)arg1 ;
-(void)setCurrentKeyboardHeight:(double)arg1 ;
-(void)hideCellsBelowKeyboardIfNecessary;
-(BOOL)isOnCard;
-(BOOL)isLeftToRightOrientation;
-(void)selectHighlightedRow;
-(void)highlightRowAtIndexPath:(id)arg1 upward:(BOOL)arg2 ;
-(void)moveCursorToBeginning;
-(void)moveCursorToEnd;
-(id)indexPathForNextSelectableIndexPath:(id)arg1 upward:(BOOL)arg2 ;
-(void)scrollIndexPathToVisible:(id)arg1 ;
-(BOOL)canHighlightRowAtIndexPath:(id)arg1 ;
-(void)moveCursorToPosition:(id)arg1 ;
-(BOOL)cellsVisibleUnderKeyboard;
@end

