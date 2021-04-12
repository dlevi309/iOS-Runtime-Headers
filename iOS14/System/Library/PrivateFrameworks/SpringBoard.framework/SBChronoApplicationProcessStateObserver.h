/*
* Generated on Thursday, January 14, 2021 at 2:25:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol OS_dispatch_queue;
@class SBHIconManager, CHSApplicationProcessStateChangeConsumer, NSObject;

@interface SBChronoApplicationProcessStateObserver : NSObject {

	SBHIconManager* _iconManager;
	CHSApplicationProcessStateChangeConsumer* _chronoConsumer;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,readonly) SBHIconManager * iconManager;                                           //@synthesize iconManager=_iconManager - In the implementation block
@property (nonatomic,readonly) CHSApplicationProcessStateChangeConsumer * chronoConsumer;              //@synthesize chronoConsumer=_chronoConsumer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                                       //@synthesize queue=_queue - In the implementation block
-(id)init;
-(SBHIconManager *)iconManager;
-(CHSApplicationProcessStateChangeConsumer *)chronoConsumer;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithIconManager:(id)arg1 ;
-(void)applicationProcessStateDidChange:(id)arg1 ;
-(void)_queue_handleApplicationProcessStateDidChangeIfNecessary:(id)arg1 ;
@end

