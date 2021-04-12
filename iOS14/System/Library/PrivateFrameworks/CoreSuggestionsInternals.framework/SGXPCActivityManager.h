/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <CoreSuggestionsInternals/CoreSuggestionsInternals-Structs.h>
#import <libobjc.A.dylib/SGXPCActivityManagerProtocol.h>

@class NSMutableArray, NSMutableDictionary;

@interface SGXPCActivityManager : NSObject <SGXPCActivityManagerProtocol> {

	NSMutableArray* _activities;
	NSMutableArray* _lastCriteria;
	NSMutableArray* _handlers;
	NSMutableDictionary* _currentTasks;
	BOOL _registered;
	opaque_pthread_mutex_t _lock;

}
+(id)sharedInstance;
+(id)nameForActivityId:(int)arg1 ;
-(BOOL)setState:(id)arg1 state:(long long)arg2 ;
-(id)init;
-(void)registerForActivity:(int)arg1 handler:(/*^block*/id)arg2 ;
-(id)copyCriteria:(id)arg1 ;
-(long long)getState:(id)arg1 ;
-(void)registerActivitiesWithSystem;
-(id)_taskForActivity:(id)arg1 ;
-(id)activityForActivityId:(int)arg1 ;
-(BOOL)shouldDefer:(id)arg1 ;
-(void)dealloc;
-(void)setCriteria:(id)arg1 criteria:(id)arg2 forActivity:(int)arg3 ;
@end

