/*
* Generated on Monday, March 1, 2021 at 2:32:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <UIKitCore/UIViewController.h>

@protocol PKPassPersonalizationTermsViewControllerDelegate;
@class UITextView, NSString;

@interface PKPassPersonalizationTermsViewController : UIViewController {

	UITextView* _textView;
	NSString* _termsAndConditions;
	id<PKPassPersonalizationTermsViewControllerDelegate> _delegate;

}

@property (nonatomic,retain) NSString * termsAndConditions;                                              //@synthesize termsAndConditions=_termsAndConditions - In the implementation block
@property (assign,nonatomic) id<PKPassPersonalizationTermsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<PKPassPersonalizationTermsViewControllerDelegate>)delegate;
-(void)setDelegate:(id<PKPassPersonalizationTermsViewControllerDelegate>)arg1 ;
-(void)loadView;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(NSString *)termsAndConditions;
-(void)setTermsAndConditions:(NSString *)arg1 ;
-(id)initWithTermsAndConditions:(id)arg1 ;
-(void)_declineButtonPressed:(id)arg1 ;
-(void)_acceptButtonPressed:(id)arg1 ;
-(void)_applyTermsAndConditions;
@end

