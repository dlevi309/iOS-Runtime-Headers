/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WatchConnectivity.framework/WatchConnectivity
*/


@interface WCActiveDeviceSwitchTask : NSObject {

	BOOL _clientReadyForSessionState;
	unsigned long long _taskState;

}

@property (assign) BOOL clientReadyForSessionState;              //@synthesize clientReadyForSessionState=_clientReadyForSessionState - In the implementation block
@property (assign) unsigned long long taskState;                 //@synthesize taskState=_taskState - In the implementation block
+(id)taskStateToString:(unsigned long long)arg1 ;
-(void)setTaskState:(unsigned long long)arg1 ;
-(unsigned long long)taskState;
-(id)description;
-(BOOL)clientReadyForSessionState;
-(void)setClientReadyForSessionState:(BOOL)arg1 ;
@end

