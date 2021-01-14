/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/


#import <TSPersistence/TSPersistence-Structs.h>
@class TSPLazyReferenceArray, NSArray;

@interface TSPKnownFieldReferencesHelper : NSObject {

	RepeatedField<long long>* _objectReferences;
	RepeatedField<long long>* _dataReferences;
	TSPLazyReferenceArray* _strongObjects;
	TSPLazyReferenceArray* _weakObjects;
	NSArray* _datas;

}
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(void)processFieldDescriptor:(const FieldDescriptor*)arg1 message:(const Message*)arg2 reflection:(const Reflection*)arg3 ;
-(void)processFieldsFromMessage:(const Message*)arg1 messageDescriptor:(const Descriptor*)arg2 reflection:(const Reflection*)arg3 ;
-(id)initWithFieldDescriptor:(const FieldDescriptor*)arg1 message:(const Message*)arg2 reflection:(const Reflection*)arg3 ;
@end

