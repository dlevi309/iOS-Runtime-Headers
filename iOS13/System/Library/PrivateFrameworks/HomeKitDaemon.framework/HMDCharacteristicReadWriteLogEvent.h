/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSArray, HAPAccessory, HMDAccessory, NSUUID, NSString;

@interface HMDCharacteristicReadWriteLogEvent : HMDLogEvent <HMDAWDLogEvent> {

	BOOL _isWriteOperation;
	BOOL _isTimedWrite;
	BOOL _isLocal;
	BOOL _isCached;
	BOOL _isResidentAvailable;
	BOOL _isRemoteAccessAllowed;
	BOOL _isRemotelyReachable;
	NSArray* _characteristicsToRead;
	HAPAccessory* _hapAccessory;
	HMDAccessory* _hmdAccessory;
	NSUUID* _transactionId;
	unsigned long long _triggerSource;
	NSString* _primaryServiceType;
	unsigned long long _consecutiveFailureCount;
	double _timeIntervalSinceFirstFailure;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * characteristicsToRead;                       //@synthesize characteristicsToRead=_characteristicsToRead - In the implementation block
@property (nonatomic,__weak,readonly) HAPAccessory * hapAccessory;                    //@synthesize hapAccessory=_hapAccessory - In the implementation block
@property (nonatomic,__weak,readonly) HMDAccessory * hmdAccessory;                    //@synthesize hmdAccessory=_hmdAccessory - In the implementation block
@property (nonatomic,readonly) BOOL isWriteOperation;                                 //@synthesize isWriteOperation=_isWriteOperation - In the implementation block
@property (nonatomic,readonly) BOOL isTimedWrite;                                     //@synthesize isTimedWrite=_isTimedWrite - In the implementation block
@property (assign,nonatomic) BOOL isLocal;                                            //@synthesize isLocal=_isLocal - In the implementation block
@property (nonatomic,readonly) NSUUID * transactionId;                                //@synthesize transactionId=_transactionId - In the implementation block
@property (nonatomic,readonly) unsigned long long triggerSource;                      //@synthesize triggerSource=_triggerSource - In the implementation block
@property (nonatomic,readonly) BOOL isCached;                                         //@synthesize isCached=_isCached - In the implementation block
@property (nonatomic,readonly) NSString * primaryServiceType;                         //@synthesize primaryServiceType=_primaryServiceType - In the implementation block
@property (nonatomic,readonly) BOOL isResidentAvailable;                              //@synthesize isResidentAvailable=_isResidentAvailable - In the implementation block
@property (nonatomic,readonly) BOOL isRemoteAccessAllowed;                            //@synthesize isRemoteAccessAllowed=_isRemoteAccessAllowed - In the implementation block
@property (nonatomic,readonly) BOOL isRemotelyReachable;                              //@synthesize isRemotelyReachable=_isRemotelyReachable - In the implementation block
@property (assign,nonatomic) unsigned long long consecutiveFailureCount;              //@synthesize consecutiveFailureCount=_consecutiveFailureCount - In the implementation block
@property (assign,nonatomic) double timeIntervalSinceFirstFailure;                    //@synthesize timeIntervalSinceFirstFailure=_timeIntervalSinceFirstFailure - In the implementation block
+(id)uuid;
+(id)characteristicReadLogEvent:(id)arg1 hmdAccessory:(id)arg2 hapAccessory:(id)arg3 source:(unsigned long long)arg4 isLocal:(BOOL)arg5 transactionId:(id)arg6 isCached:(BOOL)arg7 ;
+(id)characteristicWriteLogEvent:(id)arg1 hmdAccessory:(id)arg2 hapAccessory:(id)arg3 source:(unsigned long long)arg4 isTimedWrite:(BOOL)arg5 isLocal:(BOOL)arg6 transactionId:(id)arg7 ;
-(BOOL)isLocal;
-(BOOL)isCached;
-(void)setLocal:(BOOL)arg1 ;
-(NSUUID *)transactionId;
-(void)setIsLocal:(BOOL)arg1 ;
-(BOOL)isRemoteAccessAllowed;
-(NSArray *)characteristicsToRead;
-(NSString *)primaryServiceType;
-(HMDAccessory *)hmdAccessory;
-(HAPAccessory *)hapAccessory;
-(id)initReadWriteLogEvent:(id)arg1 hmdAccessory:(id)arg2 hapAccessory:(id)arg3 source:(unsigned long long)arg4 isWriteOperation:(BOOL)arg5 isTimedWrite:(BOOL)arg6 isLocal:(BOOL)arg7 transactionId:(id)arg8 isCached:(BOOL)arg9 ;
-(BOOL)isResidentAvailable;
-(void)setConsecutiveFailureCount:(unsigned long long)arg1 ;
-(BOOL)isTimedWrite;
-(BOOL)isRemotelyReachable;
-(unsigned long long)consecutiveFailureCount;
-(void)submitAtDate:(id)arg1 error:(id)arg2 ;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(unsigned long long)triggerSource;
-(BOOL)isWriteOperation;
-(double)timeIntervalSinceFirstFailure;
-(void)setTimeIntervalSinceFirstFailure:(double)arg1 ;
@end

