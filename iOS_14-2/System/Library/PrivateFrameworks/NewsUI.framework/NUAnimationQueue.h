/*
* Generated on Thursday, January 14, 2021 at 2:25:58 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI.framework/NewsUI
*/


@class NSMutableArray;

@interface NUAnimationQueue : NSObject {

	BOOL _running;
	NSMutableArray* _queue;

}

@property (nonatomic,readonly) NSMutableArray * queue;                   //@synthesize queue=_queue - In the implementation block
@property (assign,getter=isRunning,nonatomic) BOOL running;              //@synthesize running=_running - In the implementation block
-(void)setRunning:(BOOL)arg1 ;
-(id)init;
-(void)addAnimation:(/*^block*/id)arg1 ;
-(BOOL)isRunning;
-(NSMutableArray *)queue;
-(void)runUntilEmpty;
-(void)cancel;
@end

