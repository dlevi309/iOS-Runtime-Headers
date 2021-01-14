/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSArray.h>

@interface __NSSingleObjectArrayI : NSArray {

	id _object;

}
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(BOOL)isEqualToArray:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NS19*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)objectEnumerator;
-(unsigned long long)count;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(id)lastObject;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)firstObject;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)enumerateObjectsWithOptions:(unsigned long long)arg1 usingBlock:(/*^block*/id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

