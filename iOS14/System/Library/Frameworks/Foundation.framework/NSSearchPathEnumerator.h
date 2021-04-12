/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

