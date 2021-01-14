/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/PSKeychainSyncTextEntryController.h>

@class DevicePINController, NSString, UIKeyboard;

@interface KeychainSyncDevicePINController : PSKeychainSyncTextEntryController {

	DevicePINController* _devicePINController;
	BOOL _showingBlockedMessage;
	NSString* _enterPasscodeTitle;
	NSString* _enterPasscodeReason;
	UIKeyboard* _disabledKeyboard;

}

@property (nonatomic,retain) UIKeyboard * disabledKeyboard;               //@synthesize disabledKeyboard=_disabledKeyboard - In the implementation block
@property (nonatomic,retain) NSString * enterPasscodeTitle;               //@synthesize enterPasscodeTitle=_enterPasscodeTitle - In the implementation block
@property (nonatomic,retain) NSString * enterPasscodeReason;              //@synthesize enterPasscodeReason=_enterPasscodeReason - In the implementation block
-(id)specifiers;
-(id)init;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)didFinishEnteringText:(id)arg1 ;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)setEnterPasscodeTitle:(NSString *)arg1 ;
-(void)setEnterPasscodeReason:(NSString *)arg1 ;
-(void)updateBlockedState:(id)arg1 ;
-(void)setDisabledKeyboard:(UIKeyboard *)arg1 ;
-(NSString *)enterPasscodeTitle;
-(NSString *)enterPasscodeReason;
-(UIKeyboard *)disabledKeyboard;
-(long long)tableView:(id)arg1 titleAlignmentForFooterInSection:(long long)arg2 ;
-(void)dealloc;
@end

