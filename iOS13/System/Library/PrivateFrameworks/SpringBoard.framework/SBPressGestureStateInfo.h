/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@interface SBPressGestureStateInfo : NSObject {

	BOOL _isCoalescing;
	long long _state;
	double _expirationTime;
	long long _stateUponExpiration;

}

@property (assign,nonatomic) long long state;                            //@synthesize state=_state - In the implementation block
@property (assign,nonatomic) BOOL isCoalescing;                          //@synthesize isCoalescing=_isCoalescing - In the implementation block
@property (assign,nonatomic) double expirationTime;                      //@synthesize expirationTime=_expirationTime - In the implementation block
@property (assign,nonatomic) long long stateUponExpiration;              //@synthesize stateUponExpiration=_stateUponExpiration - In the implementation block
-(id)init;
-(long long)state;
-(void)setState:(long long)arg1 ;
-(BOOL)isCoalescing;
-(double)expirationTime;
-(void)setExpirationTime:(double)arg1 ;
-(void)setIsCoalescing:(BOOL)arg1 ;
-(void)setStateUponExpiration:(long long)arg1 ;
-(long long)stateUponExpiration;
@end

