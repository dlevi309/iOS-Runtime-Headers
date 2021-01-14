/*
* Generated on Thursday, January 14, 2021 at 2:21:26 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIFoundation.framework/UIFoundation
*/

#import <UIFoundation/UIFoundation-Structs.h>
#import <CoreFoundation/NSDictionary.h>

@interface NSAttributeDictionary : NSDictionary {

	unsigned long long numElements;
	NSAttributeDictionaryElement elements[1];

}
+(void)initialize;
+(id)emptyAttributeDictionary;
+(id)newWithDictionary:(id)arg1 ;
-(BOOL)isEqualToDictionary:(id)arg1 ;
-(void)__apply:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 ;
-(unsigned long long)count;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)keyEnumerator;
-(id)objectForKey:(id)arg1 ;
-(id)newWithKey:(id)arg1 object:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

