/*
* Generated on Monday, March 1, 2021 at 2:34:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CloudDocsDaemon.framework/CloudDocsDaemon
*/


@interface BRCSyncOperationThrottleParams : NSObject {

	double minWait;
	double maxWait;
	double ratioOnSuccess;
	double ratioOnFailure;
	double ratioOnQuotaErrorClear;
	double inactivityKickbackDelay;
	double inactivityKickbackRatio;

}

@property (assign,nonatomic) double minWait; 
@property (assign,nonatomic) double maxWait; 
@property (assign,nonatomic) double ratioOnSuccess; 
@property (assign,nonatomic) double ratioOnQuotaErrorClear; 
@property (assign,nonatomic) double ratioOnFailure; 
@property (assign,nonatomic) double inactivityKickbackDelay; 
@property (assign,nonatomic) double inactivityKickbackRatio; 
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(BOOL)check;
-(double)minWait;
-(double)inactivityKickbackDelay;
-(double)inactivityKickbackRatio;
-(double)ratioOnSuccess;
-(double)ratioOnQuotaErrorClear;
-(double)ratioOnFailure;
-(double)maxWait;
-(double)doubleForKey:(id)arg1 inParams:(id)arg2 defaults:(id)arg3 ;
-(void)setupWithParams:(id)arg1 defaults:(id)arg2 ;
-(id)paramsToDictionary;
-(id)initWithParams:(id)arg1 defaults:(id)arg2 ;
-(void)setMinWait:(double)arg1 ;
-(void)setMaxWait:(double)arg1 ;
-(void)setRatioOnSuccess:(double)arg1 ;
-(void)setRatioOnFailure:(double)arg1 ;
-(void)setRatioOnQuotaErrorClear:(double)arg1 ;
-(void)setInactivityKickbackDelay:(double)arg1 ;
-(void)setInactivityKickbackRatio:(double)arg1 ;
@end

