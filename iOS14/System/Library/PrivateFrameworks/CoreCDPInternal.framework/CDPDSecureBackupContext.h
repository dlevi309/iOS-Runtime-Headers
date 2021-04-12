/*
* Generated on Thursday, January 14, 2021 at 2:25:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreCDPInternal.framework/CoreCDPInternal
*/


@class NSString, CDPDevice, CDPDCircleJoinResult;

@interface CDPDSecureBackupContext : NSObject {

	BOOL _silentRecovery;
	BOOL _usePreviouslyCachedRecoveryKey;
	BOOL _usePreviouslyCachedSecret;
	NSString* _localSecret;
	unsigned long long _localSecretType;
	CDPDevice* _device;
	NSString* _recoverySecret;
	NSString* _recoveryKey;
	CDPDCircleJoinResult* _circleJoinResult;
	NSString* _preRecordUUID;

}

@property (nonatomic,copy) NSString * localSecret;                                 //@synthesize localSecret=_localSecret - In the implementation block
@property (assign,nonatomic) unsigned long long localSecretType;                   //@synthesize localSecretType=_localSecretType - In the implementation block
@property (nonatomic,copy) CDPDevice * device;                                     //@synthesize device=_device - In the implementation block
@property (nonatomic,copy) NSString * recoverySecret;                              //@synthesize recoverySecret=_recoverySecret - In the implementation block
@property (assign,nonatomic) BOOL silentRecovery;                                  //@synthesize silentRecovery=_silentRecovery - In the implementation block
@property (nonatomic,copy) NSString * recoveryKey;                                 //@synthesize recoveryKey=_recoveryKey - In the implementation block
@property (assign,nonatomic) BOOL usePreviouslyCachedRecoveryKey;                  //@synthesize usePreviouslyCachedRecoveryKey=_usePreviouslyCachedRecoveryKey - In the implementation block
@property (assign,nonatomic) BOOL usePreviouslyCachedSecret;                       //@synthesize usePreviouslyCachedSecret=_usePreviouslyCachedSecret - In the implementation block
@property (nonatomic,retain) CDPDCircleJoinResult * circleJoinResult;              //@synthesize circleJoinResult=_circleJoinResult - In the implementation block
@property (nonatomic,retain) NSString * preRecordUUID;                             //@synthesize preRecordUUID=_preRecordUUID - In the implementation block
-(CDPDevice *)device;
-(id)description;
-(void)setUsePreviouslyCachedRecoveryKey:(BOOL)arg1 ;
-(NSString *)recoverySecret;
-(void)setRecoverySecret:(NSString *)arg1 ;
-(NSString *)recoveryKey;
-(void)setRecoveryKey:(NSString *)arg1 ;
-(BOOL)usePreviouslyCachedRecoveryKey;
-(void)setDevice:(CDPDevice *)arg1 ;
-(unsigned long long)localSecretType;
-(void)setPreRecordUUID:(NSString *)arg1 ;
-(void)setLocalSecret:(NSString *)arg1 ;
-(void)setLocalSecretType:(unsigned long long)arg1 ;
-(CDPDCircleJoinResult *)circleJoinResult;
-(void)setUsePreviouslyCachedSecret:(BOOL)arg1 ;
-(NSString *)localSecret;
-(BOOL)usePreviouslyCachedSecret;
-(NSString *)preRecordUUID;
-(BOOL)silentRecovery;
-(void)setSilentRecovery:(BOOL)arg1 ;
-(void)setCircleJoinResult:(CDPDCircleJoinResult *)arg1 ;
@end

