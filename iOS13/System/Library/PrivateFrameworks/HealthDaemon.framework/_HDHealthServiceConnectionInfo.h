/*
* Generated on Monday, March 1, 2021 at 2:34:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/


@protocol OS_dispatch_source;
@class NSData, NSUUID, NSObject;

@interface _HDHealthServiceConnectionInfo : NSObject {

	BOOL _pairingAttempted;
	unsigned long long _sessionIdentifier;
	/*^block*/id _sessionHandler;
	/*^block*/id _dataHandler;
	/*^block*/id _characteristicsHandler;
	/*^block*/id _mfaSuccessHandler;
	unsigned long long _connectionOptions;
	long long _mfaStatus;
	NSData* _autoPairData;
	NSUUID* _peripheralUUID;
	long long _connectionState;
	long long _pairingState;
	double _timeoutInterval;
	NSObject*<OS_dispatch_source> _timeoutTimer;

}

@property (assign,nonatomic) unsigned long long sessionIdentifier;                    //@synthesize sessionIdentifier=_sessionIdentifier - In the implementation block
@property (nonatomic,readonly) id sessionHandler;                                     //@synthesize sessionHandler=_sessionHandler - In the implementation block
@property (nonatomic,readonly) id dataHandler;                                        //@synthesize dataHandler=_dataHandler - In the implementation block
@property (nonatomic,readonly) id characteristicsHandler;                             //@synthesize characteristicsHandler=_characteristicsHandler - In the implementation block
@property (nonatomic,readonly) id mfaSuccessHandler;                                  //@synthesize mfaSuccessHandler=_mfaSuccessHandler - In the implementation block
@property (nonatomic,readonly) unsigned long long connectionOptions;                  //@synthesize connectionOptions=_connectionOptions - In the implementation block
@property (nonatomic,readonly) long long mfaStatus;                                   //@synthesize mfaStatus=_mfaStatus - In the implementation block
@property (nonatomic,readonly) NSData * autoPairData;                                 //@synthesize autoPairData=_autoPairData - In the implementation block
@property (nonatomic,readonly) NSUUID * peripheralUUID;                               //@synthesize peripheralUUID=_peripheralUUID - In the implementation block
@property (assign,nonatomic) long long connectionState;                               //@synthesize connectionState=_connectionState - In the implementation block
@property (assign,nonatomic) long long pairingState;                                  //@synthesize pairingState=_pairingState - In the implementation block
@property (nonatomic,readonly) double timeoutInterval;                                //@synthesize timeoutInterval=_timeoutInterval - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_source> timeoutTimer;              //@synthesize timeoutTimer=_timeoutTimer - In the implementation block
@property (assign,nonatomic) BOOL pairingAttempted;                                   //@synthesize pairingAttempted=_pairingAttempted - In the implementation block
-(double)timeoutInterval;
-(unsigned long long)sessionIdentifier;
-(void)setSessionIdentifier:(unsigned long long)arg1 ;
-(long long)connectionState;
-(id)dataHandler;
-(void)setTimeoutTimer:(NSObject*<OS_dispatch_source>)arg1 ;
-(NSObject*<OS_dispatch_source>)timeoutTimer;
-(id)sessionHandler;
-(void)setConnectionState:(long long)arg1 ;
-(id)characteristicsHandler;
-(long long)pairingState;
-(void)setPairingState:(long long)arg1 ;
-(NSUUID *)peripheralUUID;
-(id)initWithSessionHandler:(/*^block*/id)arg1 dataHandler:(/*^block*/id)arg2 characteristicsHandler:(/*^block*/id)arg3 mfaSuccessHandler:(/*^block*/id)arg4 autoPairData:(id)arg5 connectionOptions:(unsigned long long)arg6 timeoutInterval:(double)arg7 peripheralUUID:(id)arg8 ;
-(unsigned long long)connectionOptions;
-(long long)mfaStatus;
-(id)mfaSuccessHandler;
-(void)markMFAStatusComplete;
-(BOOL)pairingAttempted;
-(void)setPairingAttempted:(BOOL)arg1 ;
-(NSData *)autoPairData;
@end

