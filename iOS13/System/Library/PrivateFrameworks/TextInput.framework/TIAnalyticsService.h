/*
* Generated on Monday, March 1, 2021 at 2:31:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TextInput.framework/TextInput
*/


@protocol TIAnalyticsServiceProvider;
@class NSMutableDictionary;

@interface TIAnalyticsService : NSObject {

	NSMutableDictionary* _eventSpecs;
	id<TIAnalyticsServiceProvider> _provider;

}

@property (nonatomic,readonly) NSMutableDictionary * eventSpecs;                     //@synthesize eventSpecs=_eventSpecs - In the implementation block
@property (nonatomic,readonly) id<TIAnalyticsServiceProvider> provider;              //@synthesize provider=_provider - In the implementation block
+(id)sharedInstance;
+(void)setMockInstance:(id)arg1 ;
-(id)init;
-(id<TIAnalyticsServiceProvider>)provider;
-(BOOL)registerEventSpec:(id)arg1 error:(id*)arg2 ;
-(BOOL)dispatchEventWithName:(id)arg1 values:(id)arg2 inputMode:(id)arg3 error:(id*)arg4 ;
-(id)initWithProvider:(id)arg1 ;
-(void)registerEventSpec:(id)arg1 ;
-(BOOL)isEventSpecRegisteredWithName:(id)arg1 ;
-(id)eventSpecFromName:(id)arg1 ;
-(void)dispatchEventWithName:(id)arg1 ;
-(void)dispatchEventWithName:(id)arg1 inputMode:(id)arg2 ;
-(void)dispatchEventWithName:(id)arg1 values:(id)arg2 ;
-(void)dispatchEventWithName:(id)arg1 values:(id)arg2 inputMode:(id)arg3 ;
-(BOOL)dispatchEventWithName:(id)arg1 error:(id*)arg2 ;
-(BOOL)dispatchEventWithName:(id)arg1 inputMode:(id)arg2 error:(id*)arg3 ;
-(BOOL)dispatchEventWithName:(id)arg1 values:(id)arg2 error:(id*)arg3 ;
-(BOOL)_dispatchEventWithName:(id)arg1 values:(id)arg2 inputMode:(id)arg3 error:(id*)arg4 ;
-(void)addSettings:(id)arg1 toPayload:(id)arg2 errors:(id)arg3 ;
-(id)settingsFromEventSpec:(id)arg1 values:(id)arg2 errors:(id)arg3 ;
-(id)settingsFromEventSpec:(id)arg1 inputMode:(id)arg2 errors:(id)arg3 ;
-(void)appendToErrors:(id)arg1 code:(long long)arg2 message:(id)arg3 ;
-(void)logDispatchErrorsForEventWithName:(id)arg1 errors:(id)arg2 ;
-(void)sendCoreAnalyticsEventWithName:(id)arg1 payload:(id)arg2 ;
-(NSMutableDictionary *)eventSpecs;
@end

