/*
* Generated on Monday, March 1, 2021 at 2:33:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface ISDeferredDealloc : NSObject {

	NSObject*<OS_dispatch_queue> _deferredDeallocQueue;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)_performDeferredDealloc:(id)arg1 ;
-(void)_performDeferredDealloc:(id)arg1 withDelay:(double)arg2 ;
@end

