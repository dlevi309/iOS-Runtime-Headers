/*
* Generated on Monday, March 1, 2021 at 2:32:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@interface FCCacheCoordinatorFlushPolicy : NSObject {

	BOOL _alwaysFlushKeysWithZeroInterest;
	unsigned long long _highWaterMark;
	unsigned long long _lowWaterMark;

}

@property (assign,nonatomic) BOOL alwaysFlushKeysWithZeroInterest;              //@synthesize alwaysFlushKeysWithZeroInterest=_alwaysFlushKeysWithZeroInterest - In the implementation block
@property (assign,nonatomic) unsigned long long highWaterMark;                  //@synthesize highWaterMark=_highWaterMark - In the implementation block
@property (assign,nonatomic) unsigned long long lowWaterMark;                   //@synthesize lowWaterMark=_lowWaterMark - In the implementation block
-(void)setHighWaterMark:(unsigned long long)arg1 ;
-(void)setLowWaterMark:(unsigned long long)arg1 ;
-(void)setAlwaysFlushKeysWithZeroInterest:(BOOL)arg1 ;
-(BOOL)canFlushWithDataSize:(unsigned long long)arg1 ;
-(BOOL)canPreemptiveFlushWithDataSize:(unsigned long long)arg1 ;
-(BOOL)alwaysFlushKeysWithZeroInterest;
-(unsigned long long)highWaterMark;
-(unsigned long long)lowWaterMark;
@end

