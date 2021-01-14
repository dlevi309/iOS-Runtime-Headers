/*
* Generated on Thursday, January 14, 2021 at 2:24:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)activeVacuum;
+(id)activeVacuumQueue;
+(void)setActiveVacuum:(id)arg1 ;
+(void)startDatabaseVacuumPolicy;
+(void)startDatabaseVacuumPolicyWithPreVacuumHandler:(/*^block*/id)arg1 postVacuumHandler:(/*^block*/id)arg2 ;
+(id)lastVacuumDate;
+(void)setLastVacuumDate:(id)arg1 ;
-(void)vacuum;
-(NSTimer *)timer;
-(void)setTimer:(NSTimer *)arg1 ;
-(id)init;
-(void)setPreVacuumHandler:(id)arg1 ;
-(void)setPostVacuumHandler:(id)arg1 ;
-(void)startDatabaseVacuumPolicy;
-(id)preVacuumHandler;
-(id)postVacuumHandler;
-(void)vacuumHTMLDatabase;
-(void)stopDatabaseVacuumPolicy;
-(void)timerFired:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

