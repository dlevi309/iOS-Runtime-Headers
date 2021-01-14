/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSUtility.framework/TSUtility
*/

#import <CoreFoundation/NSEnumerator.h>

@class TSULinkedPointerSetEntry;

@interface TSULinkedPointerSetEnumerator : NSEnumerator {

	TSULinkedPointerSetEntry* mHead;
	TSULinkedPointerSetEntry* mLastUsed;

}
-(id)nextObject;
-(id)initWithFirstEntry:(id)arg1 ;
@end

