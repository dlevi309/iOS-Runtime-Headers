/*
* Generated on Thursday, January 14, 2021 at 2:25:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableArray, NSMutableDictionary, NSString;

@interface SBApplicationTestingManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableArray* _queue_testEndedHandlers;
	NSMutableDictionary* _idleTimerDisableAssertions;
	NSString* _currentTestName;
	NSString* _scrollTestActiveSubtest;

}

@property (getter=_idleTimerDisableAssertions,nonatomic,readonly) NSMutableDictionary * idleTimerDisableAssertions;              //@synthesize idleTimerDisableAssertions=_idleTimerDisableAssertions - In the implementation block
@property (nonatomic,copy) NSString * currentTestName;                                                                           //@synthesize currentTestName=_currentTestName - In the implementation block
@property (nonatomic,copy) NSString * scrollTestActiveSubtest;                                                                   //@synthesize scrollTestActiveSubtest=_scrollTestActiveSubtest - In the implementation block
+(id)sharedInstance;
-(void)_installTestEndedHandler:(/*^block*/id)arg1 ;
-(id)init;
-(void)setScrollTestActiveSubtest:(NSString *)arg1 ;
-(void)setCurrentTestName:(NSString *)arg1 ;
-(void)markUserLaunchInitiationTime;
-(id)_idleTimerDisableAssertions;
-(NSString *)scrollTestActiveSubtest;
-(NSString *)currentTestName;
-(void)_handleTestEnded;
-(void)_prepareForTestStartup:(id)arg1 ;
@end

