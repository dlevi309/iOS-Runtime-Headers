/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <libobjc.A.dylib/RERelevanceEngineSubsystemProperties.h>
#import <libobjc.A.dylib/REActivityTrackerDelegate.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, REActivityTracker, RERelevanceEngine;

@interface RERelevanceEngineSubsystem : NSObject <RERelevanceEngineSubsystemProperties, REActivityTrackerDelegate> {

	NSObject*<OS_dispatch_queue> _relevanceEngineQueue;
	REActivityTracker* _activityTracker;
	BOOL _running;
	os_unfair_lock_s _lock;
	RERelevanceEngine* _relevanceEngine;

}

@property (nonatomic,__weak,readonly) RERelevanceEngine * relevanceEngine;              //@synthesize relevanceEngine=_relevanceEngine - In the implementation block
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue; 
@property (getter=isRunning,nonatomic,readonly) BOOL running; 
@property (nonatomic,readonly) NSString * name; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setRunning:(BOOL)arg1 ;
-(void)pause;
-(NSString *)name;
-(BOOL)isRunning;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)resume;
-(void)dealloc;
-(id)initWithRelevanceEngine:(id)arg1 ;
-(RERelevanceEngine *)relevanceEngine;
-(void)beginActivity:(id)arg1 forObject:(id)arg2 ;
-(void)endActivity:(id)arg1 forObject:(id)arg2 ;
-(void)trackObject:(id)arg1 ;
-(void)activityTracker:(id)arg1 didBeginActivity:(id)arg2 ;
-(void)activityTracker:(id)arg1 didEndActivity:(id)arg2 ;
-(void)withdrawObject:(id)arg1 ;
@end

