/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/CoreAccessories/PlugIns/Platform/IOKit.platform/IOKit
*/


@protocol OS_dispatch_queue, OS_dispatch_source;
@class NSMutableDictionary, NSObject;

@interface SleepAssertionManager : NSObject {

	BOOL _sleepAssertionHeld;
	BOOL _eaSleepAssertionHeld;
	BOOL _applePencilSleepAssertionHeld;
	unsigned _eaSleepAssertionID;
	unsigned _applePencilSleepAssertionID;
	NSMutableDictionary* _assertions;
	NSObject*<OS_dispatch_queue> _sleepAssertionsLock;
	NSObject*<OS_dispatch_source> _applePencilSleepAssertionTimer;
	NSObject*<OS_dispatch_queue> _applePencilSleepAssertionTimerQueue;

}

@property (nonatomic,retain) NSMutableDictionary * assertions;                                              //@synthesize assertions=_assertions - In the implementation block
@property (assign,nonatomic) BOOL sleepAssertionHeld;                                                       //@synthesize sleepAssertionHeld=_sleepAssertionHeld - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> sleepAssertionsLock;                              //@synthesize sleepAssertionsLock=_sleepAssertionsLock - In the implementation block
@property (assign,nonatomic) BOOL eaSleepAssertionHeld;                                                     //@synthesize eaSleepAssertionHeld=_eaSleepAssertionHeld - In the implementation block
@property (assign,nonatomic) unsigned eaSleepAssertionID;                                                   //@synthesize eaSleepAssertionID=_eaSleepAssertionID - In the implementation block
@property (assign,nonatomic) BOOL applePencilSleepAssertionHeld;                                            //@synthesize applePencilSleepAssertionHeld=_applePencilSleepAssertionHeld - In the implementation block
@property (assign,nonatomic) unsigned applePencilSleepAssertionID;                                          //@synthesize applePencilSleepAssertionID=_applePencilSleepAssertionID - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> applePencilSleepAssertionTimer;                  //@synthesize applePencilSleepAssertionTimer=_applePencilSleepAssertionTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> applePencilSleepAssertionTimerQueue;              //@synthesize applePencilSleepAssertionTimerQueue=_applePencilSleepAssertionTimerQueue - In the implementation block
+(id)sharedManager;
-(id)init;
-(void)dealloc;
-(NSMutableDictionary *)assertions;
-(void)setAssertions:(NSMutableDictionary *)arg1 ;
-(void)removeApplePencilSleepAssertion;
-(NSObject*<OS_dispatch_source>)applePencilSleepAssertionTimer;
-(BOOL)eaSleepAssertionHeld;
-(void)setEaSleepAssertionHeld:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)applePencilSleepAssertionTimerQueue;
-(BOOL)applePencilSleepAssertionHeld;
-(void)setApplePencilSleepAssertionHeld:(BOOL)arg1 ;
-(void)createSleepAssertionForUUID:(id)arg1 ;
-(void)destroySleepAssertionForUUID:(id)arg1 ;
-(void)createEASleepAssertion;
-(void)removeEASleepAssertion;
-(void)createApplePencilSleepAssertion;
-(BOOL)sleepAssertionHeld;
-(void)setSleepAssertionHeld:(BOOL)arg1 ;
-(NSObject*<OS_dispatch_queue>)sleepAssertionsLock;
-(void)setSleepAssertionsLock:(NSObject*<OS_dispatch_queue>)arg1 ;
-(unsigned)eaSleepAssertionID;
-(void)setEaSleepAssertionID:(unsigned)arg1 ;
-(unsigned)applePencilSleepAssertionID;
-(void)setApplePencilSleepAssertionID:(unsigned)arg1 ;
-(void)setApplePencilSleepAssertionTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(void)setApplePencilSleepAssertionTimerQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

