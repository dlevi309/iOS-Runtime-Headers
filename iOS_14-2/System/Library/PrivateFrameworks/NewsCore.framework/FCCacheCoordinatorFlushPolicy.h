/*
* Generated on Thursday, January 14, 2021 at 2:21:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)canFlushWithDataSize:(unsigned long long)arg1 ;
-(void)setAlwaysFlushKeysWithZeroInterest:(BOOL)arg1 ;
-(void)setLowWaterMark:(unsigned long long)arg1 ;
-(void)setHighWaterMark:(unsigned long long)arg1 ;
-(BOOL)alwaysFlushKeysWithZeroInterest;
-(unsigned long long)lowWaterMark;
-(BOOL)canPreemptiveFlushWithDataSize:(unsigned long long)arg1 ;
-(unsigned long long)highWaterMark;
@end

