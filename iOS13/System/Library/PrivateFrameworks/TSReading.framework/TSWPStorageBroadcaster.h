/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@interface TSWPStorageBroadcaster : NSObject {

	set<id<TSWPStorageObserver>, std::__1::less<id<TSWPStorageObserver> >, std::__1::allocator<id<TSWPStorageObserver> > >* _observers;

}
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)removeAllObservers;
-(void)broadcastStorage:(id)arg1 didChangeRange:(NSRange)arg2 delta:(long long)arg3 broadcastKind:(int)arg4 ;
@end

