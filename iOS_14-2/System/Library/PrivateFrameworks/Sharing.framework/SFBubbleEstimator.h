/*
* Generated on Thursday, January 14, 2021 at 2:22:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Sharing.framework/Sharing
*/


@class SFRSSIQueue;

@interface SFBubbleEstimator : NSObject {

	SFRSSIQueue* _rssiQueue;
	unsigned long long _thresholdStartTicks;
	BOOL _insideBubble;
	BOOL _insideBubbleWithThreshold;
	BOOL _preventBoost;
	long long _rssiEnter;
	long long _rssiExit;
	double _thresholdSeconds;

}

@property (nonatomic,readonly) BOOL insideBubble;                           //@synthesize insideBubble=_insideBubble - In the implementation block
@property (nonatomic,readonly) BOOL insideBubbleWithThreshold;              //@synthesize insideBubbleWithThreshold=_insideBubbleWithThreshold - In the implementation block
@property (assign,nonatomic) BOOL preventBoost;                             //@synthesize preventBoost=_preventBoost - In the implementation block
@property (assign,nonatomic) long long rssiEnter;                           //@synthesize rssiEnter=_rssiEnter - In the implementation block
@property (assign,nonatomic) long long rssiExit;                            //@synthesize rssiExit=_rssiExit - In the implementation block
@property (assign,nonatomic) double thresholdSeconds;                       //@synthesize thresholdSeconds=_thresholdSeconds - In the implementation block
@property (nonatomic,readonly) double velocity; 
@property (nonatomic,readonly) double velocitySmoothed; 
+(id)estimatorWithEnter:(long long)arg1 exit:(long long)arg2 ;
+(id)estimatorWithEnter:(long long)arg1 exit:(long long)arg2 threshold:(double)arg3 ;
-(double)velocity;
-(BOOL)insideBubble;
-(long long)rssiExit;
-(void)reset;
-(double)velocitySmoothed;
-(void)setRssiEnter:(long long)arg1 ;
-(void)setRssiExit:(long long)arg1 ;
-(void)setThresholdSeconds:(double)arg1 ;
-(BOOL)shouldExpandBubble;
-(long long)updateWithRSSI:(long long)arg1 ;
-(BOOL)insideBubbleWithThreshold;
-(BOOL)preventBoost;
-(void)setPreventBoost:(BOOL)arg1 ;
-(double)thresholdSeconds;
-(long long)rssiEnter;
@end

