/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(UITextView *)textView;
-(void)contentSizeCategoryDidChange:(id)arg1 ;
-(id)init;
-(void)setMessageGUID:(NSString *)arg1 ;
-(id<CKReaderViewControllerDelegate>)delegate;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(NSString *)messageGUID;
-(void)setTextView:(UITextView *)arg1 ;
-(void)setText:(NSAttributedString *)arg1 ;
-(void)setVisibleRange:(NSRange)arg1 ;
-(unsigned long long)supportedInterfaceOrientations;
-(void)setDelegate:(id<CKReaderViewControllerDelegate>)arg1 ;
-(BOOL)shouldAutorotate;
-(NSAttributedString *)text;
-(NSRange)visibleRange;
-(void)loadView;
-(void)dealloc;
@end

