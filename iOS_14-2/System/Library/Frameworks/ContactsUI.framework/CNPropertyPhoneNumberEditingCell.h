/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <ContactsUI/CNPropertySimpleEditingCell.h>

@class NSArray;

@interface CNPropertyPhoneNumberEditingCell : CNPropertySimpleEditingCell {

	NSArray* _previousValue;

}

@property (nonatomic,retain) NSArray * previousValue;              //@synthesize previousValue=_previousValue - In the implementation block
-(SCD_Struct_CN9)suggestionsForString:(id)arg1 inputIndex:(unsigned)arg2 ;
-(void)setPreviousValue:(NSArray *)arg1 ;
-(NSArray *)previousValue;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

