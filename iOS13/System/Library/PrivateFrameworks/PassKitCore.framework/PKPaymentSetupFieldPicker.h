/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(PKPaymentSetupFieldPickerItem *)currentValue;
-(void)setCurrentValue:(PKPaymentSetupFieldPickerItem *)arg1 ;
-(unsigned long long)fieldType;
-(void)updateWithConfiguration:(id)arg1 ;
-(void)updateWithAttribute:(id)arg1 ;
-(id)_submissionStringForValue:(id)arg1 ;
-(BOOL)submissionStringMeetsAllRequirements;
-(void)_commonUpdate;
-(NSArray *)pickerItems;
-(void)setPickerItems:(NSArray *)arg1 ;
@end

