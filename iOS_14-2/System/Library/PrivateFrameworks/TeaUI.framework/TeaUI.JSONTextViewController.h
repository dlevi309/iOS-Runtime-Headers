/*
* Generated on Thursday, January 14, 2021 at 2:23:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TeaUI.framework/TeaUI
*/

#import <TeaUI/TeaUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITextViewDelegate.h>
#import <UIKit/UISearchControllerDelegate.h>
#import <UIKit/UITextFieldDelegate.h>
#import <UIKit/UISearchResultsUpdating.h>

@class UIView;

@interface TeaUI.JSONTextViewController : UIViewController <UITextViewDelegate, UISearchControllerDelegate, UITextFieldDelegate, UISearchResultsUpdating> {

	 textView;
	 textParser;
	 _textSize;
	 $__lazy_storage_$_searchToolbar;
	 $__lazy_storage_$_resultsBarButtonItem;
	 $__lazy_storage_$_nextTokenBarButtonItem;
	 $__lazy_storage_$_previousTokenBarButtonItem;

}

@property (readonly,nonatomic) UIView * inputAccessoryView; 
@property (readonly,nonatomic) BOOL canBecomeFirstResponder; 
-(void)updateSearchResultsForSearchController:(id)arg1 ;
-(void)willPresentSearchController:(id)arg1 ;
-(void)scrollViewWillBeginDragging:(id)arg1 ;
-(BOOL)textFieldShouldReturn:(id)arg1 ;
-(void)willDismissSearchController:(id)arg1 ;
-(UIView *)inputAccessoryView;
-(void)viewWillLayoutSubviews;
-(BOOL)canBecomeFirstResponder;
-(void)viewDidLoad;
-(void)previousToken;
-(id)initWithCoder:(id)arg1 ;
-(void)nextToken;
-(id)initWithNibName:(id)arg1 bundle:(id)arg2 ;
@end

