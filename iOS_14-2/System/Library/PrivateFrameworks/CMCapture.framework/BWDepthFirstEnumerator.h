/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/BWNodeEnumerator.h>

@class NSMutableArray;

@interface BWDepthFirstEnumerator : BWNodeEnumerator {

	int _ordering;
	NSMutableArray* _stack;
	unsigned long long _currentSourceIndex;

}
-(id)nextObject;
-(id)_nextUnvisitedChild:(id)arg1 ;
-(id)initWithGraph:(id)arg1 vertexOrdering:(int)arg2 ;
-(void)dealloc;
@end

