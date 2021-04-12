/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITextViewDelegate.h>
#import <UIKit/UIScrollViewDelegate.h>

@class PKAccount, UIScrollView, NSString, NSArray, UILabel, UITextView;

@interface PKAccountBillPaymentLearnMoreViewController : UIViewController <UITextViewDelegate, UIScrollViewDelegate> {

	PKAccount* _account;
	UIScrollView* _scrollView;
	NSString* _titleText;
	NSString* _subtitleText;
	NSArray* _suggestionDescriptions;
	NSArray* _footnotes;
	NSString* _customerAgreementText;
	NSString* _customerAgreementLinkText;
	UILabel* _titleLabel;
	UILabel* _subtitleLabel;
	NSArray* _suggestionDescriptionLabels;
	NSArray* _footnoteLabels;
	UITextView* _customerAgreementTextView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAccount:(id)arg1 ;
-(void)loadView;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)viewDidLayoutSubviews;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(void)doneButtonTapped;
-(void)_reportEventForPassIfNecessary:(id)arg1 ;
-(id)_customerAgreementAttributedString;
@end

