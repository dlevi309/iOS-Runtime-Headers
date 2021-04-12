/*
* Generated on Monday, March 1, 2021 at 2:34:45 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(DIAttributePickerItem *)defaultValue;
-(void)setDefaultValue:(DIAttributePickerItem *)arg1 ;
-(void)setCurrentValue:(DIAttributePickerItem *)arg1 ;
-(NSArray *)pickerItems;
-(void)setPickerItems:(NSArray *)arg1 ;
-(id)getCurrentValue;
@end

