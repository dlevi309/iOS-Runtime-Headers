/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)_reportEventForPassIfNecessary:(id)arg1 ;
-(void)doneButtonTapped;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)scrollViewDidScroll:(id)arg1 ;
-(void)loadView;
-(id)initWithAccount:(id)arg1 ;
-(id)_customerAgreementAttributedString;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(void)viewDidLayoutSubviews;
@end

