/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosPlayer.framework/PhotosPlayer
*/


@protocol OS_dispatch_queue;
@class NSObject;

@interface ISDeferredDealloc : NSObject {

	NSObject*<OS_dispatch_queue> _deferredDeallocQueue;

}
+(id)sharedInstance;
-(id)init;
-(void)_performDeferredDealloc:(id)arg1 ;
-(void)_performDeferredDealloc:(id)arg1 withDelay:(double)arg2 ;
-(void)dealloc;
@end

