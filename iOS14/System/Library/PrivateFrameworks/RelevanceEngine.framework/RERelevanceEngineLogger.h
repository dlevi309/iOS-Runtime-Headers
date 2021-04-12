/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@protocol OS_dispatch_queue;
@class REObserverStore, NSObject;

@interface RERelevanceEngineLogger : NSObject {

	REObserverStore* _loggables;
	NSObject*<OS_dispatch_queue> _queue;

}
-(id)init;
-(void)addLoggable:(id)arg1 ;
-(void)removeLoggable:(id)arg1 ;
-(void)collectLogs:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(void)enumerateLoggables:(/*^block*/id)arg1 ;
@end

