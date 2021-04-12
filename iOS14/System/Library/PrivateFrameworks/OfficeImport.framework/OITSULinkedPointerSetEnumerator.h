/*
* Generated on Thursday, January 14, 2021 at 2:28:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

