/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)_done;
-(CGSize)intrinsicContentSize;
-(void)setUsesNarrowLayout:(BOOL)arg1 ;
-(void)next:(id)arg1 ;
-(CGSize)rightContentViewSize;
-(void)previous:(id)arg1 ;
-(BOOL)usesNarrowLayout;
-(void)_keyboardWillChangeFrame:(id)arg1 ;
-(double)_accessoryViewHeight;
-(void)updateUI;
-(void)layoutSubviews;
-(NSString *)searchText;
-(id)initWithDelegate:(id)arg1 ;
-(void)dismiss:(id)arg1 ;
-(void)searchBarTextDidBeginEditing:(id)arg1 ;
-(void)searchBarSearchButtonClicked:(id)arg1 ;
-(UITextField *)inputField;
-(CGSize)leftContentViewSize;
-(CGRect)_toolbarFrame;
-(void)_initializeToolbarItems;
-(id)_matchLabelText;
-(void)searchBarTextDidEndEditing:(id)arg1 ;
-(void)safeAreaInsetsDidChange;
-(void)setSearchText:(NSString *)arg1 ;
-(void)searchBar:(id)arg1 textDidChange:(id)arg2 ;
-(BOOL)searchBarShouldBeginEditing:(id)arg1 ;
-(double)_toolbarVerticalInset;
-(BOOL)_updateEditing:(BOOL)arg1 ;
-(void)_doUpdateSearchText;
-(BOOL)_keyboardIsSplit;
@end

