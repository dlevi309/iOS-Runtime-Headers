/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@protocol OS_xpc_object;
@class NSString, NSObject;

@interface _NSBackgroundActivityInternal : NSObject {

	NSString* _identifier;
	double _interval;
	double _tolerance;
	double _delay;
	/*^block*/id _activity;
	/*^block*/id _checkInHandler;
	BOOL _repeats;
	BOOL _preregistered;
	BOOL _appRefresh;
	NSObject*<OS_xpc_object> _additionalProperties;
	long long _qualityOfService;
	NSObject*<OS_xpc_object> _currentActivity;

}

@property (copy) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (assign) long long qualityOfService;                //@synthesize qualityOfService=_qualityOfService - In the implementation block
@property (assign) BOOL repeats;                              //@synthesize repeats=_repeats - In the implementation block
@property (assign) double interval;                           //@synthesize interval=_interval - In the implementation block
@property (assign) double tolerance;                          //@synthesize tolerance=_tolerance - In the implementation block
@property (assign) double delay;                              //@synthesize delay=_delay - In the implementation block
@property (copy) id activity;                                 //@synthesize activity=_activity - In the implementation block
@property (assign) BOOL preregistered;                        //@synthesize preregistered=_preregistered - In the implementation block
@property (copy) id checkInHandler;                           //@synthesize checkInHandler=_checkInHandler - In the implementation block
@property (getter=isAppRefresh) BOOL appRefresh;              //@synthesize appRefresh=_appRefresh - In the implementation block
-(id)init;
-(void)dealloc;
-(double)tolerance;
-(void)setTolerance:(double)arg1 ;
-(NSString *)identifier;
-(id)currentActivity;
-(void)setCurrentActivity:(id)arg1 ;
-(id)additionalProperties;
-(void)setAdditionalProperties:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(double)interval;
-(void)setInterval:(double)arg1 ;
-(id)activity;
-(void)setActivity:(id)arg1 ;
-(long long)qualityOfService;
-(void)setQualityOfService:(long long)arg1 ;
-(BOOL)preregistered;
-(void)setPreregistered:(BOOL)arg1 ;
-(double)delay;
-(void)setDelay:(double)arg1 ;
-(id)checkInHandler;
-(void)setCheckInHandler:(id)arg1 ;
-(BOOL)repeats;
-(void)setRepeats:(BOOL)arg1 ;
-(BOOL)isAppRefresh;
-(void)setAppRefresh:(BOOL)arg1 ;
@end

