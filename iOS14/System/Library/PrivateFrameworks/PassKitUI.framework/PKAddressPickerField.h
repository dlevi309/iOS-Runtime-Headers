/*
* Generated on Thursday, January 14, 2021 at 2:24:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIPickerView.h>

@class PKAddressTextField, PKPickerContactFieldConfiguration;

@interface PKAddressPickerField : UIPickerView {

	PKAddressTextField* _addressTextField;
	PKPickerContactFieldConfiguration* _pickerFieldConfiguration;

}

@property (nonatomic,readonly) PKAddressTextField * addressTextField;                                     //@synthesize addressTextField=_addressTextField - In the implementation block
@property (nonatomic,readonly) PKPickerContactFieldConfiguration * pickerFieldConfiguration;              //@synthesize pickerFieldConfiguration=_pickerFieldConfiguration - In the implementation block
-(id)initWithFrame:(CGRect)arg1 addressTextField:(id)arg2 ;
-(PKAddressTextField *)addressTextField;
-(PKPickerContactFieldConfiguration *)pickerFieldConfiguration;
@end

