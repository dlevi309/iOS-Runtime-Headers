/*
* Generated on Thursday, January 14, 2021 at 2:26:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PowerUI.framework/PowerUI
*/


@protocol OS_dispatch_queue, OS_os_log, _CDUserContext;
@class NSObject, PowerUISmartChargeManager, NSDate;

@interface PowerUISleepWakeMonitor : NSObject {

	BOOL _enabled;
	unsigned long long _checkpoint;
	NSObject*<OS_dispatch_queue> _queue;
	NSObject*<OS_os_log> _log;
	id<_CDUserContext> _context;
	PowerUISmartChargeManager* _manager;
	NSDate* _desktopTransitionEvaluationDate;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                    //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_os_log> log;                              //@synthesize log=_log - In the implementation block
@property (nonatomic,retain) id<_CDUserContext> context;                            //@synthesize context=_context - In the implementation block
@property (nonatomic,retain) PowerUISmartChargeManager * manager;                   //@synthesize manager=_manager - In the implementation block
@property (nonatomic,retain) NSDate * desktopTransitionEvaluationDate;              //@synthesize desktopTransitionEvaluationDate=_desktopTransitionEvaluationDate - In the implementation block
@property (assign,nonatomic) unsigned long long checkpoint;                         //@synthesize checkpoint=_checkpoint - In the implementation block
@property (assign,nonatomic) BOOL enabled;                                          //@synthesize enabled=_enabled - In the implementation block
-(BOOL)enabled;
-(NSObject*<OS_os_log>)log;
-(void)setManager:(PowerUISmartChargeManager *)arg1 ;
-(void)setEnabled:(BOOL)arg1 ;
-(void)setCheckpoint:(unsigned long long)arg1 ;
-(void)setLog:(NSObject*<OS_os_log>)arg1 ;
-(id<_CDUserContext>)context;
-(unsigned long long)checkpoint;
-(PowerUISmartChargeManager *)manager;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)setContext:(id<_CDUserContext>)arg1 ;
-(id)initWithManager:(id)arg1 withCheckpoint:(unsigned long long)arg2 withLastDesktopCheck:(id)arg3 ;
-(NSDate *)desktopTransitionEvaluationDate;
-(void)setDesktopTransitionEvaluationDate:(NSDate *)arg1 ;
@end

