/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPKnownField.h>

@interface TSPKnownFieldStringValue : TSPKnownField {

	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > _value;

}
-(id)debugDescription;
-(id)initWithFieldDescriptor:(const FieldDescriptor*)arg1 fieldInfo:(const FieldInfo*)arg2 message:(const Message*)arg3 reflection:(const Reflection*)arg4 ;
-(void)mergeToMessage:(Message*)arg1 reflection:(const Reflection*)arg2 ;
@end

