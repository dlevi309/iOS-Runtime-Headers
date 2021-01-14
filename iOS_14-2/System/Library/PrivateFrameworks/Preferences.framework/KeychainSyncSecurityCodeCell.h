/*
* Generated on Thursday, January 14, 2021 at 2:20:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Preferences.framework/Preferences
*/

#import <Preferences/Preferences-Structs.h>
#import <Preferences/PSEditableTableCell.h>

@class UILabel, NSString;

@interface KeychainSyncSecurityCodeCell : PSEditableTableCell {

	UILabel* _bulletTextLabel;
	int _securityCodeType;
	int _mode;
	NSString* _firstPasscodeEntry;

}

@property (assign,nonatomic) int securityCodeType;                       //@synthesize securityCodeType=_securityCodeType - In the implementation block
@property (assign,nonatomic) int mode;                                   //@synthesize mode=_mode - In the implementation block
@property (nonatomic,retain) NSString * firstPasscodeEntry;              //@synthesize firstPasscodeEntry=_firstPasscodeEntry - In the implementation block
-(int)mode;
-(void)setBulletText:(id)arg1 ;
-(int)securityCodeType;
-(void)setSecurityCodeType:(int)arg1 ;
-(NSString *)firstPasscodeEntry;
-(void)setFirstPasscodeEntry:(NSString *)arg1 ;
-(BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(NSRange)arg2 replacementString:(id)arg3 ;
-(void)setMode:(int)arg1 ;
-(void)layoutSubviews;
-(BOOL)textFieldShouldBeginEditing:(id)arg1 ;
@end

