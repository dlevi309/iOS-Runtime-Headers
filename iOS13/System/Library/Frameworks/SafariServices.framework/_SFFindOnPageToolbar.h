/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/

#import <SafariServices/SafariServices-Structs.h>
#import <UIKitCore/UIInputView.h>
#import <UIKit/UISearchBarDelegate.h>

@protocol _SFFindOnPageToolbarDelegate;
@class UIToolbar, UIBarButtonItem, _SFFindOnPageInputBar, NSArray, NSTimer, UILabel, NSString, UITextField;

@interface _SFFindOnPageToolbar : UIInputView <UISearchBarDelegate> {

	UIToolbar* _toolbar;
	UIBarButtonItem* _previousButtonItem;
	UIBarButtonItem* _nextButtonItem;
	_SFFindOnPageInputBar* _inputBar;
	UIBarButtonItem* _doneBarButtonItem;
	NSArray* _toolbarItems;
	id<_SFFindOnPageToolbarDelegate> _findDelegate;
	NSTimer* _textChangedUpdateTimer;
	UILabel* _inFieldMatchLabel;
	BOOL _editing;
	BOOL _useBottomInset;
	BOOL _usesNarrowLayout;
	NSString* _searchText;

}

@property (nonatomic,readonly) UITextField * inputField; 
@property (nonatomic,copy) NSString * searchText;                     //@synthesize searchText=_searchText - In the implementation block
@property (assign,nonatomic) BOOL usesNarrowLayout;                   //@synthesize usesNarrowLayout=_usesNarrowLayout - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithDelegate:(id)arg1 ;
-(void)_done;
-(CGSize)intrinsicContentSize;
-(void)layoutSubviews;
-(CGSize)leftContentViewSize;
-(CGSize)rightContentViewSize;
-(void)safeAreaInsetsDidChange;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(BOOL)searchBarShouldBeginEditing:(id)arg1 ;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(void)searchBarTextDidEndEditing:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(NSString *)searchText;
-(void)setSearchText:(NSString *)arg1 ;
-(void)_keyboardWillChangeFrame:(id)arg1 ;
-(void)setUsesNarrowLayout:(BOOL)arg1 ;
-(BOOL)usesNarrowLayout;
-(void)updateUI;
-(UITextField *)inputField;
-(void)dismiss:(id)arg1 ;
-(void)previous:(id)arg1 ;
-(void)next:(id)arg1 ;
-(double)_accessoryViewHeight;
-(CGRect)_toolbarFrame;
-(void)_initializeToolbarItems;
-(double)_toolbarVerticalInset;
-(id)_matchLabelText;
-(BOOL)_updateEditing:(BOOL)arg1 ;
-(void)_doUpdateSearchText;
-(BOOL)_keyboardIsSplit;
@end

