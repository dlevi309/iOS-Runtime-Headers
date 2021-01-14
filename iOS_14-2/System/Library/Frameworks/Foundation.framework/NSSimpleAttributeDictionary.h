/*
* Generated on Thursday, January 14, 2021 at 2:20:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <Foundation/Foundation-Structs.h>
#import <CoreFoundation/NSDictionary.h>

@interface NSSimpleAttributeDictionary : NSDictionary {

	unsigned numElements;
	unsigned refCount;
	NSSimpleAttributeDictionaryElement elements[1];

}
+(id)emptyAttributeDictionary;
+(id)newWithDictionary:(id)arg1 ;
-(unsigned long long)slotForKey:(id)arg1 ;
-(unsigned long long)count;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)keyEnumerator;
-(id)objectForKey:(id)arg1 ;
-(id)newWithKey:(id)arg1 object:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

