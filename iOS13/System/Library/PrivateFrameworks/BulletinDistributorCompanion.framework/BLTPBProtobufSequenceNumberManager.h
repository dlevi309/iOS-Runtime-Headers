/*
* Generated on Monday, March 1, 2021 at 2:34:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BulletinDistributorCompanion.framework/BulletinDistributorCompanion
*/


@class NSLock, BLTCircularBitBuffer, NSURL, NSString, NSUUID;

@interface BLTPBProtobufSequenceNumberManager : NSObject {

	unsigned long long _sendSequenceNumber;
	unsigned long long _recvSequenceNumber;
	NSLock* _sequenceNumberAccess;
	BLTCircularBitBuffer* _duplicateEntries;
	NSURL* _sequenceNumbersURL;
	BOOL _updateSequenceNumbersOnOutOfOrder;
	unsigned long long _sessionState;
	NSString* _serviceName;
	NSUUID* _currentSessionIdentifier;
	NSUUID* _recvSessionIdentifier;

}

@property (assign,nonatomic) unsigned long long sessionState;                  //@synthesize sessionState=_sessionState - In the implementation block
@property (nonatomic,copy,readonly) NSString * serviceName;                    //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,readonly) NSUUID * currentSessionIdentifier;              //@synthesize currentSessionIdentifier=_currentSessionIdentifier - In the implementation block
@property (nonatomic,readonly) NSUUID * recvSessionIdentifier;                 //@synthesize recvSessionIdentifier=_recvSessionIdentifier - In the implementation block
-(NSString *)serviceName;
-(unsigned long long)sessionState;
-(void)setSessionState:(unsigned long long)arg1 ;
-(NSUUID *)recvSessionIdentifier;
-(NSUUID *)currentSessionIdentifier;
-(id)initWithServiceName:(id)arg1 updateSequenceNumbersOnOutOfOrder:(BOOL)arg2 ;
-(id)initWithServiceName:(id)arg1 updateSequenceNumbersOnOutOfOrder:(BOOL)arg2 duplicateCapacity:(unsigned long long)arg3 ;
-(void)_readSequenceNumbersFromStoreWithInitialDuplicateCapacity:(unsigned long long)arg1 ;
-(BOOL)_isSequenceNumberInOrder:(unsigned long long)arg1 ;
-(BOOL)_writeSequenceNumbersToStore;
-(id)_sequenceNumbersURL;
-(long long)setRecvSequenceNumber:(unsigned long long)arg1 recvSessionIdentifier:(id)arg2 force:(BOOL)arg3 ;
-(id)nextSendSequenceNumber;
@end

