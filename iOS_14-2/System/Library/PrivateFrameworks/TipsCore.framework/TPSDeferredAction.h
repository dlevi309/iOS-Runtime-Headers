/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/


@protocol TPSDeferredActionDelegate, OS_dispatch_queue;
#import <TipsCore/TipsCore-Structs.h>
@class NSObject;

@interface TPSDeferredAction : NSObject {

	BOOL _scheduled;
	os_unfair_lock_s _lock;
	id<TPSDeferredActionDelegate> _delegate;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (assign,nonatomic) BOOL scheduled;                                             //@synthesize scheduled=_scheduled - In the implementation block
@property (assign,nonatomic) os_unfair_lock_s lock;                                      //@synthesize lock=_lock - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                         //@synthesize queue=_queue - In the implementation block
@property (assign,nonatomic,__weak) id<TPSDeferredActionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithQueue:(id)arg1 ;
-(void)setScheduled:(BOOL)arg1 ;
-(id)init;
-(id<TPSDeferredActionDelegate>)delegate;
-(os_unfair_lock_s)lock;
-(void)setDelegate:(id<TPSDeferredActionDelegate>)arg1 ;
-(void)scheduleNextRunLoop;
-(void)setLock:(os_unfair_lock_s)arg1 ;
-(BOOL)scheduled;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

