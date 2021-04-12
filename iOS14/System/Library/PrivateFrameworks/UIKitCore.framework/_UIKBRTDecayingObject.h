/*
* Generated on Thursday, January 14, 2021 at 2:20:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSMutableArray;

@interface _UIKBRTDecayingObject : NSObject {

	NSMutableArray* _resetBlocks;
	BOOL _isDecaying;
	BOOL _isHolding;
	double _lastUpdate;
	double _timeoutDuration;

}

@property (nonatomic,readonly) double lastUpdate;                 //@synthesize lastUpdate=_lastUpdate - In the implementation block
@property (assign,nonatomic) double timeoutDuration;              //@synthesize timeoutDuration=_timeoutDuration - In the implementation block
@property (nonatomic,readonly) BOOL isDecaying;                   //@synthesize isDecaying=_isDecaying - In the implementation block
@property (nonatomic,readonly) BOOL isHolding;                    //@synthesize isHolding=_isHolding - In the implementation block
@property (nonatomic,readonly) BOOL isActive; 
-(double)lastUpdate;
-(id)initWithTimeoutDuration:(double)arg1 ;
-(void)setTimeoutDuration:(double)arg1 ;
-(void)resetDecayTo:(double)arg1 ;
-(void)startOrUpdateDecay;
-(void)resetActiveDecayTo:(double)arg1 ;
-(void)startDecaying;
-(double)timeoutDuration;
-(BOOL)isActive;
-(BOOL)isHolding;
-(void)reset;
-(void)onResetDo:(/*^block*/id)arg1 ;
-(BOOL)isDecaying;
-(void)updateDecay;
@end

