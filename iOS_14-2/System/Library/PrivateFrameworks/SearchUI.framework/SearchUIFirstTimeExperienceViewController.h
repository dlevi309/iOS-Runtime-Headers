/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)bundleIdentifier;
-(void)setDelegate:(id<SearchUIFirstTimeExperienceDelegate>)arg1 ;
-(BOOL)_canShowWhileLocked;
-(void)setBundleIdentifier:(NSString *)arg1 ;
-(void)setExplanationText:(NSString *)arg1 ;
-(NSString *)explanationText;
-(void)setSupportedDomains:(unsigned long long)arg1 ;
-(void)setLearnMoreText:(NSString *)arg1 ;
-(void)setContinueButtonTitle:(NSString *)arg1 ;
-(void)makeViews;
-(NSString *)learnMoreText;
-(id)initWithSupportedDomains:(unsigned long long)arg1 explanationText:(id)arg2 learnMoreText:(id)arg3 continueButtonTitle:(id)arg4 ;
-(unsigned long long)supportedDomains;
-(NSString *)continueButtonTitle;
-(void)continueButtonPressed;
-(id)initWithStyle:(unsigned long long)arg1 supportedDomains:(unsigned long long)arg2 explanationText:(id)arg3 learnMoreText:(id)arg4 continueButtonTitle:(id)arg5 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(NSRange)arg3 interaction:(long long)arg4 ;
-(void)showPrivacyView;
@end

