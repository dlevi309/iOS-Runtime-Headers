/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/

#import <ContactsUI/ContactsUI-Structs.h>
#import <ContactsUI/CNPropertySimpleEditingCell.h>

@class NSArray;

@interface CNPropertyPhoneNumberEditingCell : CNPropertySimpleEditingCell {

	NSArray* _previousValue;

}

@property (nonatomic,retain) NSArray * previousValue;              //@synthesize previousValue=_previousValue - In the implementation block
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
-(SCD_Struct_CN9)suggestionsForString:(id)arg1 inputIndex:(unsigned)arg2 ;
-(NSArray *)previousValue;
-(void)setPreviousValue:(NSArray *)arg1 ;
@end

