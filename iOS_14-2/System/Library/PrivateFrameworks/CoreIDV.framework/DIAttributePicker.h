/*
* Generated on Thursday, January 14, 2021 at 2:24:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreIDV.framework/CoreIDV
*/

#import <CoreIDV/DIAttribute.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class DIAttributePickerItem, NSArray;

@interface DIAttributePicker : DIAttribute <NSSecureCoding> {

	DIAttributePickerItem* defaultValue;
	DIAttributePickerItem* currentValue;
	NSArray* _pickerItems;

}

@property (nonatomic,copy) DIAttributePickerItem * defaultValue; 
@property (nonatomic,copy) NSArray * pickerItems;                                                    //@synthesize pickerItems=_pickerItems - In the implementation block
@property (getter=getCurrentValue,nonatomic,copy) DIAttributePickerItem * currentValue; 
+(BOOL)supportsSecureCoding;
-(void)setDefaultValue:(DIAttributePickerItem *)arg1 ;
-(id)init;
-(DIAttributePickerItem *)defaultValue;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)pickerItems;
-(void)setPickerItems:(NSArray *)arg1 ;
-(void)setCurrentValue:(DIAttributePickerItem *)arg1 ;
-(id)getCurrentValue;
@end

