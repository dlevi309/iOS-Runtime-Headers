/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WeatherFoundation.framework/WeatherFoundation
*/


@protocol OS_dispatch_queue;
@class NSObject, NSMutableDictionary, NSString;

@interface WFAggregateDictionary : NSObject {

	NSObject*<OS_dispatch_queue> _queue;
	NSMutableDictionary* _failTrackerDict;
	NSString* _domain;
	unsigned long long _requestFailures;
	unsigned long long _requestSuccesses;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                 //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * failTrackerDict;              //@synthesize failTrackerDict=_failTrackerDict - In the implementation block
@property (nonatomic,copy) NSString * domain;                                    //@synthesize domain=_domain - In the implementation block
@property (assign,nonatomic) unsigned long long requestFailures;                 //@synthesize requestFailures=_requestFailures - In the implementation block
@property (assign,nonatomic) unsigned long long requestSuccesses;                //@synthesize requestSuccesses=_requestSuccesses - In the implementation block
+(id)defaultAggregateDictionary;
-(id)init;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(NSString *)domain;
-(void)setDomain:(NSString *)arg1 ;
-(double)failureRate;
-(unsigned long long)requestFailures;
-(unsigned long long)requestSuccesses;
-(void)setFailTrackerDict:(NSMutableDictionary *)arg1 ;
-(void)_queue_addValueForScalarKey:(id)arg1 value:(long long)arg2 ;
-(id)failTrackerForAPIVersion:(id)arg1 ;
-(void)_queue_pushValue:(double)arg1 forKey:(id)arg2 ;
-(NSMutableDictionary *)failTrackerDict;
-(void)logRequestFailureForAPIVersion:(id)arg1 date:(id)arg2 ;
-(void)logRequestSuccessForAPIVersion:(id)arg1 date:(id)arg2 ;
-(void)logFallbackFromAPIVersion:(id)arg1 date:(id)arg2 ;
-(void)logLocationAccuracy:(double)arg1 ;
-(void)setRequestFailures:(unsigned long long)arg1 ;
-(void)setRequestSuccesses:(unsigned long long)arg1 ;
@end

