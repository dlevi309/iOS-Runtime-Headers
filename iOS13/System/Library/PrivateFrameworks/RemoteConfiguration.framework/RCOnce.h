/*
* Generated on Monday, March 1, 2021 at 2:32:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
*/


@class RCMutexLock;

@interface RCOnce : NSObject {

	BOOL _finished;
	RCMutexLock* _lock;

}

@property (assign,nonatomic) BOOL finished;                   //@synthesize finished=_finished - In the implementation block
@property (nonatomic,retain) RCMutexLock * lock;              //@synthesize lock=_lock - In the implementation block
-(id)init;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(RCMutexLock *)lock;
-(void)setFinished:(BOOL)arg1 ;
-(BOOL)finished;
-(void)setLock:(RCMutexLock *)arg1 ;
-(BOOL)trigger;
-(BOOL)hasBeenTriggered;
-(void)executeOnce:(/*^block*/id)arg1 ;
@end

