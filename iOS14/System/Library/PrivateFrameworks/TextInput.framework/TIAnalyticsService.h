/*
* Generated on Thursday, January 14, 2021 at 2:20:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/


@protocol OS_dispatch_queue, TIAnalyticsServiceProvider;
@class NSObject, NSMutableDictionary;

@interface TIAnalyticsService : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _eventSpecs;
	id<TIAnalyticsServiceProvider> _provider;

}

@property (nonatomic,readonly) NSMutableDictionary * eventSpecs;                     //@synthesize eventSpecs=_eventSpecs - In the implementation block
@property (nonatomic,readonly) id<TIAnalyticsServiceProvider> provider;              //@synthesize provider=_provider - In the implementation block
+(id)sharedInstance;
+(void)setMockInstance:(id)arg1 ;
-(id)initWithProvider:(id)arg1 ;
-(BOOL)dispatchEventWithName:(id)arg1 values:(id)arg2 error:(id*)arg3 ;
-(void)dispatchEventWithName:(id)arg1 values:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(id)init;
-(id)settingsFromInputMode:(id)arg1 eventSpec:(id)arg2 errors:(id)arg3 ;
-(BOOL)dispatchEventWithName:(id)arg1 inputMode:(id)arg2 error:(id*)arg3 ;
-(id<TIAnalyticsServiceProvider>)provider;
-(NSMutableDictionary *)eventSpecs;
-(BOOL)dispatchEventWithName:(id)arg1 values:(id)arg2 inputMode:(id)arg3 error:(id*)arg4 ;
-(void)queueCompletionHandler:(/*^block*/id)arg1 ;
-(void)dispatchEventWithName:(id)arg1 inputMode:(id)arg2 withCompletionHandler:(/*^block*/id)arg3 ;
-(void)sendCoreAnalyticsEventWithName:(id)arg1 payload:(id)arg2 ;
-(void)dispatchEventWithName:(id)arg1 inputMode:(id)arg2 ;
-(BOOL)registerEventSpec:(id)arg1 error:(id*)arg2 ;
-(void)registerEventSpec:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)dispatchEventWithName:(id)arg1 payload:(id)arg2 testingParameters:(id)arg3 allowSparsePayload:(BOOL)arg4 withCompletionHandler:(/*^block*/id)arg5 ;
-(BOOL)dispatchEventWithName:(id)arg1 payload:(id)arg2 testingParameters:(id)arg3 allowSparsePayload:(BOOL)arg4 error:(id*)arg5 ;
-(void)addSettings:(id)arg1 toPayload:(id)arg2 errors:(id)arg3 ;
-(void)dispatchEventWithName:(id)arg1 ;
-(void)registerEventSpec:(id)arg1 ;
-(void)dispatchEventWithName:(id)arg1 values:(id)arg2 ;
-(void)dispatchEventWithName:(id)arg1 payload:(id)arg2 testingParameters:(id)arg3 allowSparsePayload:(BOOL)arg4 ;
-(void)appendToErrors:(id)arg1 code:(long long)arg2 message:(id)arg3 ;
-(void)_dispatchEventWithName:(id)arg1 payload:(id)arg2 values:(id)arg3 inputMode:(id)arg4 testingParameters:(id)arg5 allowSparsePayload:(BOOL)arg6 withCompletionHandler:(/*^block*/id)arg7 ;
-(void)dispatchEventWithName:(id)arg1 values:(id)arg2 inputMode:(id)arg3 withCompletionHandler:(/*^block*/id)arg4 ;
-(id)settingsFromPayload:(id)arg1 andValues:(id)arg2 eventSpec:(id)arg3 allowSparsePayload:(BOOL)arg4 errors:(id)arg5 ;
-(void)dispatchEventWithName:(id)arg1 values:(id)arg2 inputMode:(id)arg3 ;
-(BOOL)dispatchEventWithName:(id)arg1 error:(id*)arg2 ;
-(void)_registerEventSpec:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(void)dispatchEventWithName:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
@end

