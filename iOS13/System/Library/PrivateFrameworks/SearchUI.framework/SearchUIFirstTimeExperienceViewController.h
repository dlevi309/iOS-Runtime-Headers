/*
* Generated on Monday, March 1, 2021 at 2:33:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
#import <UIKitCore/UIViewController.h>
#import <UIKit/UITextViewDelegate.h>

@protocol SearchUIFirstTimeExperienceDelegate;
@class NSString;

@interface SearchUIFirstTimeExperienceViewController : UIViewController <UITextViewDelegate> {

	id<SearchUIFirstTimeExperienceDelegate> _delegate;
	unsigned long long _supportedDomains;
	NSString* _explanationText;
	NSString* _learnMoreText;
	NSString* _continueButtonTitle;
	NSString* _bundleIdentifier;

}

@property (assign,nonatomic) unsigned long long supportedDomains;                                  //@synthesize supportedDomains=_supportedDomains - In the implementation block
@property (nonatomic,retain) NSString * explanationText;                                           //@synthesize explanationText=_explanationText - In the implementation block
@property (nonatomic,retain) NSString * learnMoreText;                                             //@synthesize learnMoreText=_learnMoreText - In the implementation block
@property (nonatomic,retain) NSString * continueButtonTitle;                                       //@synthesize continueButtonTitle=_continueButtonTitle - In the implementation block
@property (nonatomic,retain) NSString * bundleIdentifier;                                          //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (assign,nonatomic,__weak) id<SearchUIFirstTimeExperienceDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<SearchUIFirstTimeExperienceDelegate>)delegate;
-(void)setDelegate:(id<SearchUIFirstTimeExperienceDelegate>)arg1 ;
-(NSString *)bundleIdentifier;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)_canShowWhileLocked;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(NSString *)explanationText;
-(void)setExplanationText:(NSString *)arg1 ;
-(NSString *)continueButtonTitle;
-(void)setContinueButtonTitle:(NSString *)arg1 ;
-(void)showPrivacyView;
-(id)initWithSupportedDomains:(unsigned long long)arg1 explanationText:(id)arg2 learnMoreText:(id)arg3 continueButtonTitle:(id)arg4 ;
-(void)setSupportedDomains:(unsigned long long)arg1 ;
-(void)setLearnMoreText:(NSString *)arg1 ;
-(void)makeViews;
-(unsigned long long)supportedDomains;
-(NSString *)learnMoreText;
-(void)continueButtonPressed;
-(id)initWithStyle:(unsigned long long)arg1 supportedDomains:(unsigned long long)arg2 explanationText:(id)arg3 learnMoreText:(id)arg4 continueButtonTitle:(id)arg5 ;
@end

