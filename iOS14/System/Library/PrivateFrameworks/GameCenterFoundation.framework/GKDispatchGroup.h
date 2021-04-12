/*
* Generated on Thursday, January 14, 2021 at 2:24:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterFoundation.framework/GameCenterFoundation
*/


@protocol OS_dispatch_group;
@class NSString, NSObject, GKThreadsafeDictionary, NSError, GKActivity;

@interface GKDispatchGroup : NSObject {

	NSString* _name;
	NSObject*<OS_dispatch_group> _group;
	GKThreadsafeDictionary* _values;
	NSError* _error;
	id result;
	int _sequence;
	BOOL _loggingEnabled;
	id _result;
	GKActivity* _activity;

}

@property (retain) GKActivity * activity;                                              //@synthesize activity=_activity - In the implementation block
@property (retain) NSError * error;                                                    //@synthesize error=_error - In the implementation block
@property (retain) id result;                                                          //@synthesize result=_result - In the implementation block
@property (assign,getter=isLoggingEnabled,nonatomic) BOOL loggingEnabled;              //@synthesize loggingEnabled=_loggingEnabled - In the implementation block
+(id)mainQueue;
+(id)dispatchGroup;
+(id)dispatchGroupWithName:(id)arg1 ;
+(id)defaultConcurrentQueue;
+(id)backgroundConcurrentQueue;
+(void)waitUntilDone:(/*^block*/id)arg1 ;
-(void)setResult:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)_values;
-(id)init;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(GKActivity *)activity;
-(long long)_waitWithDispatchTimeout:(unsigned long long)arg1 ;
-(long long)waitWithTimeout:(double)arg1 ;
-(void)setLoggingEnabled:(BOOL)arg1 ;
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(void)perform:(/*^block*/id)arg1 ;
-(id)initWithName:(id)arg1 ;
-(void)setActivity:(GKActivity *)arg1 ;
-(id)description;
-(void)wait;
-(void)enter;
-(id)allValues;
-(id)result;
-(void)notifyOnQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(BOOL)isLoggingEnabled;
-(void)notifyOnMainQueueWithBlock:(/*^block*/id)arg1 ;
-(void)join:(id)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)dealloc;
-(void)leave;
@end

