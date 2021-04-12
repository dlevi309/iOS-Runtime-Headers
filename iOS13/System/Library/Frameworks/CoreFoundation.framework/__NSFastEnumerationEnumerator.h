/*
* Generated on Monday, March 1, 2021 at 2:30:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
*/

#import <CoreFoundation/CoreFoundation-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@protocol NSFastEnumeration;
@interface __NSFastEnumerationEnumerator : NSEnumerator {

	id<NSFastEnumeration> _obj;
	id _origObj;
	unsigned long long _index;
	unsigned long long _count;
	unsigned long long _mut;
	id _objects[16];
	SCD_Struct_NS26* _state;

}
+(id)allocWithZone:(NSZone*)arg1 ;
-(void)dealloc;
-(id)nextObject;
-(id)initWithObject:(id)arg1 ;
@end

