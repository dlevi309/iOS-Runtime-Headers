/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
*/


@class _SCRCStackNode;

@interface SCRCStackQueue : NSObject {

	_SCRCStackNode* _firstNode;
	_SCRCStackNode* _lastNode;
	unsigned long long _count;

}
-(id)objectEnumerator;
-(unsigned long long)count;
-(id)dequeueObject;
-(id)description;
-(void)pushObject:(id)arg1 ;
-(void)removeAllObjects;
-(id)popObject;
-(void)enqueueObject:(id)arg1 ;
-(BOOL)isEmpty;
-(void)dealloc;
-(id)topObject;
-(id)popObjectRetained;
-(id)dequeueObjectRetained;
-(void)pushArray:(id)arg1 ;
@end

