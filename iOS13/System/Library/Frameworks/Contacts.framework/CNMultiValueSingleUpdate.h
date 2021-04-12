/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/CNMultiValueUpdate.h>

@class CNLabeledValue;

@interface CNMultiValueSingleUpdate : CNMultiValueUpdate {

	CNLabeledValue* _value;

}

@property (nonatomic,readonly) CNLabeledValue * value;              //@synthesize value=_value - In the implementation block
-(id)description;
-(CNLabeledValue *)value;
-(id)initWithValue:(id)arg1 ;
@end

