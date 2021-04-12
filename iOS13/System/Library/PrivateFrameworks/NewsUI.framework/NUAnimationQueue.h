/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/


@class NSMutableArray;

@interface NUAnimationQueue : NSObject {

	BOOL _running;
	NSMutableArray* _queue;

}

@property (nonatomic,readonly) NSMutableArray * queue;                   //@synthesize queue=_queue - In the implementation block
@property (assign,getter=isRunning,nonatomic) BOOL running;              //@synthesize running=_running - In the implementation block
-(id)init;
-(NSMutableArray *)queue;
-(void)cancel;
-(BOOL)isRunning;
-(void)addAnimation:(/*^block*/id)arg1 ;
-(void)setRunning:(BOOL)arg1 ;
-(void)runUntilEmpty;
@end

