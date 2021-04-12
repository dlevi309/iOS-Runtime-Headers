/*
* Generated on Monday, March 1, 2021 at 2:35:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSString *)currentTestName;
-(void)setCurrentTestName:(NSString *)arg1 ;
-(void)markUserLaunchInitiationTime;
-(id)_idleTimerDisableAssertions;
-(void)_prepareForTestStartup:(id)arg1 ;
-(void)_handleTestEnded;
-(void)_installTestEndedHandler:(/*^block*/id)arg1 ;
-(NSString *)scrollTestActiveSubtest;
-(void)setScrollTestActiveSubtest:(NSString *)arg1 ;
@end

