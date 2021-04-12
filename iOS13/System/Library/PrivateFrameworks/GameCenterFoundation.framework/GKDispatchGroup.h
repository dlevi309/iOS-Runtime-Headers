/*
* Generated on Monday, March 1, 2021 at 2:34:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(void)waitUntilDone:(/*^block*/id)arg1 ;
+(id)backgroundConcurrentQueue;
+(id)dispatchGroupWithName:(id)arg1 ;
+(id)defaultConcurrentQueue;
-(id)init;
-(void)dealloc;
-(id)description;
-(id)allValues;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)_values;
-(id)initWithName:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(GKActivity *)activity;
-(void)setActivity:(GKActivity *)arg1 ;
-(void)wait;
-(id)result;
-(void)setResult:(id)arg1 ;
-(void)perform:(/*^block*/id)arg1 ;
-(long long)waitWithTimeout:(double)arg1 ;
-(void)setLoggingEnabled:(BOOL)arg1 ;
-(void)leave;
-(BOOL)isLoggingEnabled;
-(void)enter;
-(void)notifyOnMainQueueWithBlock:(/*^block*/id)arg1 ;
-(void)join:(id)arg1 queue:(id)arg2 block:(/*^block*/id)arg3 ;
-(void)notifyOnQueue:(id)arg1 block:(/*^block*/id)arg2 ;
-(long long)_waitWithDispatchTimeout:(unsigned long long)arg1 ;
@end

