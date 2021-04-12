/*
* Generated on Monday, March 1, 2021 at 2:35:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SiriTape.framework/SiriTape
*/


@class AFAnalyticsObserverConnection, NSMutableDictionary;

@interface STAnalyticsObserver : NSObject {

	AFAnalyticsObserverConnection* _connection;
	NSMutableDictionary* _observerActions;

}
+(id)sharedObserver;
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(void)addObserverActionForType:(long long)arg1 withBlock:(/*^block*/id)arg2 ;
@end

