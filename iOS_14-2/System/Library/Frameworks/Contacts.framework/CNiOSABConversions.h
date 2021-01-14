/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/


#import <Contacts/Contacts-Structs.h>
@interface CNiOSABConversions : NSObject
+(void)initialize;
+(void)updateContact:(id)arg1 fromABPerson:(void*)arg2 keysToConvert:(id)arg3 availableKeyDescriptor:(id*)arg4 ;
+(id)numberFromIntegerABBytes:(char*)arg1 length:(unsigned long long)arg2 ;
+(id)stringFromABBytes:(char*)arg1 length:(unsigned long long)arg2 ;
+(id)dataFromABBytes:(char*)arg1 length:(unsigned long long)arg2 ;
+(id)contactFromABPerson:(void*)arg1 uniqueKeysToConvert:(id)arg2 mutable:(BOOL)arg3 ;
+(id)dateFromABBytes:(char*)arg1 length:(unsigned long long)arg2 ;
+(id)arrayByMappingTransform:(/*^block*/id)arg1 onCFArray:(CFArrayRef)arg2 ;
+(id)os_log;
@end

