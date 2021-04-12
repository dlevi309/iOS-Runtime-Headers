/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <libobjc.A.dylib/NSMutableCopying.h>

@interface __CFPrefsWeakObservers : NSObject <NSMutableCopying> {

	cfobservers_t* values;
	unsigned long long count;

}
-(id)init;
-(void)dealloc;
-(id)debugDescription;
-(id)mutableCopyWithZone:(NSZone*)arg1 ;
-(unsigned char)addObject:(id)arg1 ;
-(unsigned char)removeObject:(id)arg1 ;
-(unsigned long long)approximateCount;
-(unsigned long long)borrowObjects:(id*)arg1 count:(unsigned long long)arg2 ;
@end

