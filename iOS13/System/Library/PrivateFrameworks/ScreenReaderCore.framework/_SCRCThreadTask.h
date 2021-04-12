/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ScreenReaderCore.framework/ScreenReaderCore
*/


@class NSConditionLock, NSMutableArray;

@interface _SCRCThreadTask : NSObject {

	id _target;
	SEL _selector;
	NSConditionLock* _waitLock;
	unsigned _mask;
	NSMutableArray* _objectArray;

}
+(id)newThreadTaskWithTarget:(id)arg1 selector:(SEL)arg2 cancelMask:(unsigned)arg3 count:(unsigned)arg4 firstObject:(id)arg5 moreObjects:(char*)arg6 ;
-(void)dealloc;
-(void)fire;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 cancelMask:(unsigned)arg3 count:(unsigned)arg4 firstObject:(id)arg5 moreObjects:(char*)arg6 ;
-(void)setWaitLock:(id)arg1 ;
@end

