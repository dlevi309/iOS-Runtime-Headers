/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OnBoardingKit.framework/OnBoardingKit
*/

#import <OnBoardingKit/OBPrivacyLinkController.h>

@class OBPrivacyLinkButton, UIImageView, UITextView;

@interface OBPrivacyLinkController_iOS : OBPrivacyLinkController {

	OBPrivacyLinkButton* _linkButton;
	BOOL bundleTitlesMatch;
	BOOL bundlesIncludePII;

}

@property (readonly) UIImageView * iconView; 
@property (readonly) UITextView * textView; 
-(UITextView *)textView;
-(void)loadView;
-(BOOL)_canShowWhileLocked;
-(UIImageView *)iconView;
-(id)initWithPrivacyBundle:(id)arg1 ;
-(id)initWithBundleIdentifiers:(id)arg1 ;
-(void)processBundlesForTitleInformation;
-(void)setLinkEnabled:(BOOL)arg1 ;
@end

