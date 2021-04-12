/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/


@class NSTimer, NSMapTable;

@interface HFSynchronizedTimer : NSObject {

	NSTimer* _activeTimer;
	NSMapTable* _observers;

}

@property (nonatomic,retain) NSTimer * activeTimer;                 //@synthesize activeTimer=_activeTimer - In the implementation block
@property (nonatomic,readonly) NSMapTable * observers;              //@synthesize observers=_observers - In the implementation block
+(id)sharedInstance;
-(id)init;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(NSMapTable *)observers;
-(NSTimer *)activeTimer;
-(void)setActiveTimer:(NSTimer *)arg1 ;
-(void)_timerDidFire;
-(void)_updateTimerState;
@end

