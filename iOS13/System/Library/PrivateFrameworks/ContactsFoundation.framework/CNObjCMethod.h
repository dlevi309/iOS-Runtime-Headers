/*
* Generated on Monday, March 1, 2021 at 2:30:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContactsFoundation.framework/ContactsFoundation
*/


#import <ContactsFoundation/ContactsFoundation-Structs.h>
@class NSString;

@interface CNObjCMethod : NSObject {

	NSString* _name;
	/*function pointer*/void* _implementation;
	NSString* _typeEncoding;

}

@property (readonly) SEL selector; 
@property (copy,readonly) NSString * name;                                  //@synthesize name=_name - In the implementation block
@property (readonly) /*function pointer*/void* implementation;              //@synthesize implementation=_implementation - In the implementation block
@property (copy,readonly) NSString * typeEncoding;                          //@synthesize typeEncoding=_typeEncoding - In the implementation block
+(id)methodWithName:(id)arg1 implementation:(/*function pointer*/void*)arg2 typeEncoding:(id)arg3 ;
-(NSString *)name;
-(SEL)selector;
-(NSString *)typeEncoding;
-(id)initWithName:(id)arg1 implementation:(/*function pointer*/void*)arg2 typeEncoding:(id)arg3 ;
-(id)initWithMethod:(objc_methodRef)arg1 ;
-(id)methodBySettingName:(id)arg1 ;
-(id)performOnObject:(id)arg1 ;
-(/*function pointer*/void*)implementation;
@end
