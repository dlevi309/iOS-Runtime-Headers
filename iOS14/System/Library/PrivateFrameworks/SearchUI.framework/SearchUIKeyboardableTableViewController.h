/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
#import <UIKitCore/UITableViewController.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol UITextInput, SearchUIKeyboardableTableViewDelegate;
@class UIControl, NSString;

@interface SearchUIKeyboardableTableViewController : UITableViewController <UIGestureRecognizerDelegate> {

	BOOL _shouldHideTableCellsUnderKeyboard;
	UIControl*<UITextInput> _textField;
	double _currentKeyboardHeight;
	id<SearchUIKeyboardableTableViewDelegate> _interactionDelegate;

}

@property (assign,nonatomic) double currentKeyboardHeight;                                     //@synthesize currentKeyboardHeight=_currentKeyboardHeight - In the implementation block
@property (__weak) id<SearchUIKeyboardableTableViewDelegate> interactionDelegate;              //@synthesize interactionDelegate=_interactionDelegate - In the implementation block
@property (__weak) UIControl*<UITextInput> textField;                                          //@synthesize textField=_textField - In the implementation block
@property (assign,nonatomic) BOOL shouldHideTableCellsUnderKeyboard;                           //@synthesize shouldHideTableCellsUnderKeyboard=_shouldHideTableCellsUnderKeyboard - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)returnKeyPressed;
-(void)rightArrowPressed;
-(void)setInteractionDelegate:(id<SearchUIKeyboardableTableViewDelegate>)arg1 ;
-(BOOL)canPerformAction:(SEL)arg1 withSender:(id)arg2 ;
-(void)goBack;
-(void)leftArrowPressed;
-(id)init;
-(id<SearchUIKeyboardableTableViewDelegate>)interactionDelegate;
-(void)selectHighlightedRow;
-(void)highlightNextRowAtIndexPath:(id)arg1 upward:(BOOL)arg2 ;
-(void)moveCursorToBeginning;
-(void)moveCursorToEnd;
-(id)indexPathForNextSelectableIndexPath:(id)arg1 upward:(BOOL)arg2 ;
-(void)scrollIndexPathToVisible:(id)arg1 ;
-(BOOL)canHighlightRowAtIndexPath:(id)arg1 ;
-(void)moveCursorToPosition:(id)arg1 ;
-(BOOL)contentVisibleUnderKeyboard;
-(void)setTextField:(UIControl*<UITextInput>)arg1 ;
-(void)tabKeyPressed;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(void)scrollViewWillEndDragging:(id)arg1 withVelocity:(CGPoint)arg2 targetContentOffset:(inout CGPoint*)arg3 ;
-(BOOL)canBecomeFirstResponder;
-(void)setShouldHideTableCellsUnderKeyboard:(BOOL)arg1 ;
-(BOOL)shouldHideTableCellsUnderKeyboard;
-(void)upArrowPressed:(id)arg1 ;
-(void)addKeyCommandForKey:(id)arg1 action:(SEL)arg2 ;
-(void)downArrowPressed:(id)arg1 ;
-(void)escapeButtonPressed;
-(void)deletePressed;
-(void)keyboardFrameChanged:(id)arg1 ;
-(void)setCurrentKeyboardHeight:(double)arg1 ;
-(void)hideCellsBelowKeyboardIfNecessary;
-(BOOL)isLeftToRightOrientation;
-(void)setTableView:(id)arg1 ;
-(UIControl*<UITextInput>)textField;
-(void)scrollViewDidScroll:(id)arg1 ;
-(BOOL)isOnCard;
-(BOOL)gestureRecognizerShouldBegin:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)showKeyboard;
-(id)indexPathToSelectForKeyboardOnQuickReturn;
-(void)highlightRowAtIndexPath:(id)arg1 ;
-(double)currentKeyboardHeight;
-(double)contentHeight;
@end

