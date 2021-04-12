/*
* Generated on Thursday, January 14, 2021 at 2:22:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithPrivacyBundle:(id)arg1 ;
-(void)processBundlesForTitleInformation;
-(id)initWithBundleIdentifiers:(id)arg1 ;
-(UIImageView *)iconView;
-(BOOL)_canShowWhileLocked;
-(void)setLinkEnabled:(BOOL)arg1 ;
-(void)loadView;
@end

