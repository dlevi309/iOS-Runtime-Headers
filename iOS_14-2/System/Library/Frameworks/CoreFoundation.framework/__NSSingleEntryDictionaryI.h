/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSDictionary.h>

@interface __NSSingleEntryDictionaryI : NSDictionary {

	id _obj;
	id _key;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)getObjects:(id*)arg1 andKeys:(id*)arg2 count:(unsigned long long)arg3 ;
-(BOOL)isEqualToDictionary:(id)arg1 ;
-(void)__apply:(/*function pointer*/void*)arg1 context:(void*)arg2 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectEnumerator;
-(void)enumerateKeysAndObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(unsigned long long)count;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)keyEnumerator;
-(id)objectForKey:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

