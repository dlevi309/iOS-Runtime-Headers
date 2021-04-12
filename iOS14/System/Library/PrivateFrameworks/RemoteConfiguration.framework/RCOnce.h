/*
* Generated on Thursday, January 14, 2021 at 2:28:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteConfiguration.framework/RemoteConfiguration
*/


@class RCMutexLock;

@interface RCOnce : NSObject {

	BOOL _finished;
	RCMutexLock* _lock;

}

@property (assign,nonatomic) BOOL finished;                   //@synthesize finished=_finished - In the implementation block
@property (nonatomic,retain) RCMutexLock * lock;              //@synthesize lock=_lock - In the implementation block
-(id)initWithOptions:(unsigned long long)arg1 ;
-(BOOL)finished;
-(BOOL)trigger;
-(id)init;
-(RCMutexLock *)lock;
-(BOOL)hasBeenTriggered;
-(void)setLock:(RCMutexLock *)arg1 ;
-(void)setFinished:(BOOL)arg1 ;
-(void)executeOnce:(/*^block*/id)arg1 ;
@end

