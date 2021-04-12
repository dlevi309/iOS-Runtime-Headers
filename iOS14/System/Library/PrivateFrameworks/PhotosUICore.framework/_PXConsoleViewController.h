/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <UIKitCore/UIViewController.h>

@class UITextView, UIBarButtonItem;

@interface _PXConsoleViewController : UIViewController {

	BOOL _toolBarWasHidden;
	UITextView* __textView;
	UIBarButtonItem* __shareBarButtonItem;

}

@property (nonatomic,readonly) UITextView * _textView;                             //@synthesize _textView=__textView - In the implementation block
@property (nonatomic,readonly) UIBarButtonItem * _shareBarButtonItem;              //@synthesize _shareBarButtonItem=__shareBarButtonItem - In the implementation block
@property (assign,nonatomic) BOOL toolBarWasHidden;                                //@synthesize toolBarWasHidden=_toolBarWasHidden - In the implementation block
-(id)init;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)appendOutput:(id)arg1 ;
-(void)_presentSharingViewController:(id)arg1 ;
-(BOOL)toolBarWasHidden;
-(void)setToolBarWasHidden:(BOOL)arg1 ;
-(UIBarButtonItem *)_shareBarButtonItem;
-(void)loadView;
-(UITextView *)_textView;
@end

