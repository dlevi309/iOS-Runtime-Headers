/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/CNMultiValueUpdate.h>

@class CNLabeledValue;

@interface CNMultiValueSingleUpdate : CNMultiValueUpdate {

	CNLabeledValue* _value;

}

@property (nonatomic,readonly) CNLabeledValue * value;              //@synthesize value=_value - In the implementation block
-(id)initWithValue:(id)arg1 ;
-(id)description;
-(CNLabeledValue *)value;
@end

