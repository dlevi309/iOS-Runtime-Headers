/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/


@class NFUnfairLock;

@interface FCOnce : NSObject {

	BOOL _finished;
	NFUnfairLock* _lock;

}

@property (assign,nonatomic) BOOL finished;                    //@synthesize finished=_finished - In the implementation block
@property (nonatomic,retain) NFUnfairLock * lock;              //@synthesize lock=_lock - In the implementation block
-(id)initWithOptions:(unsigned long long)arg1 ;
-(BOOL)finished;
-(BOOL)trigger;
-(id)init;
-(NFUnfairLock *)lock;
-(BOOL)hasBeenTriggered;
-(void)setLock:(NFUnfairLock *)arg1 ;
-(void)setFinished:(BOOL)arg1 ;
-(void)executeOnce:(/*^block*/id)arg1 ;
@end

