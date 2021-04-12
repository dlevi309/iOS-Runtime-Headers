/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/


@class NAValueThrottler;

@interface HUControlInteractionState : NSObject {

	BOOL _userInteractionActive;
	BOOL _writesInProgressOrPossible;
	NAValueThrottler* _writeThrottler;
	unsigned long long _inFlightWriteCount;

}

@property (nonatomic,retain) NAValueThrottler * writeThrottler;                                                 //@synthesize writeThrottler=_writeThrottler - In the implementation block
@property (assign,nonatomic) unsigned long long inFlightWriteCount;                                             //@synthesize inFlightWriteCount=_inFlightWriteCount - In the implementation block
@property (assign,getter=isUserInteractionActive,nonatomic) BOOL userInteractionActive;                         //@synthesize userInteractionActive=_userInteractionActive - In the implementation block
@property (assign,getter=areWritesInProgressOrPossible,nonatomic) BOOL writesInProgressOrPossible;              //@synthesize writesInProgressOrPossible=_writesInProgressOrPossible - In the implementation block
-(BOOL)isUserInteractionActive;
-(void)setUserInteractionActive:(BOOL)arg1 ;
-(BOOL)areWritesInProgressOrPossible;
-(unsigned long long)inFlightWriteCount;
-(void)setInFlightWriteCount:(unsigned long long)arg1 ;
-(void)setWritesInProgressOrPossible:(BOOL)arg1 ;
-(NAValueThrottler *)writeThrottler;
-(void)setWriteThrottler:(NAValueThrottler *)arg1 ;
@end

