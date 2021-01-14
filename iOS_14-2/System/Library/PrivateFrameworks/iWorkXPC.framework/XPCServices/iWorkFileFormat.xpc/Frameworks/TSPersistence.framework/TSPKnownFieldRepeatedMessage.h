/*
* Generated on Thursday, January 14, 2021 at 2:28:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <TSPersistence/TSPersistence-Structs.h>
#import <TSPersistence/TSPKnownFieldRepeatedStringValue.h>

@class TSPKnownFieldReferencesHelper;

@interface TSPKnownFieldRepeatedMessage : TSPKnownFieldRepeatedStringValue {

	TSPKnownFieldReferencesHelper* _referencesHelper;

}
-(id)debugDescription;
-(void)loadFromUnarchiver:(id)arg1 ;
-(void)saveToArchiver:(id)arg1 ;
-(id)initWithFieldDescriptor:(const FieldDescriptor*)arg1 fieldInfo:(const FieldInfo*)arg2 message:(const Message*)arg3 reflection:(const Reflection*)arg4 ;
@end

