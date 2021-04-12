/*
* Generated on Monday, March 1, 2021 at 2:30:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PINView.h>
#import <libobjc.A.dylib/PSPasscodeFieldDelegate.h>

@class PSPasscodeField, NSString;

@interface PSBulletedPINView : PINView <PSPasscodeFieldDelegate> {

	PSPasscodeField* _passcodeField;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)appendString:(id)arg1 ;
-(id)stringValue;
-(void)setStringValue:(id)arg1 ;
-(BOOL)isFirstResponder;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(BOOL)becomeFirstResponder;
-(BOOL)resignFirstResponder;
-(BOOL)canBecomeFirstResponder;
-(void)deleteLastCharacter;
-(void)setBlocked:(BOOL)arg1 ;
-(void)passcodeField:(id)arg1 enteredPasscode:(id)arg2 ;
-(void)hidePasscodeField:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 numberOfFields:(int)arg2 ;
@end

