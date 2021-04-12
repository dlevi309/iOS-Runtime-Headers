/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/CNPropertyGroupItem.h>

@class CNPhoneNumber;

@interface CNPropertyGroupPhoneItem : CNPropertyGroupItem

@property (nonatomic,readonly) CNPhoneNumber * phoneNumber; 
+(id)emptyValueForLabel:(id)arg1 ;
-(id)normalizedValue;
-(id)defaultActionURL;
-(CNPhoneNumber *)phoneNumber;
-(id)bestLabel:(id)arg1 ;
-(id)displayStringForValue:(id)arg1 ;
-(id)valueForDisplayString:(id)arg1 ;
@end

