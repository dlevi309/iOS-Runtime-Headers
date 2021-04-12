/*
* Generated on Monday, March 1, 2021 at 2:30:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Foundation.framework/Foundation
*/


@class NSString;

@interface NSBackgroundActivityScheduler : NSObject {

	id _private1;
	id _private2;
	id _private3;
	long long _flags;

}

@property (getter=isPreregistered) BOOL preregistered; 
@property (assign) double delay; 
@property (assign) id checkInHandler; 
@property (getter=_isAppRefresh) BOOL _appRefresh; 
@property (copy,readonly) NSString * identifier; 
@property (assign) long long qualityOfService; 
@property (assign) BOOL repeats; 
@property (assign) double interval; 
@property (assign) double tolerance; 
@property (readonly) BOOL shouldDefer; 
-(id)init;
-(void)dealloc;
-(void)invalidate;
-(double)tolerance;
-(void)setTolerance:(double)arg1 ;
-(NSString *)identifier;
-(double)interval;
-(void)setInterval:(double)arg1 ;
-(long long)qualityOfService;
-(void)setQualityOfService:(long long)arg1 ;
-(void)setPreregistered:(BOOL)arg1 ;
-(double)delay;
-(void)setDelay:(double)arg1 ;
-(id)checkInHandler;
-(void)setCheckInHandler:(id)arg1 ;
-(BOOL)repeats;
-(void)setRepeats:(BOOL)arg1 ;
-(BOOL)_isAppRefresh;
-(void)_updateCriteria:(id)arg1 ;
-(BOOL)isPreregistered;
-(void)_updateCriteriaForCompletedActivity:(id)arg1 ;
-(id)initWithIdentifier:(id)arg1 ;
-(void)set_appRefresh:(BOOL)arg1 ;
-(void)_setAdditionalXPCActivityProperties:(id)arg1 ;
-(void)scheduleWithBlock:(/*^block*/id)arg1 ;
-(BOOL)shouldDefer;
@end

