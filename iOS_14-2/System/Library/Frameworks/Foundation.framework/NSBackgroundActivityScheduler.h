/*
* Generated on Thursday, January 14, 2021 at 2:20:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setQualityOfService:(long long)arg1 ;
-(BOOL)shouldDefer;
-(void)_updateCriteria:(id)arg1 ;
-(void)setInterval:(double)arg1 ;
-(id)checkInHandler;
-(double)tolerance;
-(id)init;
-(double)interval;
-(void)setPreregistered:(BOOL)arg1 ;
-(void)setDelay:(double)arg1 ;
-(void)setRepeats:(BOOL)arg1 ;
-(BOOL)repeats;
-(void)set_appRefresh:(BOOL)arg1 ;
-(double)delay;
-(void)setTolerance:(double)arg1 ;
-(void)_updateCriteriaForCompletedActivity:(id)arg1 ;
-(void)setCheckInHandler:(id)arg1 ;
-(void)_setAdditionalXPCActivityProperties:(id)arg1 ;
-(void)invalidate;
-(NSString *)identifier;
-(BOOL)isPreregistered;
-(long long)qualityOfService;
-(id)initWithIdentifier:(id)arg1 ;
-(BOOL)_isAppRefresh;
-(void)scheduleWithBlock:(/*^block*/id)arg1 ;
-(void)dealloc;
@end

