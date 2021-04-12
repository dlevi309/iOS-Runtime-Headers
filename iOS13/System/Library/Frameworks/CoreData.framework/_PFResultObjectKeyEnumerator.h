/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@interface _PFResultObjectKeyEnumerator : NSEnumerator {

	id _target;
	const id* _keys;
	unsigned long long* _referenceItems;
	NSRange _range;
	unsigned long long _index;

}
-(void)dealloc;
-(void)_invalidate;
-(id)nextObject;
-(id)initWithArray:(const id*)arg1 forTarget:(id)arg2 withReferenceValues:(unsigned long long*)arg3 andRange:(NSRange)arg4 ;
@end

