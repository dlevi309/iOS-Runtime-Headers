/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSArray.h>

@interface NSConstantArray : NSArray {

	unsigned long long _count;
	const id* _objects;

}
+(id)new;
+(id)allocWithZone:(NSZone*)arg1 ;
+(BOOL)automaticallyNotifiesObserversForKey:(id)arg1 ;
-(oneway void)release;
-(id)init;
-(BOOL)_tryRetain;
-(id)objectAtIndexedSubscript:(unsigned long long)arg1 ;
-(id)initWithObjects:(const id*)arg1 count:(unsigned long long)arg2 ;
-(id)objectEnumerator;
-(id)mutableCopy;
-(id)retain;
-(BOOL)_isDeallocating;
-(id)autorelease;
-(unsigned long long)count;
-(void)getObjects:(id*)arg1 range:(NSRange)arg2 ;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(id)copy;
-(unsigned long long)retainCount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

