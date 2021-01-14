/*
* Generated on Thursday, January 14, 2021 at 2:28:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setPasscodeField:(PSPasscodeField *)arg1 ;
-(PSPasscodeField *)passcodeField;
-(id)initWithFrame:(CGRect)arg1 numberOfEntryFields:(unsigned long long)arg2 ;
-(void)passcodeField:(id)arg1 enteredPasscode:(id)arg2 ;
-(void)setPasscode:(id)arg1 ;
-(void)layoutSubviews;
-(id)passcode;
-(id)passcodeField:(id)arg1 shouldInsertText:(id)arg2 ;
-(id)passcodeDisplayView;
-(void)setLimitCharactersToNumbers:(BOOL)arg1 ;
-(BOOL)limitCharactersToNumbers;
@end

