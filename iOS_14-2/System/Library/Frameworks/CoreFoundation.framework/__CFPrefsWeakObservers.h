/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface __CFPrefsWeakObservers : NSObject <NSMutableCopying> {

	cfobservers_t* values;
	unsigned long long count;

}
-(id)init;
-(id)debugDescription;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned char)addObject:(id)arg1 ;
-(unsigned char)removeObject:(id)arg1 ;
-(unsigned long long)approximateCount;
-(unsigned long long)borrowObjects:(id*)arg1 count:(unsigned long long)arg2 ;
-(void)dealloc;
@end

