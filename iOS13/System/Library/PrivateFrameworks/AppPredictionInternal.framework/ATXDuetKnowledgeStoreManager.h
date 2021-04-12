/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@protocol OS_dispatch_queue, _DKKnowledgeQuerying, OS_dispatch_source;
@class NSObject, NSDate;

@interface ATXDuetKnowledgeStoreManager : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	id<_DKKnowledgeQuerying> _store;
	NSDate* _lastUsedDate;
	NSObject*<OS_dispatch_source> _pressureSource;
	unsigned long long _previousPressure;
	NSObject*<OS_dispatch_source> _expirationSource;

}
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)runBlock:(/*^block*/id)arg1 ;
-(void)_clear;
-(void)_handleMemoryPressure;
@end

