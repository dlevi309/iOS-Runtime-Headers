/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/DevicePINController.h>

@interface PSRestrictionsPINController : DevicePINController
+(BOOL)settingEnabled;
-(id)init;
-(BOOL)simplePIN;
-(int)pinLength;
-(BOOL)isNumericPIN;
-(id)stringsBundle;
-(CFStringRef)defaultsID;
-(CFStringRef)failedAttemptsKey;
-(CFStringRef)blockTimeIntervalKey;
-(CFStringRef)blockedStateKey;
-(BOOL)pinIsAcceptable:(id)arg1 outError:(id*)arg2 ;
-(id)pinInstructionsPrompt;
-(id)pinInstructionsPromptFont;
-(BOOL)validatePIN:(id)arg1 ;
-(void)setPIN:(id)arg1 ;
-(id)title;
@end

