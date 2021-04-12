/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKPaymentSetupField.h>

@class NSArray, PKPaymentSetupFieldPickerItem;

@interface PKPaymentSetupFieldPicker : PKPaymentSetupField {

	NSArray* _pickerItems;

}

@property (nonatomic,copy) NSArray * pickerItems;                                     //@synthesize pickerItems=_pickerItems - In the implementation block
@property (nonatomic,copy) PKPaymentSetupFieldPickerItem * currentValue; 
-(id)displayString;
-(void)updateWithConfiguration:(id)arg1 ;
-(unsigned long long)fieldType;
-(PKPaymentSetupFieldPickerItem *)currentValue;
-(void)updateWithAttribute:(id)arg1 ;
-(id)_submissionStringForValue:(id)arg1 ;
-(BOOL)submissionStringMeetsAllRequirements;
-(void)_commonUpdate;
-(NSArray *)pickerItems;
-(void)setPickerItems:(NSArray *)arg1 ;
-(void)setCurrentValue:(PKPaymentSetupFieldPickerItem *)arg1 ;
@end

