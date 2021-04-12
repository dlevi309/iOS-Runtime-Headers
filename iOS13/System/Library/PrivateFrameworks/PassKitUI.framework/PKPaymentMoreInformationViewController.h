/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITextViewDelegate.h>

@protocol PKPaymentMoreInformationViewControllerDelegate;
@class UIScrollView, UILabel, UITextView, UIButton, PKBusinessChatController, NSString;

@interface PKPaymentMoreInformationViewController : UIViewController <UITextViewDelegate> {

	UIScrollView* _scrollView;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	UITextView* _detailTextView;
	UIButton* _businessChatButton;
	PKBusinessChatController* _businessChatController;
	long long _context;
	id<PKPaymentMoreInformationViewControllerDelegate> _delegate;
	NSString* _detailTitle;
	NSString* _detailSubtitle;
	NSString* _detailBody;
	NSString* _businessChatButtonTitle;
	NSString* _businessChatIdentifier;
	NSString* _businessChatIntentName;

}

@property (assign,nonatomic) id<PKPaymentMoreInformationViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSString * detailTitle;                                                     //@synthesize detailTitle=_detailTitle - In the implementation block
@property (nonatomic,copy) NSString * detailSubtitle;                                                  //@synthesize detailSubtitle=_detailSubtitle - In the implementation block
@property (nonatomic,copy) NSString * detailBody;                                                      //@synthesize detailBody=_detailBody - In the implementation block
@property (nonatomic,copy) NSString * businessChatButtonTitle;                                         //@synthesize businessChatButtonTitle=_businessChatButtonTitle - In the implementation block
@property (nonatomic,copy) NSString * businessChatIdentifier;                                          //@synthesize businessChatIdentifier=_businessChatIdentifier - In the implementation block
@property (nonatomic,copy) NSString * businessChatIntentName;                                          //@synthesize businessChatIntentName=_businessChatIntentName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<PKPaymentMoreInformationViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PKPaymentMoreInformationViewControllerDelegate>)arg1 ;
-(id)initWithContext:(long long)arg1 ;
-(void)loadView;
-(void)viewDidLayoutSubviews;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(void)doneButtonTapped;
-(void)setDetailTitle:(NSString *)arg1 ;
-(void)setDetailSubtitle:(NSString *)arg1 ;
-(void)setDetailBody:(NSString *)arg1 ;
-(void)setBusinessChatIdentifier:(NSString *)arg1 ;
-(void)setBusinessChatButtonTitle:(NSString *)arg1 ;
-(void)setBusinessChatIntentName:(NSString *)arg1 ;
-(NSString *)detailTitle;
-(NSString *)detailSubtitle;
-(NSString *)detailBody;
-(NSString *)businessChatButtonTitle;
-(NSString *)businessChatIdentifier;
-(NSString *)businessChatIntentName;
-(BOOL)_shouldShowBusinessChatButton;
-(void)_businessChatButtonTapped;
@end

