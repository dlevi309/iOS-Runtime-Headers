/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDLogEvent.h>
#import <libobjc.A.dylib/HMDCoreDuetLogEvent.h>
#import <libobjc.A.dylib/HMDAWDLogEvent.h>

@class NSArray, HAPAccessory, HMDAccessory, NSUUID, NSString;

@interface HMDCharacteristicReadWriteLogEvent : HMDLogEvent <HMDCoreDuetLogEvent, HMDAWDLogEvent> {

	BOOL _isWriteOperation;
	BOOL _isTimedWrite;
	BOOL _isLocal;
	BOOL _isCached;
	BOOL _isResidentAvailable;
	BOOL _isRemoteAccessAllowed;
	BOOL _isRemotelyReachable;
	BOOL _threadAccessory;
	unsigned _numAccessoriesInHome;
	unsigned _numNonEmptyScenesInHome;
	NSArray* _characteristicsToRead;
	HAPAccessory* _hapAccessory;
	HMDAccessory* _hmdAccessory;
	long long _linkType;
	NSUUID* _transactionId;
	unsigned long long _triggerSource;
	NSString* _primaryServiceType;
	unsigned long long _consecutiveFailureCount;
	double _timeIntervalSinceFirstFailure;
	NSString* _bundleId;
	NSArray* _writtenValues;
	NSString* _transportProtocolVersion;

}

@property (readonly) unsigned long long duetEventType; 
@property (copy,readonly) NSArray * eventDataToLog; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSArray * characteristicsToRead;                          //@synthesize characteristicsToRead=_characteristicsToRead - In the implementation block
@property (nonatomic,__weak,readonly) HAPAccessory * hapAccessory;                       //@synthesize hapAccessory=_hapAccessory - In the implementation block
@property (nonatomic,__weak,readonly) HMDAccessory * hmdAccessory;                       //@synthesize hmdAccessory=_hmdAccessory - In the implementation block
@property (nonatomic,readonly) BOOL isWriteOperation;                                    //@synthesize isWriteOperation=_isWriteOperation - In the implementation block
@property (nonatomic,readonly) BOOL isTimedWrite;                                        //@synthesize isTimedWrite=_isTimedWrite - In the implementation block
@property (assign,nonatomic) BOOL isLocal;                                               //@synthesize isLocal=_isLocal - In the implementation block
@property (nonatomic,readonly) long long linkType;                                       //@synthesize linkType=_linkType - In the implementation block
@property (nonatomic,readonly) NSUUID * transactionId;                                   //@synthesize transactionId=_transactionId - In the implementation block
@property (nonatomic,readonly) unsigned long long triggerSource;                         //@synthesize triggerSource=_triggerSource - In the implementation block
@property (nonatomic,readonly) BOOL isCached;                                            //@synthesize isCached=_isCached - In the implementation block
@property (nonatomic,readonly) NSString * primaryServiceType;                            //@synthesize primaryServiceType=_primaryServiceType - In the implementation block
@property (nonatomic,readonly) BOOL isResidentAvailable;                                 //@synthesize isResidentAvailable=_isResidentAvailable - In the implementation block
@property (nonatomic,readonly) BOOL isRemoteAccessAllowed;                               //@synthesize isRemoteAccessAllowed=_isRemoteAccessAllowed - In the implementation block
@property (nonatomic,readonly) BOOL isRemotelyReachable;                                 //@synthesize isRemotelyReachable=_isRemotelyReachable - In the implementation block
@property (assign,nonatomic) unsigned long long consecutiveFailureCount;                 //@synthesize consecutiveFailureCount=_consecutiveFailureCount - In the implementation block
@property (assign,nonatomic) double timeIntervalSinceFirstFailure;                       //@synthesize timeIntervalSinceFirstFailure=_timeIntervalSinceFirstFailure - In the implementation block
@property (nonatomic,copy,readonly) NSString * bundleId;                                 //@synthesize bundleId=_bundleId - In the implementation block
@property (nonatomic,readonly) unsigned numAccessoriesInHome;                            //@synthesize numAccessoriesInHome=_numAccessoriesInHome - In the implementation block
@property (nonatomic,readonly) unsigned numNonEmptyScenesInHome;                         //@synthesize numNonEmptyScenesInHome=_numNonEmptyScenesInHome - In the implementation block
@property (nonatomic,copy,readonly) NSArray * writtenValues;                             //@synthesize writtenValues=_writtenValues - In the implementation block
@property (nonatomic,copy,readonly) NSString * transportProtocolVersion;                 //@synthesize transportProtocolVersion=_transportProtocolVersion - In the implementation block
@property (assign,getter=isThreadAccessory,nonatomic) BOOL threadAccessory;              //@synthesize threadAccessory=_threadAccessory - In the implementation block
+(id)uuid;
+(id)characteristicReadLogEvent:(id)arg1 hmdAccessory:(id)arg2 hapAccessory:(id)arg3 source:(unsigned long long)arg4 isLocal:(BOOL)arg5 transactionId:(id)arg6 isCached:(BOOL)arg7 bundleId:(id)arg8 ;
+(id)characteristicWriteLogEvent:(id)arg1 hmdAccessory:(id)arg2 hapAccessory:(id)arg3 source:(unsigned long long)arg4 isTimedWrite:(BOOL)arg5 isLocal:(BOOL)arg6 transactionId:(id)arg7 bundleId:(id)arg8 writtenValues:(id)arg9 ;
-(BOOL)isLocal;
-(BOOL)isCached;
-(long long)linkType;
-(NSString *)bundleId;
-(void)setLocal:(BOOL)arg1 ;
-(NSArray *)characteristicsToRead;
-(BOOL)isRemoteAccessAllowed;
-(void)setIsLocal:(BOOL)arg1 ;
-(NSString *)primaryServiceType;
-(NSUUID *)transactionId;
-(HMDAccessory *)hmdAccessory;
-(HAPAccessory *)hapAccessory;
-(void)submitAtDate:(id)arg1 error:(id)arg2 ;
-(BOOL)isThreadAccessory;
-(id)initReadWriteLogEvent:(id)arg1 hmdAccessory:(id)arg2 hapAccessory:(id)arg3 source:(unsigned long long)arg4 isWriteOperation:(BOOL)arg5 isTimedWrite:(BOOL)arg6 isLocal:(BOOL)arg7 transactionId:(id)arg8 isCached:(BOOL)arg9 bundleId:(id)arg10 writtenValues:(id)arg11 ;
-(BOOL)isResidentAvailable;
-(void)setConsecutiveFailureCount:(unsigned long long)arg1 ;
-(BOOL)isTimedWrite;
-(NSString *)transportProtocolVersion;
-(BOOL)isRemotelyReachable;
-(unsigned long long)consecutiveFailureCount;
-(unsigned)AWDMessageType;
-(id)metricForAWD;
-(unsigned long long)triggerSource;
-(BOOL)isWriteOperation;
-(void)setThreadAccessory:(BOOL)arg1 ;
-(unsigned)numAccessoriesInHome;
-(unsigned)numNonEmptyScenesInHome;
-(unsigned long long)duetEventType;
-(NSArray *)eventDataToLog;
-(NSArray *)writtenValues;
-(id)metadataForCharacteristicAtIndex:(unsigned long long)arg1 ;
-(id)valueForCharacteristicAtIndex:(unsigned long long)arg1 ;
-(double)timeIntervalSinceFirstFailure;
-(void)setTimeIntervalSinceFirstFailure:(double)arg1 ;
@end

