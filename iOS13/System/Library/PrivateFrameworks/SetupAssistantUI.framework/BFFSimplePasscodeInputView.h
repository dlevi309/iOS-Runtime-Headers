/*
* Generated on Monday, March 1, 2021 at 2:32:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SetupAssistantUI.framework/SetupAssistantUI
*/

#import <SetupAssistantUI/SetupAssistantUI-Structs.h>
#import <SetupAssistantUI/BFFPasscodeInputView.h>
#import <libobjc.A.dylib/PSPasscodeFieldDelegate.h>

@class PSPasscodeField, NSString;

@interface BFFSimplePasscodeInputView : BFFPasscodeInputView <PSPasscodeFieldDelegate> {

	BOOL _limitCharactersToNumbers;
	PSPasscodeField* _passcodeField;

}

@property (nonatomic,retain) PSPasscodeField * passcodeField;              //@synthesize passcodeField=_passcodeField - In the implementation block
@property (assign,nonatomic) BOOL limitCharactersToNumbers;                //@synthesize limitCharactersToNumbers=_limitCharactersToNumbers - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(void)setPasscodeField:(PSPasscodeField *)arg1 ;
-(PSPasscodeField *)passcodeField;
-(id)passcodeField:(id)arg1 shouldInsertText:(id)arg2 ;
-(void)passcodeField:(id)arg1 enteredPasscode:(id)arg2 ;
-(id)passcode;
-(void)setPasscode:(id)arg1 ;
-(id)passcodeDisplayView;
-(void)setLimitCharactersToNumbers:(BOOL)arg1 ;
-(BOOL)limitCharactersToNumbers;
-(id)initWithFrame:(CGRect)arg1 numberOfEntryFields:(unsigned long long)arg2 ;
@end

