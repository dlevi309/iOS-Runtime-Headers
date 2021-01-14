/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteMediaServices.framework/RemoteMediaServices
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
-(RMSPowerAssertion *)powerAssertion;
-(void)setTimeout:(int)arg1 ;
-(int)timeout;
-(id)session;
-(void)setPowerAssertion:(RMSPowerAssertion *)arg1 ;
-(void)setSession:(id)arg1 ;
-(RMSRunAssertion *)runAssertion;
-(void)setRunAssertion:(RMSRunAssertion *)arg1 ;
-(int)refreshCount;
-(void)setRefreshCount:(int)arg1 ;
@end

