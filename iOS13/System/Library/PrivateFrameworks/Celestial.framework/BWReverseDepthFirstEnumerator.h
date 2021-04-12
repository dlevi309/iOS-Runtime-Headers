/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/BWNodeEnumerator.h>

@class NSMutableArray;

@interface BWReverseDepthFirstEnumerator : BWNodeEnumerator {

	int _ordering;
	NSMutableArray* _stack;
	unsigned long long _currentSinkIndex;

}
-(void)dealloc;
-(id)nextObject;
-(id)initWithGraph:(id)arg1 vertexOrdering:(int)arg2 ;
-(id)_nextUnvisitedParent:(id)arg1 ;
@end

