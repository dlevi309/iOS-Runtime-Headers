/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@class TSWPStorage, NSArray;

@interface TSWPStorageChildEnumerator : NSEnumerator {

	TSWPStorage* _storage;
	NSRange _charRange;
	unsigned _index;
	NSArray* _charOffsetArray;

}
-(void)dealloc;
-(id)nextObject;
-(id)initWithStorage:(id)arg1 range:(NSRange)arg2 ;
@end

