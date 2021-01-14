/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)resignFirstResponder;
-(BOOL)becomeFirstResponder;
-(void)appendString:(id)arg1 ;
-(BOOL)isFirstResponder;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)passcodeField:(id)arg1 enteredPasscode:(id)arg2 ;
-(id)stringValue;
-(BOOL)canBecomeFirstResponder;
-(void)setStringValue:(id)arg1 ;
-(void)layoutSubviews;
-(void)hidePasscodeField:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 numberOfFields:(int)arg2 ;
-(void)deleteLastCharacter;
-(void)setBlocked:(BOOL)arg1 ;
-(void)dealloc;
@end

