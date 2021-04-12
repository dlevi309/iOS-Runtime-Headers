/*
* Generated on Thursday, January 14, 2021 at 2:27:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)loadState;
-(void)saveState;
-(void)synchronouslyReflectCurrentValue;
-(void)setWakeRequestToken:(int)arg1 ;
-(void)obtainNextUserVisibleWakeRequest;
-(void)start;
-(void)setNextUserVisibleWakeRequestDate:(NSDate *)arg1 ;
-(NSString *)nextUserVisibleWakeRequestor;
-(void)stop;
-(void)deactivate;
-(NSDate *)nextUserVisibleWakeRequestDate;
-(NSObject*<OS_dispatch_source>)updateTimer;
-(void)setUpdateTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(int)wakeRequestToken;
-(void)dealloc;
-(void)setNextUserVisibleWakeRequestor:(NSString *)arg1 ;
@end

