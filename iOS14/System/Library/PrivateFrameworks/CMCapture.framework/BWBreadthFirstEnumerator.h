/*
* Generated on Thursday, January 14, 2021 at 2:23:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
*/

#import <CMCapture/BWNodeEnumerator.h>

@class NSMutableArray;

@interface BWBreadthFirstEnumerator : BWNodeEnumerator {

	NSMutableArray* _queue;
	NSMutableArray* _holdQueue;

}
-(id)initWithGraph:(id)arg1 ;
-(id)nextObject;
-(void)addChildren:(id)arg1 ;
-(void)dealloc;
@end

