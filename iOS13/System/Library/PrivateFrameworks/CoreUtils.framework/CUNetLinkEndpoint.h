/*
* Generated on Monday, March 1, 2021 at 2:30:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CoreUtils.framework/CoreUtils
*/


@interface CUNetLinkEndpoint : NSObject {

	SCD_Union_CU21 _ipAddr;
	int _state;
	/*^block*/id _stateChangedHandler;
	unsigned long long _expireTime;
	unsigned long long _expiredTicks;
	BOOL _present;
	unsigned _seqNum;
	unsigned _stateChanges;
	BOOL _client;

}

@property (assign,nonatomic) /*function pointer*/void* ipAddr;              //@synthesize ipAddr=_ipAddr - In the implementation block
@property (getter=isClient,nonatomic,readonly) BOOL client;                 //@synthesize client=_client - In the implementation block
@property (nonatomic,readonly) int state;                                   //@synthesize state=_state - In the implementation block
@property (nonatomic,copy) id stateChangedHandler;                          //@synthesize stateChangedHandler=_stateChangedHandler - In the implementation block
-(id)description;
-(int)state;
-(BOOL)isClient;
-(id)descriptionWithLevel:(int)arg1 ;
-(id)stateChangedHandler;
-(void)setStateChangedHandler:(id)arg1 ;
-(/*function pointer*/void*)ipAddr;
-(void)setIpAddr:(/*function pointer*/void*)arg1 ;
@end

