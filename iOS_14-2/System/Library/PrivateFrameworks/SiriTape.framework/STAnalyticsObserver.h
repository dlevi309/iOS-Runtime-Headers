/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriTape.framework/SiriTape
*/


@class AFAnalyticsObserverConnection, NSMutableDictionary;

@interface STAnalyticsObserver : NSObject {

	AFAnalyticsObserverConnection* _connection;
	NSMutableDictionary* _observerActions;

}
+(id)sharedObserver;
-(id)init;
-(void)invalidate;
-(void)dealloc;
-(void)addObserverActionForType:(long long)arg1 withBlock:(/*^block*/id)arg2 ;
@end

