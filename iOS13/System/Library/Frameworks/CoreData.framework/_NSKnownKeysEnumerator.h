/*
* Generated on Monday, March 1, 2021 at 2:30:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreData.framework/CoreData
*/

#import <CoreData/CoreData-Structs.h>
#import <CoreFoundation/NSEnumerator.h>

@interface _NSKnownKeysEnumerator : NSEnumerator {

	id _target;
	const id* _list;
	const id* _referenceItems;
	NSRange _range;
	unsigned long long _index;
	unsigned long long _flags;

}
-(void)dealloc;
-(void)_invalidate;
-(id)nextObject;
-(id)initWithArray:(const id*)arg1 forTarget:(id)arg2 withReferenceValues:(const id*)arg3 andRange:(NSRange)arg4 andCopyItems:(BOOL)arg5 ;
@end

