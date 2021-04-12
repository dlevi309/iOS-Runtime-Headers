/*
* Generated on Thursday, January 14, 2021 at 2:21:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)nextObject;
-(id)initWithArray:(const id*)arg1 forTarget:(id)arg2 withReferenceValues:(unsigned long long*)arg3 andRange:(NSRange)arg4 ;
-(void)dealloc;
@end

