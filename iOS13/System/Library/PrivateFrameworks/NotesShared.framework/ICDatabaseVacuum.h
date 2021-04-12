/*
* Generated on Monday, March 1, 2021 at 2:33:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesShared.framework/NotesShared
*/


@protocol OS_dispatch_queue;
@class NSObject, NSTimer;

@interface ICDatabaseVacuum : NSObject {

	/*^block*/id _preVacuumHandler;
	/*^block*/id _postVacuumHandler;
	NSObject*<OS_dispatch_queue> _queue;
	NSTimer* _timer;

}

@property (nonatomic,copy) id preVacuumHandler;                               //@synthesize preVacuumHandler=_preVacuumHandler - In the implementation block
@property (nonatomic,copy) id postVacuumHandler;                              //@synthesize postVacuumHandler=_postVacuumHandler - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSTimer * timer;                                 //@synthesize timer=_timer - In the implementation block
+(id)activeVacuumQueue;
+(id)activeVacuum;
+(void)setActiveVacuum:(id)arg1 ;
+(void)startDatabaseVacuumPolicy;
+(void)startDatabaseVacuumPolicyWithPreVacuumHandler:(/*^block*/id)arg1 postVacuumHandler:(/*^block*/id)arg2 ;
+(id)lastVacuumDate;
+(void)setLastVacuumDate:(id)arg1 ;
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSTimer *)timer;
-(void)setTimer:(NSTimer *)arg1 ;
-(void)vacuum;
-(void)timerFired:(id)arg1 ;
-(void)setPreVacuumHandler:(id)arg1 ;
-(void)setPostVacuumHandler:(id)arg1 ;
-(void)startDatabaseVacuumPolicy;
-(id)preVacuumHandler;
-(id)postVacuumHandler;
-(void)vacuumHTMLDatabase;
-(void)stopDatabaseVacuumPolicy;
@end

