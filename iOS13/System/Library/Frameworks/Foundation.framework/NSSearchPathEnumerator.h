/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <CoreFoundation/NSEnumerator.h>

@interface NSSearchPathEnumerator : NSEnumerator {

	long long state;
	unsigned long long directory;
	unsigned long long domainMask;

}
-(id)nextObject;
-(id)initWithDirectory:(unsigned long long)arg1 domains:(unsigned long long)arg2 ;
@end

