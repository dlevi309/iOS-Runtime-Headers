/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UIWebViewDelegate.h>

@protocol CKReaderViewControllerDelegate;
@class NSString, UITextView, NSAttributedString;

@interface CKReaderViewController : UIViewController <UIWebViewDelegate> {

	id<CKReaderViewControllerDelegate> _delegate;
	NSString* _messageGUID;
	UITextView* _textView;

}

@property (nonatomic,retain) UITextView * textView;                                           //@synthesize textView=_textView - In the implementation block
@property (assign,nonatomic,__weak) id<CKReaderViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * messageGUID;                                            //@synthesize messageGUID=_messageGUID - In the implementation block
@property (nonatomic,copy) NSAttributedString * text; 
@property (assign,nonatomic) NSRange visibleRange; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)readerViewControllerForChatItem:(id)arg1 ;
+(id)readerScrollPositionCache;
-(id)init;
-(void)dealloc;
-(id<CKReaderViewControllerDelegate>)delegate;
-(void)setDelegate:(id<CKReaderViewControllerDelegate>)arg1 ;
-(NSAttributedString *)text;
-(void)setText:(NSAttributedString *)arg1 ;
-(UITextView *)textView;
-(void)setTextView:(UITextView *)arg1 ;
-(void)loadView;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(BOOL)shouldAutorotate;
-(void)setMessageGUID:(NSString *)arg1 ;
-(NSString *)messageGUID;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(NSRange)visibleRange;
-(void)setVisibleRange:(NSRange)arg1 ;
@end

