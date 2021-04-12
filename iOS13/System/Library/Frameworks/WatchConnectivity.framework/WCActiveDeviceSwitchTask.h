/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
*/


@interface WCActiveDeviceSwitchTask : NSObject {

	BOOL _clientReadyForSessionState;
	unsigned long long _taskState;

}

@property (assign) BOOL clientReadyForSessionState;              //@synthesize clientReadyForSessionState=_clientReadyForSessionState - In the implementation block
@property (assign) unsigned long long taskState;                 //@synthesize taskState=_taskState - In the implementation block
+(id)taskStateToString:(unsigned long long)arg1 ;
-(id)description;
-(unsigned long long)taskState;
-(void)setTaskState:(unsigned long long)arg1 ;
-(BOOL)clientReadyForSessionState;
-(void)setClientReadyForSessionState:(BOOL)arg1 ;
@end

