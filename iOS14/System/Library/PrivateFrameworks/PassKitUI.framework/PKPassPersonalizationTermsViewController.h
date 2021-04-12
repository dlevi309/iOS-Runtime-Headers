/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,retain) NSString * termsAndConditions;                                                     //@synthesize termsAndConditions=_termsAndConditions - In the implementation block
@property (assign,nonatomic,__weak) id<PKPassPersonalizationTermsViewControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<PKPassPersonalizationTermsViewControllerDelegate>)delegate;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setDelegate:(id<PKPassPersonalizationTermsViewControllerDelegate>)arg1 ;
-(void)_declineButtonPressed:(id)arg1 ;
-(void)_acceptButtonPressed:(id)arg1 ;
-(void)_applyTermsAndConditions;
-(void)viewDidLoad;
-(NSString *)termsAndConditions;
-(void)setTermsAndConditions:(NSString *)arg1 ;
-(void)loadView;
-(id)initWithTermsAndConditions:(id)arg1 ;
-(void)dealloc;
@end

