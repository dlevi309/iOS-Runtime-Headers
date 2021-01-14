/*
* Generated on Thursday, January 14, 2021 at 2:21:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DataMigration.framework/DataMigration
*/


@protocol OS_dispatch_source;
@class NSObject;

@interface DMTimer : NSObject {

	NSObject*<OS_dispatch_source> _timer;
	/*^block*/id _fireBlock;
	unsigned long long _secondsBeforeFirstFire;
	unsigned long long _secondsOfLeeway;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_source> timer;                    //@synthesize timer=_timer - In the implementation block
@property (nonatomic,copy) id fireBlock;                                             //@synthesize fireBlock=_fireBlock - In the implementation block
@property (assign,nonatomic) unsigned long long secondsBeforeFirstFire;              //@synthesize secondsBeforeFirstFire=_secondsBeforeFirstFire - In the implementation block
@property (assign,nonatomic) unsigned long long secondsOfLeeway;                     //@synthesize secondsOfLeeway=_secondsOfLeeway - In the implementation block
-(id)fireBlock;
-(void)setFireBlock:(id)arg1 ;
-(NSObject*<OS_dispatch_source>)timer;
-(void)setTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(unsigned long long)secondsOfLeeway;
-(void)setSecondsOfLeeway:(unsigned long long)arg1 ;
-(void)setSecondsBeforeFirstFire:(unsigned long long)arg1 ;
-(unsigned long long)secondsBeforeFirstFire;
-(void)cancelSynchronously;
-(id)initWithSecondsBeforeFirstFire:(unsigned long long)arg1 secondsOfLeeway:(unsigned long long)arg2 fireBlock:(/*^block*/id)arg3 ;
-(void)cancel;
-(void)resume;
@end

