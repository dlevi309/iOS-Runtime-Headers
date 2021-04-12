/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@class RMSPowerAssertion, RMSRunAssertion;

@interface _RMSSessionRecord : NSObject {

	int _refreshCount;
	int _timeout;
	id _session;
	RMSPowerAssertion* _powerAssertion;
	RMSRunAssertion* _runAssertion;

}

@property (assign,nonatomic) int refreshCount;                                //@synthesize refreshCount=_refreshCount - In the implementation block
@property (assign,nonatomic) int timeout;                                     //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,retain) id session;                                      //@synthesize session=_session - In the implementation block
@property (nonatomic,retain) RMSPowerAssertion * powerAssertion;              //@synthesize powerAssertion=_powerAssertion - In the implementation block
@property (nonatomic,retain) RMSRunAssertion * runAssertion;                  //@synthesize runAssertion=_runAssertion - In the implementation block
-(int)timeout;
-(void)setTimeout:(int)arg1 ;
-(id)session;
-(void)setSession:(id)arg1 ;
-(RMSPowerAssertion *)powerAssertion;
-(void)setPowerAssertion:(RMSPowerAssertion *)arg1 ;
-(int)refreshCount;
-(void)setRefreshCount:(int)arg1 ;
-(RMSRunAssertion *)runAssertion;
-(void)setRunAssertion:(RMSRunAssertion *)arg1 ;
@end

