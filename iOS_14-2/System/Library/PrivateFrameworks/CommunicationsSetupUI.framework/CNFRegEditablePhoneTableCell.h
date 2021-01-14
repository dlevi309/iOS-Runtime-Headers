/*
* Generated on Thursday, January 14, 2021 at 2:27:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CommunicationsSetupUI.framework/CommunicationsSetupUI
*/

#import <CommunicationsSetupUI/CommunicationsSetupUI-Structs.h>
#import <CommunicationsSetupUI/CNFRegEditableTableCell.h>

@class NSString;

@interface CNFRegEditablePhoneTableCell : CNFRegEditableTableCell {

	SEL _countryCodeSelector;
	NSString* _previousValue;

}
-(id)countryCode;
-(void)setValueChangedTarget:(id)arg1 action:(SEL)arg2 specifier:(id)arg3 ;
-(SCD_Struct_CN0)suggestionsForString:(id)arg1 inputIndex:(unsigned)arg2 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(void)dealloc;
@end

