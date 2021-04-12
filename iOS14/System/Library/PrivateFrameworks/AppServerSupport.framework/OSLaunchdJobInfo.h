/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppServerSupport.framework/AppServerSupport
*/


@class OSLaunchdJobExitStatus;

@interface OSLaunchdJobInfo : NSObject {

	int _pid;
	int _lastSpawnError;
	long long _state;
	OSLaunchdJobExitStatus* _lastExitStatus;

}

@property (nonatomic,readonly) long long state;                                      //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) int pid;                                              //@synthesize pid=_pid - In the implementation block
@property (nonatomic,readonly) int lastSpawnError;                                   //@synthesize lastSpawnError=_lastSpawnError - In the implementation block
@property (nonatomic,readonly) OSLaunchdJobExitStatus * lastExitStatus;              //@synthesize lastExitStatus=_lastExitStatus - In the implementation block
-(OSLaunchdJobExitStatus *)lastExitStatus;
-(int)pid;
-(id)initWithState:(long long)arg1 pid:(int)arg2 lastSpawnError:(int)arg3 lastExitStatus:(id)arg4 ;
-(long long)state;
-(int)lastSpawnError;
@end

