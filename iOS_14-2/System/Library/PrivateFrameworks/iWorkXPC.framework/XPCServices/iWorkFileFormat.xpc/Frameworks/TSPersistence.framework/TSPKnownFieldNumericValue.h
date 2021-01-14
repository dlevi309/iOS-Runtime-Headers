/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPKnownField.h>

@class NSNumber;

@interface TSPKnownFieldNumericValue : TSPKnownField {

	NSNumber* _value;

}
-(id)debugDescription;
-(id)initWithFieldDescriptor:(const FieldDescriptor*)arg1 fieldInfo:(const FieldInfo*)arg2 message:(const Message*)arg3 reflection:(const Reflection*)arg4 ;
-(void)mergeToMessage:(Message*)arg1 reflection:(const Reflection*)arg2 ;
-(id)initSubclassWithFieldDescriptor:(const FieldDescriptor*)arg1 fieldInfo:(const FieldInfo*)arg2 message:(const Message*)arg3 reflection:(const Reflection*)arg4 ;
@end

