/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantSettingsSupport.framework/AssistantSettingsSupport
*/

#import <Preferences/PSListController.h>

@class NSMutableSet;

@interface AssistantAppClipSettingsController : PSListController {

	NSMutableSet* _disabledSpotlightBundles;
	NSMutableSet* _disabledSpotlightApps;

}
+(id)bundle;
-(id)specifiers;
-(void)viewDidLoad;
-(void)setLearnFromAppClipsEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)learnFromAppClipsEnabled:(id)arg1 ;
-(void)setShowInSearchEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)showInSearchEnabled:(id)arg1 ;
-(void)setSuggestAppClipsEnabled:(id)arg1 specifier:(id)arg2 ;
-(id)suggestAppClipsEnabled:(id)arg1 ;
@end

