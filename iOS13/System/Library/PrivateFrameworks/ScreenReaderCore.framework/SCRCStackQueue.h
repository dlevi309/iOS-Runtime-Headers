/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
*/


@class _SCRCStackNode;

@interface SCRCStackQueue : NSObject {

	_SCRCStackNode* _firstNode;
	_SCRCStackNode* _lastNode;
	unsigned long long _count;

}
-(void)dealloc;
-(id)description;
-(unsigned long long)count;
-(id)objectEnumerator;
-(BOOL)isEmpty;
-(void)removeAllObjects;
-(void)pushObject:(id)arg1 ;
-(id)popObject;
-(void)enqueueObject:(id)arg1 ;
-(id)dequeueObject;
-(id)popObjectRetained;
-(id)dequeueObjectRetained;
-(void)pushArray:(id)arg1 ;
-(id)topObject;
@end

