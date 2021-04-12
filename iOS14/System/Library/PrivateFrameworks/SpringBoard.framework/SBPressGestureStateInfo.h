/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isCoalescing;
-(id)init;
-(void)setExpirationTime:(double)arg1 ;
-(double)expirationTime;
-(void)setState:(long long)arg1 ;
-(void)setStateUponExpiration:(long long)arg1 ;
-(void)setIsCoalescing:(BOOL)arg1 ;
-(long long)state;
-(long long)stateUponExpiration;
@end

