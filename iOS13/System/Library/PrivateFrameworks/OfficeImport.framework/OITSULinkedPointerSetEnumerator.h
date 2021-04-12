/*
* Generated on Monday, March 1, 2021 at 2:35:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
*/

#import <CoreFoundation/NSEnumerator.h>

@class OITSULinkedPointerSetEntry;

@interface OITSULinkedPointerSetEnumerator : NSEnumerator {

	OITSULinkedPointerSetEntry* mHead;
	OITSULinkedPointerSetEntry* mLastUsed;

}
-(id)nextObject;
-(id)initWithFirstEntry:(id)arg1 ;
@end

