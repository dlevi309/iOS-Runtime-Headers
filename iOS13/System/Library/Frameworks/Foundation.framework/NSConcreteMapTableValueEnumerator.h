/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/

#import <CoreFoundation/NSEnumerator.h>

@class NSConcreteMapTable;

@interface NSConcreteMapTableValueEnumerator : NSEnumerator {

	NSConcreteMapTable* mapTable;
	unsigned long long counter;

}
+(id)enumeratorWithMapTable:(id)arg1 ;
-(void)dealloc;
-(id)nextObject;
@end

