/*
* Generated on Thursday, January 14, 2021 at 2:27:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantSettingsSupport.framework/AssistantSettingsSupport
*/

#import <Preferences/PSListItemsController.h>

@class NSDate, AssistantSettingsSignalEmitter;

@interface AssistantLanguageController : PSListItemsController {

	NSDate* _startDate;
	AssistantSettingsSignalEmitter* _signalEmitter;

}
+(id)bundle;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)viewDidDisappear:(BOOL)arg1 ;
-(void)languageCodeDidChange:(id)arg1 ;
-(void)_signalDidSelectVoice;
@end

