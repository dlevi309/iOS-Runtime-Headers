/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
*/


@class ICSuzeLeaseSession, MPCSuzeLeaseSession;

@interface _MPCSuzeLeaseSessionInfo : NSObject {

	BOOL _shouldStopWhenFinished;
	long long _clientCount;
	ICSuzeLeaseSession* _icLeaseSession;
	MPCSuzeLeaseSession* _mpcLeaseSession;

}

@property (assign,nonatomic) long long clientCount;                                //@synthesize clientCount=_clientCount - In the implementation block
@property (nonatomic,readonly) ICSuzeLeaseSession * icLeaseSession;                //@synthesize icLeaseSession=_icLeaseSession - In the implementation block
@property (nonatomic,readonly) MPCSuzeLeaseSession * mpcLeaseSession;              //@synthesize mpcLeaseSession=_mpcLeaseSession - In the implementation block
@property (assign,nonatomic) BOOL shouldStopWhenFinished;                          //@synthesize shouldStopWhenFinished=_shouldStopWhenFinished - In the implementation block
-(id)initWithICLeaseSession:(id)arg1 ;
-(long long)clientCount;
-(void)setClientCount:(long long)arg1 ;
-(ICSuzeLeaseSession *)icLeaseSession;
-(MPCSuzeLeaseSession *)mpcLeaseSession;
-(BOOL)shouldStopWhenFinished;
-(void)setShouldStopWhenFinished:(BOOL)arg1 ;
@end

