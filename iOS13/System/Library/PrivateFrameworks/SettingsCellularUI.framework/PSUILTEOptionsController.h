/*
* Generated on Monday, March 1, 2021 at 2:34:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SettingsCellularUI.framework/SettingsCellularUI
*/

#import <SettingsCellularUI/SettingsCellularUI-Structs.h>
#import <Preferences/PSListItemsController.h>
#import <UIKit/UIAlertViewDelegate.h>

@class NSString;

@interface PSUILTEOptionsController : PSListItemsController <UIAlertViewDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)isVoiceEnabled:(id)arg1 ;
+(void)setVoice:(id)arg1 enabled:(BOOL)arg2 ;
+(BOOL)shouldShowVoiceOptions:(id)arg1 ;
+(unsigned long long)voiceAvailability:(id)arg1 ;
+(BOOL)isOnCallOfSubType:(CFStringRef)arg1 ;
+(BOOL)isProvisioning:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(void)tableView:(id)arg1 willDisplayCell:(id)arg2 forRowAtIndexPath:(id)arg3 ;
-(id)specifiers;
-(void)setSpecifier:(id)arg1 ;
-(void)listItemSelected:(id)arg1 ;
-(void)updateProvisioning;
-(BOOL)presentOnCallAlertIfNeededForService:(unsigned long long)arg1 okayCompletion:(/*^block*/id)arg2 ;
-(void)presentCallCarrierAlert:(id)arg1 ;
@end

