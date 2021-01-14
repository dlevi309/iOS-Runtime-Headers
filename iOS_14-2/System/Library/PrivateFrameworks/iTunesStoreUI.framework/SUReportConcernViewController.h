/*
* Generated on Thursday, January 14, 2021 at 2:25:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <iTunesStoreUI/SUTableViewController.h>

@interface SUReportConcernViewController : SUTableViewController {

	BOOL _animatingKeyboard;
	unsigned long long _itemIdentifier;
	UIEdgeInsets _originalTableInsets;

}

@property (nonatomic,readonly) unsigned long long itemIdentifier;              //@synthesize itemIdentifier=_itemIdentifier - In the implementation block
-(void)viewDidAppear:(BOOL)arg1 ;
-(unsigned long long)itemIdentifier;
-(void)operation:(id)arg1 failedWithError:(id)arg2 ;
-(id)initWithItemIdentifier:(unsigned long long)arg1 ;
-(void)_cancel:(id)arg1 ;
-(void)loadView;
-(void)_submit:(id)arg1 ;
-(void)keyboardWillHideWithInfo:(id)arg1 ;
-(void)keyboardWillShowWithInfo:(id)arg1 ;
-(void)operation:(id)arg1 finishedWithOutput:(id)arg2 ;
-(BOOL)handleSelectionForIndexPath:(id)arg1 tapCount:(long long)arg2 ;
-(void)_hideKeyboardDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)_showKeyboardDidStop:(id)arg1 finished:(id)arg2 context:(void*)arg3 ;
-(void)_fetchConcerns;
@end

