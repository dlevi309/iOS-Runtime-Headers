/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/

#import <CommunicationsSetupUI/CommunicationsSetupUI-Structs.h>
#import <CommunicationsSetupUI/CNFRegEditableTableCell.h>

@class NSString;

@interface CNFRegEditablePhoneTableCell : CNFRegEditableTableCell {

	SEL _countryCodeSelector;
	NSString* _previousValue;

}
-(void)dealloc;
-(id)countryCode;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(SCD_Struct_CN0)suggestionsForString:(id)arg1 inputIndex:(unsigned)arg2 ;
-(void)setValueChangedTarget:(id)arg1 action:(SEL)arg2 specifier:(id)arg3 ;
@end

