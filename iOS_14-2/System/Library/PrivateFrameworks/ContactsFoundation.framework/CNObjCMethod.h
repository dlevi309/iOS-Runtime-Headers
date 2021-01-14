/*
* Generated on Thursday, January 14, 2021 at 2:21:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(/*function pointer*/void*)implementation;
-(SEL)selector;
-(NSString *)name;
-(id)initWithName:(id)arg1 implementation:(/*function pointer*/void*)arg2 typeEncoding:(id)arg3 ;
-(id)initWithMethod:(objc_methodRef)arg1 ;
-(id)methodBySettingName:(id)arg1 ;
-(id)performOnObject:(id)arg1 ;
-(NSString *)typeEncoding;
@end

