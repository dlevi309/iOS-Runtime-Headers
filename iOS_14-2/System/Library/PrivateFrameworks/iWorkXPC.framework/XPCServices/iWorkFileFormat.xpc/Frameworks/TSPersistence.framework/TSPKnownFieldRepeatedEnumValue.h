/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPKnownFieldRepeatedNumericValue.h>

@interface TSPKnownFieldRepeatedEnumValue : TSPKnownFieldRepeatedNumericValue {

	shared_ptr<google::protobuf::UnknownFieldSet>* _unknownFieldSet;

}
-(id)debugDescription;
-(id)initWithFieldDescriptor:(const FieldDescriptor*)arg1 fieldInfo:(const FieldInfo*)arg2 message:(const Message*)arg3 reflection:(const Reflection*)arg4 unknownFieldSet:(shared_ptr<google::protobuf::UnknownFieldSet>*)arg5 ;
-(void)mergeToUnknownFieldSet:(UnknownFieldSet*)arg1 ;
-(void)mergeToMessage:(Message*)arg1 reflection:(const Reflection*)arg2 ;
-(BOOL)hasUnknownValues;
@end

