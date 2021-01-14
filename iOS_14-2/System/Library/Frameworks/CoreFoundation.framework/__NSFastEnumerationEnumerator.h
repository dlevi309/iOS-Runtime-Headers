/*
* Generated on Thursday, January 14, 2021 at 2:20:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	SCD_Struct_NS19* _state;

}
+(id)allocWithZone:(NSZone*)arg1 ;
-(id)nextObject;
-(id)initWithObject:(id)arg1 ;
-(void)dealloc;
@end

