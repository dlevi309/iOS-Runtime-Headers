/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/

#import <Celestial/BWNodeEnumerator.h>

@class NSMutableArray;

@interface BWBreadthFirstEnumerator : BWNodeEnumerator {

	NSMutableArray* _queue;
	NSMutableArray* _holdQueue;

}
-(void)dealloc;
-(id)nextObject;
-(void)addChildren:(id)arg1 ;
-(id)initWithGraph:(id)arg1 ;
@end

