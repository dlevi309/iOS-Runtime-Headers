/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSMutableDictionary.h>

@interface __NSCFDictionary : NSMutableDictionary {

	unsigned char _cfinfo[4];
	unsigned _rc;
	unsigned _bits[4];
	void* _callbacks;
	id* _values;
	id* _keys;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(void)setObservationInfo:(void*)arg1 ;
-(oneway void)release;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS1*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(BOOL)_tryRetain;
-(id)retain;
-(BOOL)_isDeallocating;
-(unsigned long long)count;
-(void)removeObjectForKey:(id)arg1 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)keyEnumerator;
-(Class)classForCoder;
-(id)objectForKey:(id)arg1 ;
-(unsigned long long)retainCount;
-(void)removeAllObjects;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
@end

