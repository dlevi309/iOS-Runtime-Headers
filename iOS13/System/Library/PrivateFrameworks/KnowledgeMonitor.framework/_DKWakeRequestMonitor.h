/*
* Generated on Monday, March 1, 2021 at 2:34:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/KnowledgeMonitor.framework/KnowledgeMonitor
*/

#import <KnowledgeMonitor/_DKMonitor.h>

@protocol OS_dispatch_source;
@class NSDate, NSString, NSObject;

@interface _DKWakeRequestMonitor : _DKMonitor {

	BOOL _updateTimerResumed;
	int _wakeRequestToken;
	NSDate* _nextUserVisibleWakeRequestDate;
	NSString* _nextUserVisibleWakeRequestor;
	NSObject*<OS_dispatch_source> _updateTimer;

}

@property (nonatomic,retain) NSDate * nextUserVisibleWakeRequestDate;                //@synthesize nextUserVisibleWakeRequestDate=_nextUserVisibleWakeRequestDate - In the implementation block
@property (nonatomic,retain) NSString * nextUserVisibleWakeRequestor;                //@synthesize nextUserVisibleWakeRequestor=_nextUserVisibleWakeRequestor - In the implementation block
@property (assign,nonatomic) int wakeRequestToken;                                   //@synthesize wakeRequestToken=_wakeRequestToken - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> updateTimer;              //@synthesize updateTimer=_updateTimer - In the implementation block
+(id)entitlements;
+(id)eventStream;
-(void)dealloc;
-(void)stop;
-(void)start;
-(void)synchronouslyReflectCurrentValue;
-(void)deactivate;
-(id)loadState;
-(void)saveState;
-(void)setUpdateTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)updateTimer;
-(void)obtainNextUserVisibleWakeRequest;
-(NSDate *)nextUserVisibleWakeRequestDate;
-(void)setNextUserVisibleWakeRequestDate:(NSDate *)arg1 ;
-(NSString *)nextUserVisibleWakeRequestor;
-(void)setNextUserVisibleWakeRequestor:(NSString *)arg1 ;
-(int)wakeRequestToken;
-(void)setWakeRequestToken:(int)arg1 ;
@end

