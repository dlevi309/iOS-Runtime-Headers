/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/DevicePINController.h>

@interface PSRestrictionsPINController : DevicePINController
+(BOOL)settingEnabled;
-(id)init;
-(id)title;
-(CFStringRef)defaultsID;
-(BOOL)validatePIN:(id)arg1 ;
-(BOOL)isNumericPIN;
-(CFStringRef)failedAttemptsKey;
-(CFStringRef)blockTimeIntervalKey;
-(CFStringRef)blockedStateKey;
-(id)stringsBundle;
-(BOOL)simplePIN;
-(int)pinLength;
-(BOOL)pinIsAcceptable:(id)arg1 outError:(id*)arg2 ;
-(void)setPIN:(id)arg1 ;
-(id)pinInstructionsPrompt;
-(id)pinInstructionsPromptFont;
@end

