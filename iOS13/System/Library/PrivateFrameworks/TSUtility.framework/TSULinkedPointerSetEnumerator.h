/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
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

