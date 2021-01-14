/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <UIKitCore/UIViewController.h>
#import <UIKit/UITextViewDelegate.h>

@class UITextView, UIButton, NSURL, NSString;

@interface HUAccessoryDiagnosticsConsentViewController : UIViewController <UITextViewDelegate> {

	UITextView* _descriptionTextView;
	UIButton* _submitButton;
	/*^block*/id _completionHandler;
	NSURL* _privacyPolicyURL;
	long long _consentTextVersion;
	NSString* _manufacturer;

}

@property (nonatomic,retain) UITextView * descriptionTextView;              //@synthesize descriptionTextView=_descriptionTextView - In the implementation block
@property (nonatomic,retain) UIButton * submitButton;                       //@synthesize submitButton=_submitButton - In the implementation block
@property (nonatomic,copy) id completionHandler;                            //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) NSURL * privacyPolicyURL;                      //@synthesize privacyPolicyURL=_privacyPolicyURL - In the implementation block
@property (assign,nonatomic) long long consentTextVersion;                  //@synthesize consentTextVersion=_consentTextVersion - In the implementation block
@property (nonatomic,retain) NSString * manufacturer;                       //@synthesize manufacturer=_manufacturer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)manufacturer;
-(void)setCompletionHandler:(id)arg1 ;
-(void)setManufacturer:(NSString *)arg1 ;
-(void)_addConstraints;
-(void)setDescriptionTextView:(UITextView *)arg1 ;
-(UITextView *)descriptionTextView;
-(id)completionHandler;
-(NSURL *)privacyPolicyURL;
-(void)viewDidLoad;
-(void)cancelSubmission;
-(UIButton *)submitButton;
-(void)setSubmitButton:(UIButton *)arg1 ;
-(id)initWithItem:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)submitLog;
-(void)setPrivacyPolicyURL:(NSURL *)arg1 ;
-(long long)consentTextVersion;
-(void)setConsentTextVersion:(long long)arg1 ;
@end

