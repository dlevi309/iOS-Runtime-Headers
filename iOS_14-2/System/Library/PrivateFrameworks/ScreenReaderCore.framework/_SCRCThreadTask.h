/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)fire;
-(void)dealloc;
-(id)initWithTarget:(id)arg1 selector:(SEL)arg2 cancelMask:(unsigned)arg3 count:(unsigned)arg4 firstObject:(id)arg5 moreObjects:(char*)arg6 ;
-(void)setWaitLock:(id)arg1 ;
@end

