/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isActive;
-(void)reset;
-(double)lastUpdate;
-(BOOL)isHolding;
-(id)initWithTimeoutDuration:(double)arg1 ;
-(void)onResetDo:(/*^block*/id)arg1 ;
-(void)setTimeoutDuration:(double)arg1 ;
-(void)resetDecayTo:(double)arg1 ;
-(void)startOrUpdateDecay;
-(BOOL)isDecaying;
-(void)resetActiveDecayTo:(double)arg1 ;
-(void)startDecaying;
-(void)updateDecay;
-(double)timeoutDuration;
@end

